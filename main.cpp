#include "SFML/Graphics.hpp"
using namespace sf;

int main()
{
    RenderWindow window(sf::VideoMode(1000, 1000), "Make Games Man!");
    CircleShape shape(80.f, 90);
    shape.setFillColor(sf::Color(44, 211, 225)); // Color circle
    shape.setPosition(200, 200); // Center circle

    Vector2f viewSize(1024, 768);
    RectangleShape rect(Vector2f(500.0f, 300.0f));
    rect.setFillColor(Color::Green);
    rect.setPosition(viewSize.x, viewSize.y);
    rect.setOrigin(Vector2f(rect.getSize().x / 2, rect.getSize().y / 2));




    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color(0, 0, 0)); // Color background
        window.draw(shape);
        window.draw(rect);
        window.display();
    }

    return 0;
}