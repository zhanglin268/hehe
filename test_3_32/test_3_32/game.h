#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2
#include<stdio.h>

void InitBoard(char board[ROWS][COLS], int rows, int col, char set);
void DisplayBoard(char baord[ROWS][COLS], int row, int col);