#define _CRT_SECURE_NO_WARNINGS 
#include"game.h"
double  start, finish;
void game()
{

	int ret = 0;
	init_mine();//初始化玩家棋盘和设计者棋盘
	set_mine();//给设计者棋盘布雷
	print_mine();//打印设计者棋盘
	printf("\n");
	print_player();//打印玩家棋盘
	start = clock();
	safe_mine();//避免第一次被炸死

	if (count_show_mine() == COUNT)//一步就赢的情况
	{
		print_mine();
		printf("玩家赢！\n\n");
		return;
	}print_player();////打印玩家棋盘

	while (1)//循环扫雷
	{
		int ret = sweep_mine();
		if (count_show_mine() == COUNT)
		{
			print_mine();//打印设计者棋盘
			printf("玩家赢！\n\n");
			finish = clock();
			printf("用时%d 秒\n", (int)(finish - start) / CLOCKS_PER_SEC);
			break;
		}
		if (ret)
		{
			printf("被雷炸死\t");
			finish = clock();
			printf("用时%d 秒\n", (int)(finish - start) / CLOCKS_PER_SEC);
			print_mine();//打印设计者雷阵查看雷的分布
			break;
		}print_player();
	}
}


int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	muen();
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏：\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
		muen();
		printf(" 请选择 ?\n");
	} while (1);
	system("pause");
	return 0;
}
