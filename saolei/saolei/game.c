#define _CRT_SECURE_NO_WARNINGS 
#include"game.h"
double  start, finish;
void game()
{

	int ret = 0;
	init_mine();//��ʼ��������̺����������
	set_mine();//����������̲���
	print_mine();//��ӡ���������
	printf("\n");
	print_player();//��ӡ�������
	start = clock();
	safe_mine();//�����һ�α�ը��

	if (count_show_mine() == COUNT)//һ����Ӯ�����
	{
		print_mine();
		printf("���Ӯ��\n\n");
		return;
	}print_player();////��ӡ�������

	while (1)//ѭ��ɨ��
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
			print_mine();//��ӡ���������鿴�׵ķֲ�
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
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
		muen();
		printf(" ��ѡ�� ?\n");
	} while (1);
	system("pause");
	return 0;
}
