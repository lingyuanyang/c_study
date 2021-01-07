#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"

/*
play game
*/
void game() {
	char ret = 0;
	//store status
	char board[ROW][COL] = { 0 };
	//init a empty board
	InitBoard(board, ROW, COL);
	//dispaly
	DispalyBoard(board, ROW, COL);
	//play
	while (1) {
		PlayMove(board, ROW, COL);
		DispalyBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if ('C' != ret) {
			break;
		}
		ComputerMove(board, ROW, COL);
		DispalyBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if ('C' != ret) {
			break;
		}
	}
	if ('*' == ret) {
		printf("player winner\n");
	}
	if ('#' == ret) {
		printf("computer winner\n");
	}
}

/*
print the menu
*/
void menu() {
	printf("****************************************\n");
	printf("**********  1.play   0.exit  ***********\n");
	printf("****************************************\n");
}

int main() {
	int input = 0;
	do {
		menu();
		printf("please choose:");
		scanf("%d", &input);
		switch (input) {
		case 1:
			//play game
			//printf("play game\n");
			game();
			break;
		case 0:
			printf("bye bye!");
			break;
		default:
			printf("your input error£¬please choose again:");
		}
	} while (input);
	return 0;
}