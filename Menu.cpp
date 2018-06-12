#include <iostream>
#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"

using namespace std;

int main(int argc, char **argv) {
       
    ALLEGRO_DISPLAY *display = NULL;
    ALLEGRO_BITMAP  *menu1 = NULL;
    ALLEGRO_BITMAP  *menu2 = NULL;
    ALLEGRO_BITMAP  *menu3 = NULL;
   ALLEGRO_EVENT_QUEUE *event_queue= NULL;
    bool salir = false;
    int x, y;

    if (!al_init()) {
	   return 0;
    }

    if (!al_init_image_addon()) {
	   return 0;
    }
    
    al_install_mouse();

    display = al_create_display(898, 798);

    if (!display) {
	   return 0;
    }

    event_queue = al_create_event_queue();

    if (!event_queue) {
	   al_destroy_event_queue(event_queue);
	   al_destroy_display(display);
	   return 0;
    }


    al_register_event_source(event_queue, al_get_display_event_source(display));
    al_register_event_source(event_queue, al_get_mouse_event_source());
    menu1 = al_load_bitmap("menu1.png");    
    menu2 = al_load_bitmap("menu2.png");
    menu3 = al_load_bitmap("menu3.png");
 

    while (!salir) {
	   ALLEGRO_EVENT ev;
	   al_wait_for_event(event_queue, &ev);
	   
	   if (ev.type == ALLEGRO_EVENT_MOUSE_AXES) {
		  x = ev.mouse.x;
		  y = ev.mouse.y;
	   }

	   cout << "x: " << x <<"\t"<< "y: " << y << endl;

	   if (x> 222 && x < 536 && y> 515 && y < 586) {
		  al_draw_bitmap(menu2, 0, 0, 0);
		  if (ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN) {
			 salir = true;}
		  
	   }
	   else if (x > 239 && x < 627 &&  y > 411 && y < 692) {
	       al_draw_bitmap(menu3, 0, 0, 0);
		  if (ev.type==ALLEGRO_EVENT_MOUSE_BUTTON_DOWN) {
			 salir = true; }
	   }

	   else {
		  al_draw_bitmap(menu1, 0, 0, 0);
		  al_flip_display();
		  al_rest(2); }
    }

    al_destroy_display(display);
    al_destroy_bitmap(menu1);
    al_destroy_event_queue(event_queue);

    return 0;
}
