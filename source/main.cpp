#include "AIE.h"
#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	Initialise;
	int counter = 0;
	
	while (!IsKeyDown('Q'))
	{
		cout << counter;
		counter++;
	}

	system("pause");
	Shutdown();

    return 0;
}
