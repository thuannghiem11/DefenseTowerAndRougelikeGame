#include "Game.h"
#include "DummyState.h"   // ?? test State m?u (có th? thay b?ng MenuState sau)
#include <iostream>

Game::Game()
    : window(sf::VideoMode({ 1280, 720 }), "Eternal Siege") {
    window.setFramerateLimit(60);
    // Kh?i t?o State ??u tiên (DummyState ?? test)
    stateMachine.changeState(std::make_unique<DummyState>());
}

void Game::run() {
    while (window.isOpen()) {
        // SFML 3: pollEvent() tr? v? std::optional
        while (const std::optional<sf::Event> event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
            // Truy?n event cho StateMachine
            stateMachine.handleEvent(*event);
        }

        float dt = clock.restart().asSeconds();
        stateMachine.update(dt);

        window.clear();
        stateMachine.render(window);
        window.display();
    }
}