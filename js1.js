document.addEventListener('DOMContentLoaded', function () {
    const form = document.getElementById('addTravelOfferForm');
  
    form.addEventListener('submit', function (event) {
      let errors = [];
  
      // Regex to allow only letters (with accents) and spaces
      const letterRegex = /^[A-Za-z\sÀ-ÿ]+$/;
  
      // Validation for the title (min 3 characters and letters only)
      const titleInput = document.getElementById('title');
      if (!titleInput.value || titleInput.value.trim().length < 3) {
        errors.push("Le titre est obligatoire avec une longueur minimale de 3 caractères.");
      } else if (!letterRegex.test(titleInput.value.trim())) {
        errors.push("Le titre doit contenir uniquement des lettres et des espaces.");
      }
  
      // Validation for the destination (min 3 characters, letters and spaces only)
      const destinationInput = document.getElementById('destination');
      if (!destinationInput.value || destinationInput.value.trim().length < 3) {
        errors.push("La destination doit comporter au minimum 3 caractères.");
      } else if (!letterRegex.test(destinationInput.value.trim())) {
        errors.push("La destination doit contenir uniquement des lettres et des espaces.");
      }
  
      // Validation for departure and return dates (both must be provided)
      const departureDateInput = document.getElementById('departureDate');
      const returnDateInput = document.getElementById('returnDate');
      if (!departureDateInput.value) {
        errors.push("La date de départ est obligatoire.");
      }
      if (!returnDateInput.value) {
        errors.push("La date de retour est obligatoire.");
      }
      // Check that departure date is before or equal to return date
      if (departureDateInput.value && returnDateInput.value) {
        const departureDate = new Date(departureDateInput.value);
        const returnDate = new Date(returnDateInput.value);
        if (departureDate > returnDate) {
          errors.push("La date de départ doit précéder la date de retour.");
        }
      }
  
      // Validation for the price (must be a number, integer or decimal)
      const priceInput = document.getElementById('price');
      // Using regex to ensure the input contains only numbers (optionally decimal)
      const priceRegex = /^\d+(\.\d+)?$/;
      if (!priceInput.value || !priceRegex.test(priceInput.value.trim())) {
        errors.push("Le prix doit être un nombre entier positif ou décimal.");
      }
  
      // Validation for the category (must be one of the predefined list)
      const categoryInput = document.getElementById('category');
      const allowedCategories = ["vacation", "adventure", "romantic", "family"];
      if (!categoryInput.value || !allowedCategories.includes(categoryInput.value)) {
        errors.push("Veuillez sélectionner une catégorie parmi les options proposées.");
      }
  
      // If there are any errors, prevent form submission and show alert with messages
      if (errors.length > 0) {
        event.preventDefault();
        alert(errors.join("\n"));
      }
    });
  });