#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"

int main(int argc, char **argv) {

    ALLEGRO_DISPLAY *display = NULL;
    ALLEGRO_BITMAP  *buffer= NULL;
    ALLEGRO_BITMAP  *menu1 = NULL;
    ALLEGRO_BITMAP  *menu2 = NULL;
    ALLEGRO_BITMAP  *menu3 = NULL;
    ALLEGRO_EVENT_MOUSE_AXES;
    bool salir = false;

    if (!al_init()) {
	   al_show_native_message_box(display, "Error", "Error", "Failed to initialize allegro!", NULL, ALLEGRO_MESSAGEBOX_ERROR);
	   return 0;
    }

    if (!al_init_image_addon()) {
	   al_show_native_message_box(display, "Error", "Error", "Failed to initialize al_init_image_addon!", NULL, ALLEGRO_MESSAGEBOX_ERROR);
	   return 0;
    }
    
    al_install_mouse;
    display = al_create_display(898, 798);

    if (!display) { 
	   al_show_native_message_box(display, "Error", "Error", "Failed to initialize display!", NULL, ALLEGRO_MESSAGEBOX_ERROR);
	   return 0;
    }

    buffer = al_create_bitmap(898, 798);
    menu1= al_load_bitmap("menu1.png");
    menu2 = al_load_bitmap("menu2.png");
    menu3 = al_load_bitmap("menu3.png");

    if (!menu1) {
	   al_show_native_message_box(display, "Error", "Error", "Failed to load image!", NULL, ALLEGRO_MESSAGEBOX_ERROR);
	   al_destroy_display(display);
	   return 0;
    }

    al_draw_bitmap(menu1, 0, 0, 0);

    al_flip_display();
    al_rest(2);

    while (!salir) {
		  if(ALLEGRO_EVENT_MOUSE_AXES)
    }


    al_destroy_display(display);
    al_destroy_bitmap(menu1);

    return 0;
}
