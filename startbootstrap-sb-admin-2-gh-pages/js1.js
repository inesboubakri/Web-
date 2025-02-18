document.addEventListener('DOMContentLoaded', function () {
  const form = document.getElementById('addTravelOfferForm');

  form.addEventListener('submit', function (event) {
      let errors = [];

      // Regex to allow only letters (with accents) and spaces
      const letterRegex = /^[A-Za-z\sÀ-ÿ]+$/;
      const priceRegex = /^\d+(\.\d+)?$/;
      const allowedCategories = ["vacation", "adventure", "romantic", "family"];

      function validateField(input, condition, errorMessage) {
          if (condition) {
              errors.push(errorMessage);
              input.classList.add("error");
              input.classList.remove("valid");
          } else {
              input.classList.remove("error");
              input.classList.add("valid");
          }
      }

      // Validation for Title
      const titleInput = document.getElementById('title');
      validateField(titleInput, 
          !titleInput.value.trim() || titleInput.value.trim().length < 3 || !letterRegex.test(titleInput.value.trim()), 
          "Le titre est obligatoire avec une longueur minimale de 3 caractères et doit contenir uniquement des lettres et des espaces."
      );

      // Validation for Destination
      const destinationInput = document.getElementById('destination');
      validateField(destinationInput, 
          !destinationInput.value.trim() || destinationInput.value.trim().length < 3 || !letterRegex.test(destinationInput.value.trim()), 
          "La destination doit comporter au minimum 3 caractères et contenir uniquement des lettres et des espaces."
      );

      // Validation for Departure and Return Dates
      const departureDateInput = document.getElementById('departureDate');
      const returnDateInput = document.getElementById('returnDate');
      validateField(departureDateInput, !departureDateInput.value, "La date de départ est obligatoire.");
      validateField(returnDateInput, !returnDateInput.value, "La date de retour est obligatoire.");

      if (departureDateInput.value && returnDateInput.value) {
          const departureDate = new Date(departureDateInput.value);
          const returnDate = new Date(returnDateInput.value);
          if (departureDate > returnDate) {
              errors.push("La date de départ doit précéder la date de retour.");
              departureDateInput.classList.add("error");
              returnDateInput.classList.add("error");
          } else {
              departureDateInput.classList.remove("error");
              departureDateInput.classList.add("valid");
              returnDateInput.classList.remove("error");
              returnDateInput.classList.add("valid");
          }
      }

      // Validation for Price
      const priceInput = document.getElementById('price');
      validateField(priceInput, 
          !priceInput.value.trim() || !priceRegex.test(priceInput.value.trim()), 
          "Le prix doit être un nombre entier positif ou décimal."
      );

      // Validation for Category
      const categoryInput = document.getElementById('category');
      validateField(categoryInput, 
          !categoryInput.value || !allowedCategories.includes(categoryInput.value), 
          "Veuillez sélectionner une catégorie parmi les options proposées."
      );

      // If errors exist, prevent form submission
      if (errors.length > 0) {
          event.preventDefault();
          alert(errors.join("\n"));
      }
  });
});
