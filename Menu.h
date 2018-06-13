#ifndef MENU_H
#define MENU_H
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>


class Menu
{   private:
        ALLEGRO_DISPLAY *display;
        ALLEGRO_BITMAP  *menu1;
        ALLEGRO_BITMAP  *menu2;
        ALLEGRO_BITMAP  *menu3;
        ALLEGRO_EVENT_QUEUE *event_queue;
        bool salir ;int x, y;

    public:
        Menu();
        ~Menu();

        int loadWindow();
        void Loop();
   
};

#endif // MENU_H
