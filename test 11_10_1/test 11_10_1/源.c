#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int* p = &a;
//	int* q = &b;
//	*p = q;
//	printf("%d,%d", a,b);
//	return 0;
//}

//#include<stdio.h>          
//#include<math.h>         
//void main()
//{
//	int a, b;
//	for (a = -6; a <= 6; a++)
//	{
//		for (b = abs(a) - 6; b <= 6 - abs(a); b++)
//			printf("*");
//		printf("\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int i,j,k,n;
//	printf("narcissus numbers are");
//	for (n = 1; n < 1000; n++)
//	{
//	  i = n / 100;
//      j = n / 10 - i * 10;
//      k = n % 10;
//      if (n == i*i*i + j*j*j + k*k*k)
//         printf("%5d", n);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int sum = 0;
//	int num=0;
//	scanf("%d",&num);
//	for (i = 0; i < 5; i++)
//	{
//		a = a * 10 + num;
//		sum = sum + a;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a;
//	for (a = 1;a<10;a++)
//
//}


//#include<stdio.h>
//void main()
//{
//	int i, j, k, n;
//	printf("narcissus numbers are");
//	for (n = 1; n<1000; n++) 
//	{
//		i = n / 100;
//		j = n / 10 - i * 10;
//		k = n % 10;
//		if (n == i*i*i + j*j*j + k*k*k)
//			printf("%5d", n);
//
//	}
//	printf("\n");
//}

//#include<stdio.h>          
//#include<math.h>         
//void main()
//{
//	int a, b;
//	for (a = -6; a <= 6; a++)
//	{
//		for (b = abs(a) - 6; b <= 6 - abs(a); b++)
//			printf("*");
//		printf("\n");
//	}
//}
//
//#include<stdio.h>
//int main()
//{
//	int i, j, k, n;
//	printf("narcissus numbers are");
//	for (n = 1; n < 1000; n++)
//	{
//		i = n / 100;
//		j = n / 10 - i * 10;
//		k = n % 10;
//		if (n == i*i*i + j*j*j + k*k*k)
//			printf("%5d", n);
//	}
//	return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int num = 0;
//	int sum = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 5; i++)
//	{
//		a = a * 10 + num;
//		sum = sum + a;
//	}
//	printf("%d", sum);
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
//			sum = i * j;
//			printf("%2d = %d * %d", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	printf("请输入乘法口诀的行号:");
//	scanf_s("%d", &n);
//	mul(n);
//		system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int  leap_year(int year)
//{
//	int n=0;
//	for (year = 0; year <= n; year++)
//	{
//		if (((0 == year % 4 )&& (0 != year % 100))|| (0 == year % 400))
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//}
//int main()
//{
//	int year=0;
//	printf("please input a year:");
//	scanf_s("%d",year);
//	if (leap_year(year))
//			    printf("%d is a runnian.\n", year);
//			else
//				printf("%d isn't a runnian.\n", year);
//	system("pause");
//	return 0;
//}


//
//#include<stdio.h>
//#include<stdlib.h>
//int Yyear(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	printf("please input a year:");
//	scanf("%d", &year);
//	if (Yyear(year))
//		printf("%d is a runnian.\n", year);
//	else
//		printf("%d isn't a runnian.\n", year);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//		}
//	}
//	if (i>=n)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int j = 0;
//	printf("please input a number:");
//	scanf("%d", &j);
//	int t = prime (j);
//	if (t==1)
//	{
//		printf("%d is  prime number.\n ", j);
//	} 
//	else
//	{
//		printf("%d isn't prime number.\n", j);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	printf("请输入数字：");
//	scanf("%d", &i);
//	int t = sushu(i);
//	if (t == 1)
//	{
//		printf("%d   是素数\n", i);
//	}
//	else
//	{
//		printf("%d   不是素数\n", i);
//	}
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
int swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
	return 0;
}
int main()
{
	int a = 0,b = 0; 
	printf("please input the two number\n");
	scanf("%d%d",&a, &b);
	swap(&a, &b);
	printf("a=%d,b=%d", a,b);
	system("pause");
	return 0;
}