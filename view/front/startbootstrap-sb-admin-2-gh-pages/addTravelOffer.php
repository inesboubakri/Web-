<!DOCTYPE html>
<html>
<head>
    <title>Add Travel Offer</title>
</head>
<body>
    <h2>Add a Travel Offer</h2>
    <form action="Verification.php" method="POST">
        <label>Title:</label>
        <input type="text" name="title" required><br><br>

        <label>Destination:</label>
        <input type="text" name="destination" required><br><br>

        <label>Departure Date:</label>
        <input type="date" name="departureDate" required><br><br>

        <label>Return Date:</label>
        <input type="date" name="returnDate" required><br><br>

        <label>Price (€):</label>
        <input type="number" name="price" min="1" required><br><br>

        <label>Category:</label>
        <select name="category">
            <option value="Luxury">Luxury</option>
            <option value="Economy">Economy</option>
            <option value="Adventure">Adventure</option>
        </select><br><br>

        <button type="submit">Add Offer</button>
    </form>
</body>
</html>
