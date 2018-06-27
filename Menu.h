#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"

class Menu
{
private:
	ALLEGRO_DISPLAY * display;
	ALLEGRO_BITMAP  *menu1_1;
	ALLEGRO_BITMAP  *menu1_2;
	ALLEGRO_BITMAP  *menu1_3;
	ALLEGRO_BITMAP  *menu2;
	ALLEGRO_BITMAP  *jigly1;
	ALLEGRO_BITMAP  *kirby1;
	ALLEGRO_BITMAP  *link1;
	ALLEGRO_BITMAP  *tychus1;
	ALLEGRO_BITMAP  *jigly2;
	ALLEGRO_BITMAP  *kirby2;
	ALLEGRO_BITMAP  *link2;
	ALLEGRO_BITMAP  *tychus2;
	ALLEGRO_BITMAP  *jigly3;
	ALLEGRO_BITMAP  *kirby3;
	ALLEGRO_BITMAP  *link3;
	ALLEGRO_BITMAP  *tychus3;
	ALLEGRO_EVENT_QUEUE *event_queue;
	int  x, y, ancho, alto;

public:
	Menu();
	~Menu();

	int loadWindow();
	void draw_menu1();
	void draw_menu2();
	void Loop();
	void Loop2();

};
