<?php
class TravelOffer {
    private $title;
    private $destination;
    private $departureDate;
    private $returnDate;
    private $price;
    private $category;

    // Constructor
    public function __construct($title, $destination, $departureDate, $returnDate, $price, $category) {
        $this->title = $title;
        $this->destination = $destination;
        $this->departureDate = $departureDate;
        $this->returnDate = $returnDate;
        $this->price = $price;
        $this->category = $category;
    }

    // Method to display travel offer
    public function show() {
        echo "<table border='1'>";
        echo "<tr><th>Title</th><th>Destination</th><th>Departure Date</th><th>Return Date</th><th>Price (€)</th><th>Category</th></tr>";
        echo "<tr>
                <td>{$this->title}</td>
                <td>{$this->destination}</td>
                <td>{$this->departureDate}</td>
                <td>{$this->returnDate}</td>
                <td>{$this->price}</td>
                <td>{$this->category}</td>
              </tr>";
        echo "</table>";
    }
}
?>
