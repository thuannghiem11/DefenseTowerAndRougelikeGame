#pragma once
#include <memory>
#include <stack>
#include "State.h"

class StateMachine {
<<<<<<< HEAD
public:
    void pushState(std::unique_ptr<State> state);
    void popState();
    void changeState(std::unique_ptr<State> state);
    State* getCurrentState();

    void handleEvent(const sf::Event& event);
    void update(float deltaTime);
    void render(sf::RenderWindow& window);

private:
    std::stack<std::unique_ptr<State>> states;
};
=======
private:
	std::stack<std::unique_ptr<State>> states;

public:
	void pushState(std::unique_ptr<State> state);
	void popState();
	void changeState(std::unique_ptr<State> state);
	State* getCurrentState();
	void handleEvent(const sf::Event& event);
	void update(float deltatime);
	void render(sf::RenderWindow& window);

};
>>>>>>> b1ba3f56f7aa0e986c1ce5984e081e3e70784d44
