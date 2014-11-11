#include "Enemy.h"
#include "AIE.h"

Enemy::Enemy()
{
}

void Enemy::SetSize(float a_width, float a_height)
{
	width = a_width;
	height = a_height;
}

void Enemy::SetPosition(float a_x, float a_y)
{
	x = a_x;
	y = a_y;
}

void Enemy::SetSpeed(float a_xSpeed, float a_ySpeed)
{
	xSpeed = a_xSpeed;
	ySpeed = a_ySpeed;
}

void Enemy::SetExtremes( int a_leftEx, int a_rightEx, int a_topEx, int a_bottomEx)
{
	leftExtreme = a_leftEx;
	rightExtreme = a_rightEx;
	topExtreme = a_topEx;
	bottomExtreme = a_bottomEx;
}

void Enemy::Movement(float a_timeStep, float a_xSpeed, float a_ySpeed)
{
	y -= a_timeStep*a_ySpeed;
	if (y < bottomExtreme + height*.5f)
	{
		y = topExtreme;
	}
}

void Enemy::Draw()
{
	if (alive)
	{
		MoveSprite(spriteID, x, y);
		DrawSprite(spriteID);
	}
}
Enemy::~Enemy()
{
}
