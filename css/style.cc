/* Reset default styling */
* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

/* Body Styling */
body {
    font-family: Arial, sans-serif;
    background-color: #FFFFFF;
    color: #FFFFFF;
}

/* Header Styling */
header {
    background-color: #052111; /*  darkgreen background */
    color: #977307;
    text-align: center;
    padding: 40px 0; /* Padding for more height */
}

header h1 {
    font-size: 36px;
    font-weight: bold;
}

/* Navigation Menu */
header nav ul {
    list-style-type: none;
    padding: 10px 0;
}

header nav ul li {
    display: inline;
    margin: 0 15px;
}

header nav ul li a {
    color: white;
    text-decoration: none;
    font-size: 18px;
    transition: color 0.3s ease;
}

header nav ul li a:hover {
    color: #f1c40f; /* Golden color on hover */
}

/* Main Content Section */
main {
    padding: 40px 20px;
}

/* Hits Section (Flexbox Layout) */
.hits {
    display: flex;
    justify-content: space-around;
    flex-wrap: wrap;
    gap: 20px;
}

.hit {
    background-color: #052111;
    border: 1px solid #ddd;
    border-radius: 8px;
    width: 250px;
    text-align: center;
    padding: 20px;
    transition: transform 0.3s ease, box-shadow 0.3s ease;
}

.hit img {
    width: 100%;
    border-radius: 8px;
    transition: transform 0.3s ease;
}

/* Hover Effects */
.hit:hover {
    transform: translateY(-10px);
    box-shadow: 0 4px 10px rgba(0, 0, 0, 0.2);
}

.hit:hover img {
    transform: scale(1.05);
}

/* Title and Description Styling */
.hit h2 {
    font-size: 24px;
    color: #977307; /* gold color */
    margin: 15px 0;
    font-weight: bold;
}

.hit p {
    font-size: 16px;
    color: #666;
}

/* Scroll-to-Top Button */
#scrollTopBtn {
    position: fixed;
    bottom: 30px;
    right: 30px;
    background-color: #bb0a1e;
    color: white;
    border: none;
    border-radius: 50%;
    padding: 15px;
    font-size: 24px;
    cursor: pointer;
    display: block; /* Initially hidden */
    transition: background-color 0.3s ease;
}

#scrollTopBtn:hover {
    background-color: #f1c40f;
}

/* Footer Styling */
footer {
    background-color: #052111;
    color: white;
    text-align: center;
    padding: 20px 0;
}

footer p {
    margin-bottom: 10px;
}

footer .social-links a {
    color: white;
    text-decoration: none;
    margin: 0 10px;
    font-size: 16px;
}

footer .social-links a:hover {
    color: #f1c40f;
    text-decoration: underline;
}

/* Responsive Design */
@media (max-width: 768px) {
    .hits {
        flex-direction: column;
        align-items: center;
    }

    .hit {
        width: 80%;
        margin-bottom: 20px;
    }
}