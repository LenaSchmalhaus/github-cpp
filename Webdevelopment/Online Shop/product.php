<?php
// Beispielhafte Produktdaten (könnten später aus einer Datenbank kommen)
$products = [
    1 => ['name' => 'Produkt 1', 'price' => '99,99€', 'description' => 'Beschreibung von Produkt 1', 'image' => 'produkt1.jpg'],
    2 => ['name' => 'Produkt 2', 'price' => '79,99€', 'description' => 'Beschreibung von Produkt 2', 'image' => 'produkt2.jpg'],
    // Weitere Produkte hinzufügen...
];

// Produkt-ID aus der URL auslesen (z. B. product.php?id=1)
$product_id = $_GET['id'];

// Prüfen, ob das Produkt existiert
if (!isset($products[$product_id])) {
    echo "Produkt nicht gefunden!";
    exit;
}

// Produktdetails anzeigen
$product = $products[$product_id];
?>

<!DOCTYPE html>
<html lang="de">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title><?php echo $product['name']; ?></title>
    <link rel="stylesheet" href="Styles/styles.css">
</head>
<body>

<h1><?php echo $product['name']; ?></h1>
<p>Preis: <?php echo $product['price']; ?></p>
<p>Beschreibung: <?php echo $product['description']; ?></p>
<img src="images/<?php echo $product['image']; ?>" alt="<?php echo $product['name']; ?>">

</body>
</html>
