#pragma once

#include <SFML/Window.hpp>

class Renderer {
private:
	sf::Window window;
public:
	void windowSetup(int width, int height, const char* title);
	void mainLoop();
};