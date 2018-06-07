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
	if (!al_init())
	{
		return -1;
	}

	return 0;
}

int Game::createWindow(float FPS, int ancho, int alto) {
	display = al_create_display(ancho, alto);
	if (!display)
	{
		al_destroy_display(display);
		return -1;
	}
	
	timer = al_create_timer(1.0 / FPS);
	if (!timer)
	{
		al_destroy_timer(timer);
		al_destroy_display(display);
		return -1;
	}

	event_queue = al_create_event_queue();
	if (!event_queue)
	{
		al_destroy_event_queue(event_queue);
		al_destroy_timer(timer);
		al_destroy_display(display);
		return -1;
	}

	//al_install_keyboard();
	//al_init_image_addon();

	al_register_event_source(event_queue, al_get_display_event_source(display));
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
	al_clear_to_color(al_map_rgb(150, 110, 100));

	al_flip_display();

	al_start_timer(timer);

	return 0;
}

void Game::gameLoop() {
	while (loop) {
		ALLEGRO_EVENT ev;
		al_wait_for_event(event_queue, &ev);

		if (ev.type == ALLEGRO_EVENT_TIMER)
		{
			//player.doLogic(keyboard);
			redraw = true;
		}
		else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
		{
			loop = false;
		}

		if (redraw && al_is_event_queue_empty(event_queue))
		{
			redraw = false;

			al_clear_to_color(al_map_rgb(155, 155, 100));

			// Draw
			//player.draw();

			al_flip_display();
		}

	}


}
