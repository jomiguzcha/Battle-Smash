
#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"
#include "Game.h"

int main() {
	Game *game = new Game();
	game->init();
	game->createWindow(1000.0, 898, 798);
	game->loadWindow();
	game->gameLoop();

	return 0;
}