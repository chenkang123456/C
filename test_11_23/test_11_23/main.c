#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{   
//	int i, j, n = 0;
//	int a[100][100] = { 0 };
//	while (n < 1 || n>99)
//	{
//		printf("请输入杨辉三角的行数：");
//		scanf("%d", &n);
//	}
//	for (i = 0; i < n; i++)
//	{
//		a[i][0] = 1;
//	}
//	for (i = 1; i < n; i++)
//		for (j = 1; j < n;j++)
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//			for (i = 0; i < n; i++)
//			{
//				for (j = 0; j <= i; j++)
//					printf("%5d", a[i][j]);
//				printf("\n");
//			}
//}


//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 10 5 1
//行 ：i
//列 ：j
//a[i][j] = a[i - 1][j - 1] + a[i - 1][j]


//#include<stdio.h>
//int main()
//{
//	int i, j, n = 0;
//	int a[100][100] = { 0 };
//	while (n < 1 || n>99)
//	{
//		printf("请输入杨辉三角的行数：");
//		scanf("%d", &n);
//	}
//	for (i = 0; i < n; i++)
//	{
//		a[i][0] = 1;
//	}
//	for (i = 1; i < n; i++)
//		for (j = 1; j < n; j++)
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//	        for (i = 0; i < n; i++)
//	        {
//		        for (j = 0; j <= i;j++)
//		           printf("%5d", a[i][j]);
//		        printf("\n");
//	        }
//			return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i, j, n = 0;
//	int a[100][100] = { 0 };
//	while (n < 1 || n>99)
//	{
//		printf("请输入杨辉三角的行数:");
//		scanf("%d", &n);
//	}
//	for (i = 0; i < n; i++)
//	{
//		a[i][0] = 1;
//	}
//	for (i = 1; i < n; i++)
//		for (j = 1; j <= i; j++)
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//			printf("%5d", a[i][j]);
//		printf("\n");
//	}
//}



//




//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int count = 0;
//	printf("please input two numbers:\n");
//	scanf("%d%d", &m, &n);
//	int a = m^n;
//	while (a)
//	{
//		a = a&(a - 1);
//		count++;
//	}
//	printf("共有count=%d位不同\n", count);
//	system("pause");
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
void print(int n)
{
	if (n < 10)
	{
		printf("%d", n);
	}
	else
	{
		print(n / 10);
		printf(" %d ", n % 10);
	}
}
int main()
{
	int n = 0;
	printf("please input the number:");
	scanf("%d", &n);
	print(n);
	system("pause");
	return 0;
}


