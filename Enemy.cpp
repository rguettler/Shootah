#include "Enemy.h"


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

Enemy::~Enemy()
{
}
