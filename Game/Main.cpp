#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string> //∑©≈∑ Ω√Ω∫≈€

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

using namespace std;

int main()
{
	int key;
	while (1)
	{
		if (_kbhit())
		{
			key = _getch();
			switch (key)
			{
			case UP:
				cout << "UP" << endl;
				break;
			case DOWN:
				cout << "DOWN" << endl;
				break; 
			case LEFT:
				cout << "LEFT" << endl;
				break; 
			case RIGHT:
				cout << "RIGHT" << endl;
				break;
			}
		}
	}
}