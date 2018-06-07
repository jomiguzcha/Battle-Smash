#include <string>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>

class Sprite
{
protected:
	ALLEGRO_BITMAP *bitmap;
	int x, y;

public:
	Sprite();
	virtual ~Sprite();

	void setBitmap(std::string filePath);
	ALLEGRO_BITMAP *getBitmap();

	void draw();
};

