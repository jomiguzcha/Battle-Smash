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
	   al_show_native_message_box(display, "Error", "Error", "Failed to initialize allegro!", NULL, ALLEGRO_MESSAGEBOX_ERROR);
	   return 0;
    }

    if (!al_init_image_addon()) {
	   al_show_native_message_box(display, "Error", "Error", "Failed to initialize al_init_image_addon!", NULL, ALLEGRO_MESSAGEBOX_ERROR);
	   return 0;
    }


    display = al_create_display(898, 798);

    if (!display) {
	   al_show_native_message_box(display, "Error", "Error", "failed to create event_queue!\n", NULL, ALLEGRO_MESSAGEBOX_ERROR);
	   return 0;
    }


    menu = al_load_bitmap("2-menu.png");
    menu1 = al_load_bitmap("jigly.png");
    menu2 = al_load_bitmap("kirby.png");
    menu3 = al_load_bitmap("link.png");
    menu4 = al_load_bitmap("tychus.png");


    if (!menu) {
	   al_show_native_message_box(display, "Error", "Error", "Failed to load image!", NULL, ALLEGRO_MESSAGEBOX_ERROR);
	   al_destroy_display(display);
	   return 0;
    }

    if (!menu1) {
	   al_show_native_message_box(display, "Error", "Error", "Failed to load image!", NULL, ALLEGRO_MESSAGEBOX_ERROR);
	   al_destroy_display(display);
	   return 0;
    }

    if (!menu2) {
	   al_show_native_message_box(display, "Error", "Error", "Failed to load image!", NULL, ALLEGRO_MESSAGEBOX_ERROR);
	   al_destroy_display(display);
	   return 0;
    }

    if (!menu3) {
	   al_show_native_message_box(display, "Error", "Error", "Failed to load image!", NULL, ALLEGRO_MESSAGEBOX_ERROR);
	   al_destroy_display(display);
	   return 0;
    }

    if (!menu4) {
	   al_show_native_message_box(display, "Error", "Error", "Failed to load image!", NULL, ALLEGRO_MESSAGEBOX_ERROR);
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
