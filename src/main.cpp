#include <SFML/Graphics.hpp>

int main() {
    unsigned int HEIGHT = 800; 
    unsigned int WIDTH = 600; 
    sf::RenderWindow window(sf::VideoMode({HEIGHT, WIDTH}), "SFML TEST"); 

    sf::CircleShape circle(50.0f);
    circle.setOrigin(circle.getGeometricCenter());
    circle.setPosition({ HEIGHT / 2.0f, WIDTH / 2.0f });
    circle.setFillColor(sf::Color::Red);
    circle.setOutlineColor(sf::Color::White); 
    circle.setOutlineThickness(2.0f); 

    sf::RectangleShape rectangle({50.0f, 80.0f});
    rectangle.setOrigin(rectangle.getGeometricCenter());
    rectangle.setPosition({100.0f, 100.0f}); 
    rectangle.setFillColor(sf::Color::Cyan);
    rectangle.setOutlineColor(sf::Color::White);
    rectangle.setOutlineThickness(2.0f);

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }


        window.clear();
        window.draw(circle);
        window.draw(rectangle); 
        window.display();

    }
}