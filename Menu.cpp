#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"
#include "Menu.h"

int main(int argc, char **argv) {

    ALLEGRO_DISPLAY *display = NULL;
    ALLEGRO_BITMAP  *menu = NULL;
    ALLEGRO_BITMAP  *menu1 = NULL;
    ALLEGRO_BITMAP  *menu2 = NULL;
    ALLEGRO_BITMAP  *menu3 = NULL;
    ALLEGRO_BITMAP  *menu4 = NULL;
    ALLEGRO_BITMAP  *menu5 = NULL;
    ALLEGRO_BITMAP  *menu6= NULL;
    ALLEGRO_BITMAP  *menu7= NULL;
    ALLEGRO_BITMAP  *menu8 = NULL;
    ALLEGRO_EVENT_QUEUE *event_queue = NULL;
    int  x = 0;

    if (!al_init()) {
	   return 0;
    }

    if (!al_init_image_addon()) {
	    return 0;
    }

    al_install_keyboard();
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
    al_register_event_source(event_queue, al_get_keyboard_event_source());
    menu = al_load_bitmap("second1.png");
    menu1 = al_load_bitmap("jigly.png");
    menu2 = al_load_bitmap("kirby.png");
    menu3 = al_load_bitmap("link.png");	
    menu4 = al_load_bitmap("tychus.png");
    menu5 = al_load_bitmap("jigly2.png");
    menu6 = al_load_bitmap("kirby2.png");
    menu7 = al_load_bitmap("link2.png");
    menu8 = al_load_bitmap("tychus2.png");

    if (!menu1) {
	   al_destroy_display(display);
	   return 0;
    }

    if (!menu2) {
	   al_destroy_display(display);
	   return 0;
    }

    if (!menu3) {
	   al_destroy_display(display);
	   return 0;
    }

    if (!menu4) {
	   al_destroy_display(display);
	   return 0;
    }

    al_draw_bitmap(menu, 0, 0, 0);
    al_draw_bitmap(menu1, 222, 214, 0);
    al_draw_bitmap(menu2, 463, 214, 0);
    al_draw_bitmap(menu3, 222, 490, 0);
    al_draw_bitmap(menu4, 462, 492, 0);

    al_flip_display();
    al_rest(2);

    while (x!=ALLEGRO_KEY_ENTER) {
	   ALLEGRO_EVENT ev;
	   al_wait_for_event(event_queue, &ev);

	   if (ev.type == ALLEGRO_EVENT_KEY_DOWN) {
		  x = ev.keyboard.keycode;}

	   if (x==ALLEGRO_KEY_DOWN ) {
		  x = 0;
		  al_draw_bitmap(menu5, 222, 214, 0);
		  al_flip_display();

			 while (true) {
				   al_wait_for_event(event_queue, &ev);
				    if (ev.type == ALLEGRO_EVENT_KEY_DOWN) {
					   x = ev.keyboard.keycode; }

				    if (x == ALLEGRO_KEY_DOWN) {
					   al_draw_bitmap(menu1, 222, 214, 0);
					   al_draw_bitmap(menu7, 222, 490, 0);
					   al_flip_display();
					   al_rest(2);
					   x = 0;
					   break;
				     }

				    else if (x == ALLEGRO_KEY_RIGHT) {
					   al_draw_bitmap(menu1, 222, 214, 0);
					   al_draw_bitmap(menu6, 463, 214, 0);
					   al_flip_display();
					   al_rest(2);
					   x = 0;
					   break;
					   }

				    else if (x == ALLEGRO_KEY_ENTER) {
					   break;}
			   }
	   }

	   else if (x == ALLEGRO_KEY_RIGHT) {
		  x = 0;
		  al_draw_bitmap(menu6, 463, 214, 0);
		  al_flip_display();

			 while (true) {
					   al_wait_for_event(event_queue, &ev);
					   if (ev.type == ALLEGRO_EVENT_KEY_DOWN) {
						  x = ev.keyboard.keycode;
					   }

					   if (x == ALLEGRO_KEY_DOWN) {
						  al_draw_bitmap(menu2, 463, 214, 0);
						  al_draw_bitmap(menu8, 462, 492, 0);
						  al_flip_display();
						  al_rest(2);
						  x = 0;
						  break;
					   }

					   else if (x == ALLEGRO_KEY_LEFT) {
						  al_draw_bitmap(menu2, 463, 214, 0);
						  al_draw_bitmap(menu5, 222, 214, 0);
						  al_flip_display();
						  al_rest(2);
						  x = 0;
						  break;
					   }

					   else if (x == ALLEGRO_KEY_ENTER) {
						  break;
					   }
			 }
	   }
    }


    al_destroy_display(display);
    al_destroy_bitmap(menu1);
    al_destroy_bitmap(menu2);
    al_destroy_bitmap(menu3);
    al_destroy_bitmap(menu4);
    al_destroy_bitmap(menu5);
    al_destroy_bitmap(menu6);
    al_destroy_bitmap(menu7);
    al_destroy_bitmap(menu8);
    al_destroy_event_queue(event_queue);

    return 0;
}
