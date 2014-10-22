#pragma once
class Player
{
public:
	bool alive;
	float x;
	float y;
	float xSpeed;
	float ySpeed;
	float width;
	float height;
	unsigned int spriteID;
	unsigned int topMovementExtreme;
	unsigned int bottomMovementExtreme;
	unsigned int leftMovementExtreme;
	unsigned int rightMovementExtreme;
	unsigned int moveLeftKey;
	unsigned int moveRightKey;
	unsigned int moveUpKey;
	unsigned int moveDownKey;
	void SetSize(float a_width, float a_height);
	void SetPosition(float a_x, float a_y);
	void Movement(float a_timeStep, float a_ySpeed, float a_xSpeed);
	void SetGameplayKeys(unsigned int a_moveLeft, unsigned int a_moveRight, unsigned int a_moveUp, unsigned int a_moveDown);
	void SetExtremes(unsigned int a_leftEx, unsigned int a_rightEx, unsigned int a_topEx, unsigned int a_bottomEx); //Sets Player Movement Boundaries




	Player();
	~Player();
};

