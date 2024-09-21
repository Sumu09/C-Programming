#include <stdio.h>

#define SIZE 3

void printBoard(char board[SIZE][SIZE]) {
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf(" %c ", board[i][j]);
            if (j < SIZE - 1) printf("|");
        }
        printf("\n");
        if (i < SIZE - 1) printf("---|---|---\n");
    }
    printf("\n");
}

int checkWin(char board[SIZE][SIZE], char player) {
    // Check rows
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) return 1;
    }
    // Check columns
    for (int i = 0; i < SIZE; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) return 1;
    }
    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) return 1;

    return 0;
}

int checkDraw(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int main() {
    char board[SIZE][SIZE] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char player = 'X';
    int row, col;
    int moves = 0;

    while (1) {
        printBoard(board);
        printf("Player %c, enter your move (row and column): ", player);
        scanf("%d %d", &row, &col);

        if (row < 1 || row > SIZE || col < 1 || col > SIZE || board[row-1][col-1] != ' ') {
            printf("Invalid move! Try again.\n");
            continue;
        }

        board[row-1][col-1] = player;
        moves++;

        if (checkWin(board, player)) {
            printBoard(board);
            printf("Player %c wins!\n", player);
            break;
        } else if (checkDraw(board)) {
            printBoard(board);
            printf("It's a draw!\n");
            break;
        }

        player = (player == 'X') ? 'O' : 'X';
    }

    return 0;
}
         