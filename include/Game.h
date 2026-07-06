#pragma once
#include <SFML/Graphics.hpp>
#include "StateMachine.h"

class Game {
private:
    sf::RenderWindow window;
    StateMachine stateMachine;
    sf::Clock clock;

public :
    Game();
    void run();

};