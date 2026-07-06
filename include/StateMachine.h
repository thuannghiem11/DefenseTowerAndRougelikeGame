#pragma once
#include <memory>
#include <stack>
#include "State.h"

class StateMachine {
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
