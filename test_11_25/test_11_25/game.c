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
		printf("���Ӯ��\n\n");
		return;
	}print_player();
	while (1)
	{
		int ret = sweep_mine();
		if (count_show_mine() == COUNT)
		{
			print_mine();//��ӡ���������
			printf("���Ӯ��\n\n");
			finish = clock();
			printf("��ʱ%d ��\n", (int)(finish - start) / CLOCKS_PER_SEC);
			break;
		}
		if (ret)
		{
			printf("����ը��\t");
			finish = clock();
			printf("��ʱ%d ��\n", (int)(finish - start) / CLOCKS_PER_SEC);
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
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("����������������룺\n");
			break;
		}
		muen();
		scanf("��ѡ��\n");
	}while (1);
	system("pause");
	return 0;
}