#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf(" %d*%d=%d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//void mul(int n)
//{
//	int i, j;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			sum = i*j;
//			printf(" %d*%d=%d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	printf("请输入乘法口诀行号：");
//	scanf("%d", &n);
//	mul(n);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int swap(int *a, int *b)
//{
//	int tmp;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//	return 0;
//}
//int main()
//{
//	int a=0, b=0;
//	printf("请输入要交换的两个数：");
//	scanf("%d%d", &a, &b);
//	swap(&a, &b);
//	printf("a=%d b=%d", a, b);
//	system("pause");
//	return 0;
//}



//#include<stdio.h>
//int fun(int n)
//{
//	if (n < 3)
//		return 1;
//	else
//		return fun(n - 1) + fun(n - 2);
//}
//int main()
//{
//	int n;
//	printf("please input the number:");
//	scanf("%d", &n);
//	printf("the result is: %d\n", fun(n));
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//int power(int n, int k)
//{
//	if (k <= 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*power(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int ret = power(n, k);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int DigitSum(int n)
//{
//	if (n > 0)
//		return n % 10 + DigitSum(n / 10);
//	else
//		return 0;
//}
//int main()
//{
//	int sum = 0;
//	scanf("%d", &sum);
//	printf("%d\n", DigitSum(sum));
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int D_S(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n*D_S(n - 1);
//}
//int main()
//{
//	int n = 2;
//	printf("please input the number:");
//	scanf("%d", &n);
//	int DS = 0;
//	DS = D_S(n);
//	printf("结果为：%d\n", DS);
//	system("pause");
//	return 0;
//}
//


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



#include<stdio.h>
int main()
{   
	int i, j, n = 0;
	int a[100][100] = { 0 };
	while (n < 1 || n>99)
	{
		printf("请输入杨辉三角的行数：");
		scanf("%d", &n);
	}
	for (i = 0; i < n; i++)
	{
		a[i][0] = 1;
	}
	for (i = 1; i < n; i++)
		for (j = 1; j <= i; j++)
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			for (i = 0; i < n; i++)
			{
				for (j = 0; j <= i; j++)
					printf("%5d", a[i][j]);
				printf("\n");
			}
}