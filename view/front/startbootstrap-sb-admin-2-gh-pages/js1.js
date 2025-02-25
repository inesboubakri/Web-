document.addEventListener("DOMContentLoaded", function () {
    const form = document.getElementById("addTravelOfferForm");

    // Validation function
    function validateField(input, isValid, message) {
        let errorSpan = input.nextElementSibling;
        if (!errorSpan || !errorSpan.classList.contains("error-message")) {
            errorSpan = document.createElement("small");
            errorSpan.classList.add("form-text", "error-message");
            input.parentNode.insertBefore(errorSpan, input.nextSibling);
        }
        errorSpan.textContent = message;
        errorSpan.style.color = isValid ? "green" : "red";
    }

    // Real-time validation (keyup)
    document.getElementById("title").addEventListener("keyup", function () {
        const isValid = this.value.trim().length >= 3;
        validateField(this, isValid, isValid ? "Correct" : "Le titre doit contenir au moins 3 caractères.");
    });

    document.getElementById("destination").addEventListener("keyup", function () {
        const isValid = /^[A-Za-z\s]{3,}$/.test(this.value.trim());
        validateField(this, isValid, isValid ? "Correct" : "La destination doit contenir uniquement des lettres et au moins 3 caractères.");
    });

    // Form submission validation
    form.addEventListener("submit", function (event) {
        event.preventDefault(); // Prevent form submission if errors exist
        let isValid = true;

        // Validate Title
        const title = document.getElementById("title");
        if (title.value.trim().length < 3) {
            validateField(title, false, "Le titre doit contenir au moins 3 caractères.");
            isValid = false;
        } else {
            validateField(title, true, "Correct");
        }

        // Validate Destination
        const destination = document.getElementById("destination");
        if (!/^[A-Za-z\s]{3,}$/.test(destination.value.trim())) {
            validateField(destination, false, "La destination doit contenir uniquement des lettres et au moins 3 caractères.");
            isValid = false;
        } else {
            validateField(destination, true, "Correct");
        }

        // Validate Departure Date
        const departureDate = document.getElementById("departureDate");
        if (!departureDate.value) {
            validateField(departureDate, false, "Veuillez entrer une date de départ valide.");
            isValid = false;
        } else {
            validateField(departureDate, true, "Correct");
        }

        // Validate Return Date
        const returnDate = document.getElementById("returnDate");
        if (!returnDate.value || returnDate.value <= departureDate.value) {
            validateField(returnDate, false, "La date de retour doit être ultérieure à la date de départ.");
            isValid = false;
        } else {
            validateField(returnDate, true, "Correct");
        }

        // Validate Price
        const price = document.getElementById("price");
        if (isNaN(price.value) || price.value <= 0) {
            validateField(price, false, "Le prix doit être un nombre positif.");
            isValid = false;
        } else {
            validateField(price, true, "Correct");
        }

        // Validate Category
        const category = document.getElementById("category");
        if (!category.value) {
            validateField(category, false, "Veuillez sélectionner une catégorie.");
            isValid = false;
        } else {
            validateField(category, true, "Correct");
        }

        // If all fields are valid, show success message
        if (isValid) {
            alert("Offre ajoutée avec succès !");
            form.submit();
        }
    });
});
