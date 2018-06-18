#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"

class Menu
{   private:
		  ALLEGRO_DISPLAY * display ;
		  ALLEGRO_BITMAP  *menu ;   
		  ALLEGRO_BITMAP  *menu1;
		  ALLEGRO_BITMAP  *menu2;
		  ALLEGRO_BITMAP  *menu3;
		  ALLEGRO_BITMAP  *menu4;
		  ALLEGRO_BITMAP  *menu5;
		  ALLEGRO_BITMAP  *menu6;
		  ALLEGRO_BITMAP  *menu7;
		  ALLEGRO_BITMAP  *menu8;
		  ALLEGRO_EVENT_QUEUE *event_queue;
		  int  x,ancho,alto;

    public:
		  Menu();
		  ~Menu();

		  int init();
		  int createWindow();
		  void Loop();

	   };

