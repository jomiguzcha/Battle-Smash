#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"

class Escenario
{
    ALLEGRO_BITMAP *esc;
    ALLEGRO_BITMAP *display;


public:
    Escenario();
    ~Escenario() {};

    void pintar();


};

