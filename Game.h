#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include "Player.h"
#include "Menu.h"
#include "Escenario.h"

class Game:public Menu,public Escenario{
protected:
	ALLEGRO_DISPLAY *display;
	ALLEGRO_TIMER *timer;
	ALLEGRO_EVENT_QUEUE *event_queue;
	ALLEGRO_SAMPLES *sample;
	bool loop, redraw;

public:
	Game();
	~Game();

	int init();
	int createWindow(float , int , int );
	void gameLoop();


};
