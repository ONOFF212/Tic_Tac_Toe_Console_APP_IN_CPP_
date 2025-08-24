// Tic_Tac_Toe_Console_APP_IN_CPP_.cpp : 

#include <iostream>
#include"gameBoard.h"

using namespace std;

int main()
{
    gameBoard GB;
    char symbol;
    int row, col, turn;
    for (turn = 0; turn < 9; turn++) {
        GB.Board();
        if (turn % 2 == 0) {
            symbol = 'X';
        }
        else {
            symbol = 'O';
        }

        if (symbol == 'X') {
            cout << "::Player_A:: ( " << symbol << " )";
        }
        else {
            cout << "::Player_B:: ( " << symbol << " )";
        }
        
        cout << "\n::Enter row(0-2) and column(0-2)::";
        cin >> row >> col;
        GB.makeMove(row, col, symbol);
        if (GB.checkWin(symbol)) {
            GB.Board();
            cout << "Player:: " << symbol << " Wins!! " << endl;
            break;
        }
    }

    if (turn == 9 && !GB.checkWin('X') && !GB.checkWin('O')) {
        GB.Board();
        cout << "It's a Draw!!!" << endl;
    }
    
    return 0;
}


