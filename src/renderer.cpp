#include "renderer.hpp"

void Renderer::windowSetup(int width, int height, const char* title) {
	sf::ContextSettings settings;
	settings.depthBits = 24;
	settings.stencilBits = 8;
	settings.antialiasingLevel = 2;
	settings.majorVersion = 4;
	settings.minorVersion = 6;
	settings.attributeFlags = sf::ContextSettings::Core;

	this->window.create(sf::VideoMode(width, height), title, sf::Style::Close, settings);
}

void Renderer::mainLoop() {
	bool running = true;
	while (running) {
		sf::Event windowEvent;
		while (window.pollEvent(windowEvent)) {
			switch (windowEvent.type) {
			case sf::Event::Closed:
				running = false;
				break;
			}
		}
	}
}