#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>

#include "Player.h"
#Include "keyboard.h"

class Game {
private:
	ALLEGRO_DISPLAY *display;
	ALLEGRO_TIMER *timer;
	ALLEGRO_EVENT_QUEUE *event_queue;
	ALLEGRO_BITMAP  *image ;
	
	Keyboard keyboard;
	Player player;


	bool loop, redraw;
public:
	Game();
	~Game();

	int init();
	int createWindow(float , int , int );
	void gameLoop();


};
