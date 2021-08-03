#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string> //랭킹 시스템
#include "header.h"

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

int gwx = 25, gwy = 25; // 게임 공간 크기
int sx = gwx / 2, sy = gwy / 2; // 지렁이 머리가 있는 위치
using namespace std;

void testkey();
void GameWall();
void gotoxy(int x, int y);
void textcolor(int foreground);

int main()
{
	GameWall();
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

		//움직이는거 구현
	}
}

void GameWall()
{
	char cd[50];
	//cout << "게임의 가로세로 좌표를 입력해주세요" << endl;
	//cin >> gwx >> gwy;

	sprintf_s(cd, "mode con: lines=%d cols=%d", gwx * 2, gwy * 2);
	system(cd);
	for (int i = 0; i < gwx; i++)
		cout << "■";
	cout << endl;
	for (int i = 0; i < gwy - 2; i++)
	{
		cout << "■";
		for (int j = 0; j<(gwx - 2) * 2; j++)
			cout << " ";
		cout << "■" << endl;
	}
	for (int i = 0; i < gwy; i++)
		cout << "■";
	cout << endl;
}

void testkey()
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

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void textcolor(int foreground)
{
	int color = foreground * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
