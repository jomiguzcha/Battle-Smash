#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"

int main(int argc, char **argv) {

    ALLEGRO_DISPLAY *display = NULL;
    ALLEGRO_BITMAP  *menu = NULL;
    ALLEGRO_BITMAP  *menu1 = NULL;
    ALLEGRO_BITMAP  *menu2 = NULL;
    ALLEGRO_BITMAP  *menu3 = NULL;
    ALLEGRO_BITMAP  *menu4 = NULL;



    if (!al_init()) {
	   return 0;
    }

    if (!al_init_image_addon()) {
	   return 0;
    }


    display = al_create_display(898, 798);

    if (!display) {
	   return 0;
    }


    menu = al_load_bitmap("second1.png");
    menu1 = al_load_bitmap("jigly.png");
    menu2 = al_load_bitmap("kirby.png");
    menu3 = al_load_bitmap("link.png");
    menu4 = al_load_bitmap("tychus.png");


    if (!menu) {
	   al_destroy_display(display);
	   return 0;
    }

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


    al_destroy_display(display);
    al_destroy_bitmap(menu1);
    al_destroy_bitmap(menu2);
    al_destroy_bitmap(menu3);
    al_destroy_bitmap(menu4);


    return 0;
}
