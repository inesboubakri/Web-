<?php
require_once "../Model/TravelOffer.php";

// Create an example offer
$offre1 = new TravelOffer("Summer Vacation", "Paris", "2024-07-10", "2024-07-20", 1200, "Luxury");

// Display using var_dump()
var_dump($offre1);

// Display using show() method
$offre1->show();
?>
