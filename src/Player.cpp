#include "Player.hpp"

Player::Player() {
    body.setSize({ 50.0f, 50.0f });
    body.setFillColor(sf::Color::Green);
    body.setPosition({ 375.0f, 275.0f });
    speed = 5.0f;
}

void Player::update() {
    sf::Vector2f movement(0.0f, 0.0f);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) movement.y -= speed;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) movement.y += speed;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) movement.x -= speed;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) movement.x += speed;
    body.move(movement);
}

void Player::draw(sf::RenderWindow& window) {
    window.draw(body);
}