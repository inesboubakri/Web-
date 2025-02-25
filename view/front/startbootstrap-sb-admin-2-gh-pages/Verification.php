<?php
require_once "Model/TravelOffer.php";
require_once "Controller/TravelOfferController.php";

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $title = $_POST["title"];
    $destination = $_POST["destination"];
    $departureDate = $_POST["departureDate"];
    $returnDate = $_POST["returnDate"];
    $price = $_POST["price"];
    $category = $_POST["category"];

    // Create an offer from form data
    $offre1 = new TravelOffer($title, $destination, $departureDate, $returnDate, $price, $category);

    // Display offer details using var_dump()
    var_dump($offre1);

    // Display offer using TravelOfferController
    $controller = new TravelOfferController();
    $controller->showTravelOffer($offre1);
}
?>
