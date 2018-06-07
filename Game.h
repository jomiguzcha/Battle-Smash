#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>

#include "Player.h"

class Game {
private:
	ALLEGRO_DISPLAY *display;
	ALLEGRO_TIMER *timer;
	ALLEGRO_EVENT_QUEUE *event_queue;
	ALLEGRO_BITMAP  *image ;
	
	Player player;


	bool loop, redraw;
public:
	Game();
	~Game();

	int init();
	int createWindow(float , int , int );
	void gameLoop();


};
