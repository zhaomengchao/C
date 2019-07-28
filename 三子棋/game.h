#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define Row 3
#define Col 3

void init_board(char board[Row][Col], int row, int col);
void Displayboard(char board[Row][Col], int row, int col);
void Playermove(char board[Row][Col], int row, int col);
void Computermove(char board[Row][Col], int row, int col);

char Is_win(char board[Row][Col], int row, int col);