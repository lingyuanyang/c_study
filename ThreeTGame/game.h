#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
define the size of board
*/
#define ROW 3
#define COL 3

/*
init board
*/
void InitBoard(char board[ROW][COL], int row, int col);

/*
display board
*/
void DispalyBoard(char board[ROW][COL], int row, int col);

/*
play move
*/
void PlayMove(char board[ROW][COL], int row, int col);

/*
computer move
*/
void ComputerMove(char board[ROW][COL], int row, int col);

/*
to check is win or continue
player win -> '*'
computer win -> '#'
Qing -> 'Q'
Continue -> 'C'
*/
char IsWin(char board[ROW][COL], int row, int col);