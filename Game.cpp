#include "Game.h"

Game::Game() {
	display = NULL;
	timer = NULL;
	event_queue = NULL;
	loop = true, redraw = false;
}

Game::~Game()
{
	al_destroy_event_queue(event_queue);
	al_destroy_timer(timer);
	al_destroy_display(display);
}

int Game::init() {
	if (!al_init()){
	    return 0;
	}
	return 0;
}

int Game::createWindow(float FPS, int ancho, int alto) {
	display = al_create_display(ancho, alto);
	if (!display){
		al_destroy_display(display);
		return 0;
	}
	
	timer = al_create_timer(1.0 / FPS);
	if (!timer)
	{
		al_destroy_timer(timer);
		al_destroy_display(display);
		return 0;
	}

	event_queue = al_create_event_queue();
	if (!event_queue)
	{
		al_destroy_event_queue(event_queue);
		al_destroy_timer(timer);
		al_destroy_display(display);
		return 0;
	}

	al_init_image_addon();
	al_install_keyboard();
	

	al_register_event_source(event_queue, al_get_display_event_source(display));
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
	al_register_event_source(event_queue, al_get_keyboard_event_source());

	
	al_start_timer(timer);

	return 0;
}

void Game::gameLoop() {
	while (loop) {
	    draw_menu1();
	    Loop();
	    draw_menu2();
	    Loop2();
	    loop = false;
	pintar();
	}


}
