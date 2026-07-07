#pragma once
#include <SFML/Graphics.hpp>

class State {
public:
<<<<<<< HEAD
    virtual ~State() = default;

    virtual void onEnter() = 0;
    virtual void onExit() = 0;
    virtual void handleEvent(const sf::Event& event) = 0;
    virtual void update(float deltaTime) = 0;
    virtual void render(sf::RenderWindow& window) = 0;
};
=======
	virtual ~State() = default;
	virtual void onEnter() = 0;
	virtual void onExit() = 0;
	virtual void handleEvent(const sf::Event& event) = 0;
	virtual void update(float deltatime) = 0;
	virtual void render(sf::RenderWindow& window) = 0;
};
>>>>>>> b1ba3f56f7aa0e986c1ce5984e081e3e70784d44
