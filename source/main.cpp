#include "AIE.h"
#include "Player.h"
#include <iostream>
using namespace std;

const int screenWidth = 600;
const int screenHeight = 800;

const char* screenTitle = "WING FIGHTERS ULTRA MAX";
const char* playerSprite = "./images/player.png";
Player player;

int main(int argc, char* argv[])
{
	Initialise(screenWidth,screenHeight,false,screenTitle);
	SetBackgroundColour(SColour(00, 67, 171, 50));
	float deltaTime = GetDeltaTime();
	player.SetSize(98, 98);
	player.spriteID = CreateSprite(playerSprite, player.width, player.height, true);
	player.SetPosition(200, 400);
	player.SetExtremes(0, screenWidth, screenHeight, 0);
	player.SetMovementKeys('A', 'D', 'W', 'S');
	do
	{
		ClearScreen();
		DrawSprite(player.spriteID);
		MoveSprite(player.spriteID,player.x, player.y);
		player.Movement(deltaTime, 750, 500);
		
	} while (FrameworkUpdate() == false);
	
	
	
	
	Shutdown();

    return 0;
}
