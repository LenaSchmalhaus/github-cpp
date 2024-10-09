<!DOCTYPE html>
<html lang="de">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Online Shop</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>

<h1>Willkommen in unserem Online-Shop!</h1>

<!-- Dynamische Produktlinks -->
<section id="featured-products">
    <h2>Bestsellers</h2>
<div class="product-grid">

<!-- Erste Reihe mit 3 Produkten -->
<div class="product-row">
    <div class="product-card">
        <a href="product.php?id=1" class="product-link">
            <div class="product-image">
                <img src="images/product1-main.jpg" class="main-image" alt="Produkt 1">
                <img src="images/product1-hover.jpg" class="hover-image" alt="Produkt 1 Hover">
            </div>
            <div class="product-info">
                <h3>Produkt 1</h3>
                <p class="price">99,99€</p>
            </div>
        </a>
    </div>

<div class="product-card">
    <a href="product.php?id=2" class="product-link">
        <div class="product-image">
            <img src="images/product2-main.jpg" class="main-image" alt="Produkt 2">
            <img src="images/product2-hover.jpg" class="hover-image" alt="Produkt 2 Hover">
        </div>
        <div class="product-info">
            <h3>Produkt 2</h3>
            <p class="price">79,99€</p>
        </div>
    </a>
</div>

<div class="product-card">
    <a href="product.php?id=3" class="product-link">
        <div class="product-image">
            <img src="images/product3-main.jpg" class="main-image" alt="Produkt 3">
            <img src="images/product3-hover.jpg" class="hover-image" alt="Produkt 3 Hover">
        </div>
        <div class="product-info">
            <h3>Produkt 3</h3>
            <p class="price">89,99€</p>
        </div>
    </a>
</div>
</div>

<!-- Zweite Reihe mit 3 Produkten -->
<div class="product-row">
    <div class="product-card">
        <a href="product.php?id=4" class="product-link">
            <div class="product-image">
                <img src="images/product4-main.jpg" class="main-image" alt="Produkt 4">
                <img src="images/product4-hover.jpg" class="hover-image" alt="Produkt 4 Hover">
            </div>
            <div class="product-info">
                <h3>Produkt 4</h3>
                <p class="price">69,99€</p>
            </div>
        </a>
    </div>

<div class="product-card">
    <a href="product.php?id=5" class="product-link">
        <div class="product-image">
            <img src="images/product5-main.jpg" class="main-image" alt="Produkt 5">
            <img src="images/product5-hover.jpg" class="hover-image" alt="Produkt 5 Hover">
        </div>
        <div class="product-info">
            <h3>Produkt 5</h3>
            <p class="price">59,99€</p>
        </div>
    </a>
</div>

<div class="product-card">
    <a href="product.php?id=6" class="product-link">
        <div class="product-image">
            <img src="images/product6-main.jpg" class="main-image" alt="Produkt 6">
            <img src="images/product6-hover.jpg" class="hover-image" alt="Produkt 6 Hover">
        </div>
        <div class="product-info">
            <h3>Produkt 6</h3>
            <p class="price">49,99€</p>
        </div>
    </a>
</div>
</div>
</div>
</section>

</body>
</html>
