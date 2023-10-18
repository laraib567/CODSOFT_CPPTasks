// TASK 03
// TIC TAC TOE
#include <iostream>
using namespace std;

const int BOARD_SIZE = 3;
char board[BOARD_SIZE][BOARD_SIZE];

void initializeBoard() {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    cout << "   1   2   3" << endl;
    cout << "  -------------" << endl;
    for (int i = 0; i < BOARD_SIZE; i++) {
        cout << i + 1 << " | ";
        for (int j = 0; j < BOARD_SIZE; j++) {
            cout << board[i][j] << " | ";
        }
        cout << endl;
        cout << "  -------------" << endl;
    }
}

bool isBoardFull() {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] == ' ')
                return false;
        }
    }
    return true;
}

bool isGameOver() {
    for (int i = 0; i < BOARD_SIZE; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return true;
        }
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return true;
        }
    }
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return true;
    }
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return true;
    }

    if (isBoardFull()) {
        return true;
    }

    return false;
}

bool makeMove(int row, int col, char player) {
    if (row < 1 || row > BOARD_SIZE || col < 1 || col > BOARD_SIZE || board[row - 1][col - 1] != ' ') {
        return false;
    }
    board[row - 1][col - 1] = player;
    return true;
}

int main() {
    initializeBoard();
    char currentPlayer = 'X';
    bool gameOver = false;

    cout << "Tic-Tac-Toe Game" << endl;

    while (!gameOver) {
        printBoard();
        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        if (makeMove(row, col, currentPlayer)) {
            if (isGameOver()) {
                printBoard();
                cout << "Player " << currentPlayer << " wins!" << endl;
                gameOver = true;
            } else if (isBoardFull()) {
                printBoard();
                cout << "It's a draw!" << endl;
                gameOver = true;
            } else {
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            }
        } else {
            cout << "Invalid move. Try again." << endl;
        }
    }

    return 0;
}