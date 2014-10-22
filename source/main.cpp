#include "AIE.h"
#include "Player.h"
#include "Enemy.h"
#include <iostream>
using namespace std;

const int screenWidth = 600;
const int screenHeight = 800;

const char* screenTitle = "WING FIGHTERS ULTRA MAX";
const char* playerSprite = "./images/player2.png";
const char* enemySprite = "./images/enemy.png";
void Startup();

Player player;
Enemy enemy;

int main(int argc, char* argv[])
{
	Startup();
	float deltaTime = GetDeltaTime();
	do
	{
		ClearScreen();
		DrawSprite(player.spriteID);
		MoveSprite(player.spriteID,player.x, player.y);
		DrawSprite(enemy.spriteID);
		MoveSprite(enemy.spriteID, enemy.x, enemy.y);
		player.Movement(deltaTime, 750, 500);
		enemy.Movement(deltaTime, 500, 500);
		
	} while (FrameworkUpdate() == false);
	
	
	
	
	Shutdown();

    return 0;
}

void Startup()
{
	Initialise(screenWidth,screenHeight,false,screenTitle);
	SetBackgroundColour(SColour(00, 67, 171, 50));
	
	player.SetSize(64, 64);
	player.spriteID = CreateSprite(playerSprite, player.width, player.height, true);
	player.SetPosition(200, 400);
	player.SetExtremes(0, screenWidth, screenHeight, 0);
	player.SetGameplayKeys('A', 'D', 'W', 'S');

	enemy.SetSize(32, 32);
	enemy.spriteID = CreateSprite(enemySprite, enemy.width, enemy.height, true);
	enemy.SetPosition(200, 600);
	enemy.SetExtremes(0, screenWidth, screenHeight, 0);


}
