#include "Sprite.h"

Sprite::Sprite()
{
	bitmap = NULL;
	x = 0;
	y = 0;
}

Sprite::~Sprite()
{
}

void Sprite::setBitmap(std::string filePath)
{
	bitmap = al_load_bitmap(filePath.c_str());
}

ALLEGRO_BITMAP *Sprite::getBitmap()
{
	return bitmap;
}

void Sprite::draw()
{
	al_draw_bitmap(bitmap, x, y, NULL);
}