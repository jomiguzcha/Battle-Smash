#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include "Player.h"
#include "Menu.h"
#include "Escenario.h"

class Game :public Menu, public Escenario {
protected:
	ALLEGRO_DISPLAY * display;
	ALLEGRO_TIMER *timer;
	ALLEGRO_EVENT_QUEUE *event_queue;
	ALLEGRO_SAMPLE *sample;
	bool loop, redraw;

public:
	Game();
	~Game();

	int init();
	int createWindow(float, int, int);
	void gameLoop();


};

class gam {
private:
	int inGame = 1;
	int Pause = 2;
	int Exit = 0;
public:
	gam(int _inGame, int _Pause, int _Exit) {
		inGame = _inGame;
		Pause = _Pause;
		Exit = _Exit;
	}
	int caso1() {
		return inGame;
	}
	int caso2() {
		return Pause;

	}
	int caso3() {
		return Exit;
	}
};


class state:public gam {
private:
	int estado;
public:
	state(int _inGame,int _Pause,int _Exit,int estado):gam(_inGame,_Pause,_Exit) {
		this->estado = estado;

	}	
};
