#include "Player.hpp"

Player::Player() {
    body.setSize({50.0f, 50.0f});
    body.setFillColor(sf::Color::Green);
    body.setPosition({375.0f, 275.0f});
    speed = 5.0f; // Tốc độ di chuyển (pixel mỗi khung hình)
}

void Player::update() {
    sf::Vector2f movement(0.0f, 0.0f);

    // Kiểm tra xem người dùng có đang đè các phím di chuyển không
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) {
        movement.y -= speed; // Lên trên thì giảm Y (hệ tọa độ màn hình Oxy có Y hướng xuống)
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
        movement.y += speed; // Xuống dưới thì tăng Y
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) {
        movement.x -= speed; // Sang trái thì giảm X
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {
        movement.x += speed; // Sang phải thì tăng X
    }

    // Thực hiện dịch chuyển khối hình của Ninja
    body.move(movement);
}

void Player::draw(sf::RenderWindow& window) {
    window.draw(body);
}