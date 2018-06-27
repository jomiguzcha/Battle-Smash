#include "Escenario.h"

Escenario::Escenario(){
    esc = NULL;
    display = NULL;
}

void Escenario::pintar(){
    esc = al_load_bitmap("escenario.png");
    if (!esc) {
	   al_destroy_display(display);
	   return 0;
    }
    al_draw_bitmap(esc, 0, 0, 0);
    al_flip_display();
    al_rest(2);
}
