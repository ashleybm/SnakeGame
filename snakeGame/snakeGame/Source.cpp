/*
Ashley Baker 
Attempt at a Snake Game
8/31/2017
Modified 3/21/2019
*/

#include <iostream>
using namespace std;
bool gameOver;
const int width = 20, height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;
void setup() {
	gameOver = false;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;
}
void draw() {
	system("cls");
	for (int i = 0; i < width; i++) 
		cout << "#";
	cout << endl;
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < width; j++) {
			if (j == 0)
				cout << "#";
			else
				cout << " ";
			if (j == width - 1) {
				cout << "#";
			}
		}
		cout << endl;
	}
	for (int i = 0; i < width; i++)
		cout << "#";
	cout << endl;
}
void input() {


}
void logic() {


}

int main() {
	setup();
	//Main Statement While Loop
	while (!gameOver) {
		draw();
		input();
		logic();
		//Sleep(10);
	}


}

//End Of File