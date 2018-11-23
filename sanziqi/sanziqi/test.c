#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

void menu()
{
	printf("********************\n");
	printf("*****  1.Play  *****\n");
	printf("*****  0.Exit  *****\n");
	printf("********************\n");
}

void game()
{
	char arr[Row][Col] = { 0 };
	char ret = 0;
	ChessBoard(arr, Row, Col);
	DisplayBoard(arr, Row, Col);
	do
	{
		PlayerMove(arr, Row, Col);
		ret = CheckWin(arr, Row, Col);
		DisplayBoard(arr, Row, Col);
		if (ret != ' ')
		{
			break;
		}
		ComputerMove(arr, Row, Col);
		ret = CheckWin(arr, Row, Col);
		DisplayBoard(arr, Row, Col);
	} while (ret == ' ');
	if (ret == 'X')
	{
		printf("���Ӯ\n");
	}
	if (ret == '0')
	{
		printf("����Ӯ\n");
	}
	if (ret == 'q')
	{
		printf("ƽ��\n");
	}
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	srand((unsigned int)time(NULL));
	test();
	system("pause");
	return 0;
}


 