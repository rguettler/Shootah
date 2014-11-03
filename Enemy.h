#pragma once
class Enemy
{
public:
	bool alive;
	int radius = 16;
	float x;
	float y;
	float xSpeed;
	float ySpeed;
	float width;
	float height;
	int topExtreme;
	int bottomExtreme;
	int leftExtreme;
	int rightExtreme;
	unsigned int spriteID;
	void SetSize(float a_width, float a_height);
	void SetPosition(float a_x, float a_y);
	void Movement(float a_timeStep, float a_xSpeed, float a_ySpeed);
	void SetSpeed(float a_xSpeed,float a_ySpeed);
	void SetExtremes(int a_leftEx, int a_rightEx, int a_topEx, int a_bottomEx);
	Enemy();
	~Enemy();
};

