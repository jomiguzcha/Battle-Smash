#include <iostream>
#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"

Menu(){
    menu1=NULL;
    menu2=NULL;
    menu3=NULL;
    salir=false ;x=0; y=0;
}

~Menu(){
    al_destroy_bitmap(menu1);
    al_destroy_bitmap(menu2);
    al_destroy_bitmap(menu3);
    }

int loadWindow(){
    menu1 = al_load_bitmap("menu1.png");
    menu2 = al_load_bitmap("menu2.png");
    menu3 = al_load_bitmap("menu3.png");
}

void Loop(){
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
}
