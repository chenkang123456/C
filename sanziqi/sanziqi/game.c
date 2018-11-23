#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"
#include <string.h>

void ChessBoard(char arr[Row][Col], int row, int col)
{
	memset(arr, ' ', row*col*sizeof(arr[0][0]));
}

void DisplayBoard(char arr[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j != (col - 1))
			{
				printf("|");
			}
		}
		printf("\n");
		if (i != (row - 1))
		{
			for (j = 0; j < col; j++)
			{
				printf("___", arr[i][j]);
				if (j != (col - 1))
				{
					printf("|");
				}
			}
			printf("\n");
		}
		else
		{

			for (j = 0; j < col; j++)
			{
				printf("   ");
				if (j != (col - 1))
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void PlayerMove(char arr[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家走：\n");
		printf("请输入坐标：\n");
		scanf("%d%d", &x, &y);
		if ((x >= 1) && (x <= row) && (y >= 1) && (y <= col))
		{
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = 'X';
				break;
			}
			else
			{
				printf("坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非法\n");
		}
	}
}

void ComputerMove(char arr[Row][Col], int row, int col)
{
	printf("电脑走\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '0';
			break;
		}
	}
}

char CheckWin(char arr[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	int flag = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col - 1; j++)
		{
			if ((arr[i][j] == arr[i][j + 1]) && (arr[i][0] != ' '))
			{
				flag = 1;
			}
			else
			{
				flag = 0;
				break;
			}

		}
		if (flag == 1)
		{
			return arr[i][0];
		}
	}
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row - 1; i++)
		{
			if ((arr[i][j] == arr[i + 1][j]) && (arr[0][j] != ' '))
			{
				flag = 1;
			}
			else
			{
				flag = 0;
				break;
			}

		}
		if (flag == 1)
		{
			return arr[0][j];
		}
	}
	for (i = 0; i < row - 1; i++)
	{
		if ((arr[i][i] == arr[i + 1][i + 1]) && (arr[0][0] != ' '))
		{
			flag = 1;
		}
		else
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1)
	{
		return arr[0][0];
	}
	for (i = 0; i < row - 1; i++)
	{
		if ((arr[i][row - i - 1] == arr[i + 1][row - i - 2]) && (arr[0][row - 1] != ' '))
		{
			flag = 1;
		}
		else
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1)
	{
		return arr[0][row - 1];
	}
	if (IsFull(arr, row, col) == 1)
	{
		return 'q';
	}
	return ' ';
}

int IsFull(char arr[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
