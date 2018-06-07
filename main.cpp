#include "Game.h"


int main() {
	Game *game = new Game();
	game->init();
	game->createWindow(60.0, 800, 600);
	game->gameLoop();

	return 0;
}
