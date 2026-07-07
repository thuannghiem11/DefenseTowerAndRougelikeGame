#include "Game.h"
<<<<<<< HEAD
#include "DummyState.h"   // ?? test State m?u (có th? thay b?ng MenuState sau)
#include <iostream>

Game::Game()
    : window(sf::VideoMode({ 1280, 720 }), "Eternal Siege") {
    window.setFramerateLimit(60);
    // Kh?i t?o State ??u tiên (DummyState ?? test)
    stateMachine.changeState(std::make_unique<DummyState>());
=======

Game::Game() : window(sf::VideoMode({ 1280, 720 }), "Eternal Siege") {
    window.setFramerateLimit(60);
>>>>>>> b1ba3f56f7aa0e986c1ce5984e081e3e70784d44
}

void Game::run() {
    while (window.isOpen()) {
<<<<<<< HEAD
        // SFML 3: pollEvent() tr? v? std::optional
=======
>>>>>>> b1ba3f56f7aa0e986c1ce5984e081e3e70784d44
        while (const std::optional<sf::Event> event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
<<<<<<< HEAD
            // Truy?n event cho StateMachine
            stateMachine.handleEvent(*event);
        }

        float dt = clock.restart().asSeconds();
        stateMachine.update(dt);

=======
            stateMachine.handleEvent(*event);
        }
        float dt = clock.restart().asSeconds();
        stateMachine.update(dt);
>>>>>>> b1ba3f56f7aa0e986c1ce5984e081e3e70784d44
        window.clear();
        stateMachine.render(window);
        window.display();
    }
}