#pragma once
#include<iostream>

using namespace std;

class gameBoard
{
	char grid[3][3];
public:
	
	gameBoard();
	void Board();
	void makeMove(int row, int col, char symbol);
	bool isValidMove(int row, int col);
	bool checkWin(char symbol);
};

