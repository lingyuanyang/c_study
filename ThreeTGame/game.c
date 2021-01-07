#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

/*
init board
*/
void InitBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}


/*
display board
*/
void DispalyBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		//1.print one row
		for (int j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//2.print line
		if (i < row - 1) {
			for (int j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

/*
play move
*/
void PlayMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("player take:>\n");
	scanf("%d%d", &x, &y);
	while (1)
	{
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("the position was fulled, please input again!\n");
		}
		else
			printf("invalid number, please input again!\n");
	}
}

/*
computer move
*/
void ComputerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("computer take:>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return 0; // Not full
			};
		}
	}
	return 1; //Fulled
}

/*
to check is win or continue
*/
char IsWin(char board[ROW][COL], int row, int col) {
	//1.row
	for (int i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ') {
			return board[i][1];
		}
	}
	//2.column
	for (int i = 0; i < col; i++) {
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ') {
			return board[1][i];
		}
	}
	//3.diagonal-1
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ') {
		return board[1][1];
	}
	//4.diagonal-2
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ') {
		return board[1][1];
	}
	//5.even
	if (1 == IsFull(board, ROW, COL)) {
		return 'Q';
	}
	//6.continue
	return 'C';
}