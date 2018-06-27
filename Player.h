#include "Sprite.h"
#include "Keyboard.h"

class Player : public Sprite, public Keyboard{
	   private:
		   int health, moveSpeed;

	   public:
		   Player();
		   ~Player();

		   void doLogic(Keyboard keyboard);
	   };
