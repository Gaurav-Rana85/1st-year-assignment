#include <stdio.h>

char board[3][3];

void initializeBoard() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
}

void displayBoard() {
    printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
}

int checkWin() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return 1;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return 1;

    return 0;
}

int isBoardFull() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return 0;
    return 1;
}

int makeMove(int player) {
    int row, col;
    char mark = (player == 1) ? 'X' : 'O';

    printf("Player %d (%c), enter row (1-3) and column (1-3): ", player, mark);
    scanf("%d %d", &row, &col);
    row--; col--;

    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
        printf("Invalid move! Try again.\n");
        return 0;
    } else {
        board[row][col] = mark;
        return 1;
    }
}

int main() {
    int player = 1;
    initializeBoard();
    displayBoard();

    while (1) {
        if (makeMove(player)) {
            displayBoard();
            if (checkWin()) {
                printf("Player %d wins!\n", player);
                break;
            } else if (isBoardFull()) {
                printf("It's a draw!\n");
                break;
            }
            player = (player == 1) ? 2 : 1;
        }
    }

    return 0;
}