#include "gameBoard.h"
#include<iostream>
using namespace std;

gameBoard::gameBoard() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			grid[i][j] = ' ';
		}
	}
}

//Creating a Game-Board::
void gameBoard::Board() {
	cout << "---------------\n";
	for (int i = 0; i < 3; i++) {
		cout << " | ";
		for (int j = 0; j < 3; j++) {
			cout << grid[i][j] << " | ";
		}
		cout << "\n---------------\n";
	}
}

//Check if a move is Valid or Not::
bool gameBoard:: isValidMove(int row, int col) {
	return (row >= 0 && row < 3 && col >= 0 && col < 3 && grid[row][col] == ' ');
}

//Check for Move::
void gameBoard::makeMove(int row, int col, char symbol) {
	if (isValidMove(row, col)) {
		grid[row][col] = symbol;
	}
}

//Check for Win::
bool gameBoard::checkWin(char symbol) {
	//Check Row
	for (int i = 0; i < 3; i++) {
		if (grid[i][0] == symbol && grid[i][1] == symbol && grid[i][2] == symbol) {
			return true;
		}
	}

	////Check Column
	for (int i = 0; i < 3; i++) {
		if (grid[0][i] == symbol && grid[1][i] == symbol && grid[2][i] == symbol) {
			return true;
		}
	}

	//Check Diagonal Left - Right
	if (grid[0][0] == symbol && grid[1][1] == symbol && grid[2][2] == symbol) {
		return true;
	}

	//Check Diagonal Right - Left
	if (grid[0][2] == symbol && grid[1][1] == symbol && grid[2][0] == symbol) {
		return true;
	}


	return false;
}


