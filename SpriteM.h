#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include"Escenario.h"
#include"Game.h"

class SpriteM:public Escenario{
	   private:
		   ALLEGRO_BITMAP *Player1;
		   ALLEGRO_BITMAP *Player2;
		   ALLEGRO_BITMAP *Player3;
		   ALLEGRO_BITMAP *Player4;
		   ALLEGRO_BITMAP *Player5;
		   ALLEGRO_BITMAP *Player6;
		   ALLEGRO_BITMAP *Player7;
		   ALLEGRO_BITMAP *Player8;
		   ALLEGRO_BITMAP *Player9;
		   ALLEGRO_BITMAP *Player10;
		   ALLEGRO_BITMAP *Player11;
		   ALLEGRO_BITMAP *Player12;
		   ALLEGRO_BITMAP *Player13;
		   ALLEGRO_BITMAP *Player14;
		   ALLEGRO_BITMAP *Player15;
		   ALLEGRO_BITMAP *Player16;
		   ALLEGRO_BITMAP *Player17;
		   ALLEGRO_BITMAP *Player18;
		   ALLEGRO_BITMAP *Player19;
		   ALLEGRO_BITMAP *Player20;
		   
	   public:
		  SpriteM();
		  ~SpriteM() {};
		  void draw();
};

