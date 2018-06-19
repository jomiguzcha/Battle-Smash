#include "Menu.h"
#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"

Menu::Menu(){
	   display = NULL;
	   menu1_1 = NULL;
	   menu1_2 = NULL;
	   menu1_3 = NULL;
	   menu2 = NULL;
	   jigly1 = NULL;
	   kirby1 = NULL;
	   link1 = NULL;
	   tychus1 = NULL;
	   jigly2 = NULL;
	   kirby2 = NULL;
	   link2 = NULL;
	   tychus2 = NULL;
	   jigly3 = NULL;
	   kirby3 = NULL;
	   link3 = NULL;
	   tychus3 = NULL;
	   event_queue = NULL;
	   x = 0; y = 0; ancho = 898; alto = 798;
}

Menu::~Menu(){
    al_destroy_display(display);
    al_destroy_bitmap(menu1_1);
    al_destroy_bitmap(menu1_2);
    al_destroy_bitmap(menu1_3);
    al_destroy_bitmap(menu2);
    al_destroy_bitmap(jigly1);
    al_destroy_bitmap(kirby1);
    al_destroy_bitmap(link1);
    al_destroy_bitmap(tychus1);
    al_destroy_bitmap(jigly2);
    al_destroy_bitmap(kirby2);
    al_destroy_bitmap(link2);
    al_destroy_bitmap(tychus2);
    al_destroy_bitmap(jigly3);
    al_destroy_bitmap(kirby3);
    al_destroy_bitmap(link3);
    al_destroy_bitmap(tychus3);
    al_destroy_event_queue(event_queue);
}

int Menu::init() {
    if (!al_init()) {
	   return 0;}
}

int Menu::createWindow() {
    display = al_create_display(ancho, alto);

    if (!display) {
	   al_destroy_display(display);
	   return 0;
    }

    event_queue = al_create_event_queue();

    if (!event_queue) {
	   al_destroy_event_queue(event_queue);
	   al_destroy_display(display);
	   return 0;
    }

    al_init_image_addon();
    al_install_keyboard();
    menu1_1 = al_load_bitmap("menu1.png");
    menu1_2 = al_load_bitmap("menu2.png");
    menu1_3= al_load_bitmap("menu3.png");
    menu2 = al_load_bitmap("second1.png");
    jigly1 = al_load_bitmap("jigly.png");
    kirby1 = al_load_bitmap("kirby.png");
    link1 = al_load_bitmap("link.png");
    tychus1 = al_load_bitmap("tychus.png");
    jigly2 = al_load_bitmap("jigly2.png");
    kirby2 = al_load_bitmap("kirby2.png");
    link2 = al_load_bitmap("link2.png");
    tychus2 = al_load_bitmap("tychus2.png");
    jigly3 = al_load_bitmap("jigly3.png");
    kirby3 = al_load_bitmap("kirby3.png");
    link3 = al_load_bitmap("link3.png");
    tychus3 = al_load_bitmap("tychus3.png");

    if (!jigly1) {
	   al_destroy_display(display);
	   return 0;
    }

    if (!kirby1) {
	   al_destroy_display(display);
	   return 0;
    }

    if (!link1) {
	   al_destroy_display(display);
	   return 0;
    }

    if (!tychus1) {
	   al_destroy_display(display);
	   return 0;
    }

    if (!jigly2) {
	   al_destroy_display(display);
	   return 0;
    }

    if (!kirby2) {
	   al_destroy_display(display);
	   return 0;
    }

    if (!link2) {
	   al_destroy_display(display);
	   return 0;
    }

    if (!tychus2) {
	   al_destroy_display(display);
	   return 0;
    }

    al_register_event_source(event_queue, al_get_display_event_source(display));
    al_register_event_source(event_queue, al_get_keyboard_event_source());

    return 0;
}

void Menu::draw_menu1() {
	   al_draw_bitmap(menu1_1, 0, 0, 0);
	   al_flip_display();
	   al_rest(2);
}

void Menu::draw_menu2() {
	   al_draw_bitmap(menu2, 0, 0, 0);
	   al_draw_bitmap(jigly1, 222, 214, 0);
	   al_draw_bitmap(kirby1, 463, 214, 0);
	   al_draw_bitmap(link1, 222, 490, 0);
	   al_draw_bitmap(tychus1, 462, 492, 0);

	   al_flip_display();
	   al_rest(2);
}

