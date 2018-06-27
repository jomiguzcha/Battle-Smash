#include <iostream>
using namespace std;
#include "Sprite.h"
#include "Keyboard.h"
#include<sstream>
class Player : public Sprite, public Keyboard {
private:
	int health;
	ALLEGRO_DISPLAY *display;
	enum Direction { DOWN = 0, LEFT = 3, RIGHT = 6, UP = 9 };
	int interval = 3;
	ALLEGRO_BITMAP *playerwalk[12];
	ALLEGRO_KEYBOARD_STATE keystate;
	ALLEGRO_TIMER *timer = al_create_timer(1.0 / 60);
	ALLEGRO_EVENT_QUEUE *event_queue = al_create_event_queue();
	bool done = false, draw = true, active = false;
	float x = 10, y = 10, moveSpeed = 5;
	int dir = DOWN, prevDir, index = 0;

public:


	Player(int, float, int , bool , bool , bool , float , float, int, int, int);
	void load();
	
	~Player();

	void doLogic(Keyboard keyboard);
};
