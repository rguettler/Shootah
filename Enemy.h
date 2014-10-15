#pragma once
class Enemy
{
public:
	float x;
	float y;
	float xSpeed;
	float ySpeed;
	float width;
	float height;
	unsigned int spriteID;
	void SetSize(float a_width, float a_height);
	void SetPosition(float a_x, float a_y);
	void Movement(float a_timeStep, float a_ySpeed, float a_xSpeed);
	Enemy();
	~Enemy();
};