void Menu::Loop(){
		  while (y!= ALLEGRO_KEY_ENTER) {
				ALLEGRO_EVENT ev;
				al_wait_for_event(event_queue, &ev);

				if (ev.type == ALLEGRO_EVENT_KEY_DOWN) {
				    y = ev.keyboard.keycode;
				}

				if (y == ALLEGRO_KEY_ENTER) {
				    break;
				}

				else if (y == ALLEGRO_KEY_DOWN) {
				    y = 0;
				    al_draw_bitmap(menu1_2, 0, 0, 0);
				    al_flip_display();
				    al_rest(2);

				    while (true) {
							 al_wait_for_event(event_queue, &ev);
							 if (ev.type == ALLEGRO_EVENT_KEY_DOWN) {
								y = ev.keyboard.keycode; 
							 }

							 if (y == ALLEGRO_KEY_DOWN) {
								y = 0;
								al_draw_bitmap(menu1_3, 0, 0, 0);
								al_flip_display();
								al_rest(2);
								break;
							 }

							 else if (y == ALLEGRO_KEY_ENTER) {
								break;
							 }
				     }
				}

				else if (y == ALLEGRO_KEY_UP) {
				    y = 0;
				    al_draw_bitmap(menu2, 0, 0, 0);
				    al_flip_display();
				    al_rest(2);
				}
		  }
}


void Menu::Loop2() {
    while (x != ALLEGRO_KEY_ENTER) {
	   ALLEGRO_EVENT ev;
	   al_wait_for_event(event_queue, &ev);

	   if (ev.type == ALLEGRO_EVENT_KEY_DOWN) {
		  x = ev.keyboard.keycode;
	   }

	   if (x == ALLEGRO_KEY_DOWN) {
		  x = 0;
		  al_draw_bitmap(jigly2, 222, 214, 0);
		  al_flip_display();
		  al_rest(2);

		  while (true) {
			 al_wait_for_event(event_queue, &ev);
			 if (ev.type == ALLEGRO_EVENT_KEY_DOWN) {
				x = ev.keyboard.keycode;
			 }

			 if (x == ALLEGRO_KEY_DOWN) {
				al_draw_bitmap(jigly1, 222, 214, 0);
				al_draw_bitmap(link2, 222, 490, 0);
				al_flip_display();
				al_rest(2);
				x = 0;
				break;
			 }

			 else if (x == ALLEGRO_KEY_RIGHT) {
				al_draw_bitmap(jigly1, 222, 214, 0);
				al_draw_bitmap(kirby2, 463, 214, 0);
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

	   else if (x == ALLEGRO_KEY_RIGHT) {
		  x = 0;
		  al_draw_bitmap(kirby2, 463, 214, 0);
		  al_flip_display();
		  al_rest(2);

		  while (true) {
			 al_wait_for_event(event_queue, &ev);
			 if (ev.type == ALLEGRO_EVENT_KEY_DOWN) {
				x = ev.keyboard.keycode;
			 }

			 if (x == ALLEGRO_KEY_DOWN) {
				al_draw_bitmap(kirby1, 463, 214, 0);
				al_draw_bitmap(tychus2, 462, 492, 0);
				al_flip_display();
				al_rest(2);
				x = 0;
				break;
			 }

			 else if (x == ALLEGRO_KEY_LEFT) {
				al_draw_bitmap(kirby1, 463, 214, 0);
				al_draw_bitmap(jigly2, 222, 214, 0);
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
    x = 0;
    while (x != ALLEGRO_KEY_ENTER) {
	   ALLEGRO_EVENT ev;
	   al_wait_for_event(event_queue, &ev);

	   if (ev.type == ALLEGRO_EVENT_KEY_DOWN) {
		  x = ev.keyboard.keycode;
	   }

	   if (x == ALLEGRO_KEY_DOWN) {
		  x = 0;
		  al_draw_bitmap(jigly3, 222, 214, 0);
		  al_flip_display();
		  al_rest(2);

		  while (true) {
			 al_wait_for_event(event_queue, &ev);
			 if (ev.type == ALLEGRO_EVENT_KEY_DOWN) {
				x = ev.keyboard.keycode;
			 }

			 if (x == ALLEGRO_KEY_DOWN) {
				al_draw_bitmap(jigly1, 222, 214, 0);
				al_draw_bitmap(link3, 222, 490, 0);
				al_flip_display();
				al_rest(2);
				x = 0;
				break;
			 }

			 else if (x == ALLEGRO_KEY_RIGHT) {
				al_draw_bitmap(jigly1, 222, 214, 0);
				al_draw_bitmap(kirby3, 463, 214, 0);
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

	   else if (x == ALLEGRO_KEY_RIGHT) {
		  x = 0;
		  al_draw_bitmap(kirby3, 463, 214, 0);
		  al_flip_display();
		  al_rest(2);

		  while (true) {
			 al_wait_for_event(event_queue, &ev);
			 if (ev.type == ALLEGRO_EVENT_KEY_DOWN) {
				x = ev.keyboard.keycode;
			 }

			 if (x == ALLEGRO_KEY_DOWN) {
				al_draw_bitmap(kirby1, 463, 214, 0);
				al_draw_bitmap(tychus3, 462, 492, 0);
				al_flip_display();
				al_rest(2);
				x = 0;
				break;
			 }

			 else if (x == ALLEGRO_KEY_LEFT) {
				al_draw_bitmap(kirby1, 463, 214, 0);
				al_draw_bitmap(jigly3, 222, 214, 0);
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
}
