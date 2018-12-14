#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("********************\n");
//	printf("** 1.play  0.exit **\n");
//	printf("********************\n");
//}
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("请输入猜的数字>:");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (input < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
//
//#include <stdio.h>
//#include <stdlib.h>
//void init(int *arr, int len)
//{	
//	int i = 0;	
//	for (i = 0; i < len; i++)	
//	{		
//		scanf("%d", &arr[i]);
//		//arr[len] = '\0';	
//	}	printf("初始化数组\n");	
//	for (i = 0; i < len; i++)	
//	{		
//		printf("%d", arr[i]);	
//	}
//}
//void empty(int *arr, int len)
//{	
//	int i = 0;	
//	for (i = 0; i < len; i++)	
//	{		
//		arr[i] = 0;	
//	}	
//	printf("清空数组\n");	
//	for (i = 0; i < len; i++)	
//	{		
//		printf("%d", arr[i]);	
//	}
//}void reverse(int *arr, int len)
//{	
//	int temp = 0, i = 0;	
//	for (i = 0; i < len / 2; i++)	
//	{		
//		temp = arr[i];		
//		arr[i] = arr[len - 1 - i];		
//		arr[len - 1 - i] = temp;	
//	}	printf("逆置数组\n");	
//	for (i = 0; i < len; i++)	
//	{		
//		printf("%d", arr[i]);	
//	}
//}
//void menu()
//{	
//	printf("*******************************************\n");	
//	printf("**************1、初始化数组****************\n");	
//	printf("**************2、清空数组******************\n");	
//	printf("**************3、数组元素的逆置************\n");	
//	printf("**************4、退出程序******************\n");	
//	printf("*******************************************\n");
//}
//int main()
//{	
//	int *arr;	
//	int n = 0;	
//	int m = 0;	
//	int a = 0;	
//	int count = 1;	/*int len = 0;*/	
//	printf("数组的大小：");	
//	scanf("%d", &n);	
//	arr = (int *)malloc(n);//动态内存分配，输入n=5，只能输入四个元素，第五个为\0	
//	menu(); 	
//	while (count)	
//	{		
//		printf("\n请选择:\n");		
//		scanf("%d", &a);		
//		printf("\n");		
//		switch (a)		
//		{		
//		case 1:
//			init(arr, n - 1);//n是数组元素个数，包括\0，数组元素下标引用还要减一；			
//			count = 1;			
//			break;		
//		case 2:
//			empty(arr, n - 1);			
//			break;		
//		case 3:
//			reverse(arr, n - 1);			
//			break;		
//		case 4:
//			count = 0;			
//			break;		
//		default:			
//			printf("输入错误，请重新输入：\n");		
//		}	
//	}	
//	system("pause");	
//	return 0;
//}

#include<stdio.h>
int main()
{
	int i, j, k, n;
	printf("narcissus numbers are");
	for (n = 1; n < 1000; n++)
	{
		i = n / 100;
		j = n / 10 - i * 10;
		k = n % 10;
		if (n == i*i*i + j*j*j + k*k*k)
			printf("%5d", n);
	}
	return 0;
}
