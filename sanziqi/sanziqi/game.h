

#ifndef __GAME_H__
#define __GAME_H__
#include<stdio.h>
#define Row 4
#define Col 4

void ChessBoard(char arr[Row][Col], int row, int col);
void DisplayBoard(char arr[Row][Col], int row, int col);
void PlayerMove(char arr[Row][Col], int row, int col);
void ComputerMove(char arr[Row][Col], int row, int col);
char CheckWin(char arr[Row][Col], int row, int col);
int IsFull(char arr[Row][Col], int row, int col);
#endif//__GAME_H__
