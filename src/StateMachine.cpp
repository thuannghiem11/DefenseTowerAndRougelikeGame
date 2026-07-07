#include "StateMachine.h"

void StateMachine::pushState(std::unique_ptr<State> state) {
<<<<<<< HEAD
    if (!states.empty()) {
        states.top()->onExit();
    }
=======
    if (!states.empty()) states.top()->onExit();
>>>>>>> b1ba3f56f7aa0e986c1ce5984e081e3e70784d44
    state->onEnter();
    states.push(std::move(state));
}

void StateMachine::popState() {
    if (!states.empty()) {
        states.top()->onExit();
        states.pop();
<<<<<<< HEAD
        if (!states.empty()) {
            states.top()->onEnter();
        }
=======
        if (!states.empty()) states.top()->onEnter();
>>>>>>> b1ba3f56f7aa0e986c1ce5984e081e3e70784d44
    }
}

void StateMachine::changeState(std::unique_ptr<State> state) {
    if (!states.empty()) {
        states.top()->onExit();
        states.pop();
    }
    state->onEnter();
    states.push(std::move(state));
}

State* StateMachine::getCurrentState() {
    return states.empty() ? nullptr : states.top().get();
}

void StateMachine::handleEvent(const sf::Event& event) {
<<<<<<< HEAD
    if (auto* cur = getCurrentState()) {
        cur->handleEvent(event);
    }
}

void StateMachine::update(float dt) {
    if (auto* cur = getCurrentState()) {
        cur->update(dt);
    }
}

void StateMachine::render(sf::RenderWindow& window) {
    if (auto* cur = getCurrentState()) {
        cur->render(window);
    }
=======
    if (auto* cur = getCurrentState()) cur->handleEvent(event);
}

void StateMachine::update(float dt) {
    if (auto* cur = getCurrentState()) cur->update(dt);
}

void StateMachine::render(sf::RenderWindow& window) {
    if (auto* cur = getCurrentState()) cur->render(window);
>>>>>>> b1ba3f56f7aa0e986c1ce5984e081e3e70784d44
}