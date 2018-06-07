#include "Player.h"

Player::Player()
{
	health = 0;
	moveSpeed = 5;
}

Player::~Player()
{
}

void Player::doLogic(Keyboard keyboard)
{
	if (keyboard.key[UP])
		y -= moveSpeed;
	else if (keyboard.key[DOWN])
		y += moveSpeed;
	if (keyboard.key[LEFT])
		x -= moveSpeed;
	else if (keyboard.key[RIGHT])
		x += moveSpeed;
}
