#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
double start, finish;
void game()
{
	int ret = 0;
	init_mine();
	set_mine();
	print_mine();
	printf("\n");
	print_player();
	start = clock();
	safe_mine();

	if (count_show_mine() == COUNT)
	{
		print_mine();
		printf("玩家赢：\n\n");
		return;
	}print_player();
	while (1)
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
			print_mine();
			break;
		}print_player();
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input=0;
	muen();
	do
	{
		printf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏：\n");
			break;
		default:
			printf("输入错误，请重新输入：\n");
			break;
		}
		muen();
		scanf("请选择？\n");
	}while (1);
	system("pause");
	return 0;
}