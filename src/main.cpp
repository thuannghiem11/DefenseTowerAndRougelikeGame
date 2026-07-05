#include <SFML/Graphics.hpp>
#include "Player.hpp"

int main() {
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Roguelike Ninja");
    window.setFramerateLimit(60);

    Player ninja; // Triệu hồi Ninja từ class Player

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        // Cập nhật vị trí nút bấm cho Ninja
        ninja.update();

        window.clear(sf::Color::Black);

        // Vẽ Ninja lên màn hình
        ninja.draw(window);

        window.display();
    }

    return 0;
}