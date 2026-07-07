#pragma once
#include "State.h"
#include <SFML/Graphics.hpp>

class DummyState : public State {
private:
    sf::RectangleShape box;  // Một hình chữ nhật đơn giản

public:
    void onEnter() override;
    void onExit() override;
    void handleEvent(const sf::Event& event) override;
    void update(float deltaTime) override;
    void render(sf::RenderWindow& window) override;
};