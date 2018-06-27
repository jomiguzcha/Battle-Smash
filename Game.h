#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include "Player.h"
#include "Menu.h"

class Game:public Menu {
protected:
	ALLEGRO_DISPLAY *display;
	ALLEGRO_TIMER *timer;
	ALLEGRO_EVENT_QUEUE *event_queue;
	
	//Keyboard keyboard;
	//Player player;
	
	bool loop, redraw;

public:
	Game();
	~Game();

	int init();
	int createWindow(float , int , int );
	void gameLoop();


};
