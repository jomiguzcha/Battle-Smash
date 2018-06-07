#include "Sprite.h"
#include "Keyboard.h"

class Player :
	public Sprite
{
private:
	int health, moveSpeed;

public:
	Player();
	~Player();

	void doLogic(Keyboard keyboard);
};
