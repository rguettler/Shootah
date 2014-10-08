#include "AIE.h"
#include "Player.h"


Player::Player()
{
}

void Player::SetSize(float a_width, float a_height)
{
	width = a_width;
	height = a_height;

}

void Player::SetPosition(float a_x, float a_y)
{
	x = a_x;
	y = a_y;
}

void Player::SetMovementKeys(unsigned int a_moveLeft, unsigned int a_moveRight, unsigned int a_moveUp, unsigned int a_moveDown)
{
	moveLeftKey = a_moveLeft;
	moveRightKey = a_moveRight;
	moveUpKey = a_moveUp;
	moveDownKey = a_moveDown;
}

void Player::SetExtremes(unsigned int a_leftEx, unsigned int a_rightEx, unsigned int a_topEx, unsigned int a_bottomEx)
{
	leftMovementExtreme = a_leftEx;
	rightMovementExtreme = a_rightEx;
	topMovementExtreme = a_topEx;
	bottomMovementExtreme = a_bottomEx;
}


void Player::VerticalMovement(float a_timeStep, float a_ySpeed)
{
	if (IsKeyDown(moveUpKey))
	{
		y += a_timeStep * a_ySpeed;
		if (y > (topMovementExtreme - height*.5))
		{
			y = (topMovementExtreme - height*.5);
		}
	}

	if (IsKeyDown(moveDownKey))
	{
		y -= a_timeStep * a_ySpeed;
		if (y < (bottomMovementExtreme + height*.5))
		{
			y = (bottomMovementExtreme + height*.5);
		}
	}
}

Player::~Player()
{
}
