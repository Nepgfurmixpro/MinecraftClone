#include "renderer.hpp"

int main() {
	Renderer renderer;
	renderer.windowSetup(1280, 720, "Minecraft Clone C++");
	renderer.mainLoop();
	return 0;
}