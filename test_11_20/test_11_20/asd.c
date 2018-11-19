#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{	
//	int num = 0;	
//	int i = 0;	
//	printf("Please enter the num:\n");	
//	scanf("%d", &num);	
//	int a[32];	
//	for (; i < 32; i++)	
//	{		
//		a[i] = num % 2;		
//		num /= 2;	
//	} 	
//	printf("偶数序列：\n");	
//	for (i = 31; i >= 0; i -= 2)		
//		printf("%d", a[i]);	
//	printf("\n"); 	
//	printf("奇数序列：\n");	
//	for (i = 30; i >= 0; i -= 2)		
//		printf("%d", a[i]); 	
//	printf("\n");	
//	system("pause");	
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	int num = 0;
//	printf("please input a number:\n");
//	scanf("%d", &num);
//	int a[32];
//	for (; i < 32; i++)
//	{
//		a[i] = num % 2;
//		num /= 2;
//	}
//	printf("偶数序列：\n");
//	for (i = 31; i >= 0; i -= 2)
//		printf("%d", a[i]);
//	printf("\n");
//	printf("奇数序列：\n");
//	for (i = 30; i >= 0; i -= 2)
//		printf("%d",a[i]);
//		printf("\n");
//	system("pause");
//	return 0;
//}
//
//#include<stdio.h> 
//int fun(int n)
//{
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	if (n <= 2)
//		return 1;
//	else
//		for (i = 0; i <= n - 3; i++)
//		{
//			a = b;
//			b = c;
//			c = a + b;
//		}
//	return c;
//}
//int main()
//{
//
//	int n;
//	printf("please input n:");
//	scanf("%d", &n);
//	printf("the result is %ld\n", fun(n));
//}


//#include <stdio.h>
//#include "stdlib.h"
//#include<stdio.h>
//void reverse_string(char *string)
//{
//	if ('\0' != *(++string))
//		reverse_string(string);
//	printf("%c", *(string - 1));
//}
//
//int main()
//{
//	char *a = "abcde";
//	reverse_string(a);
//	printf("\n");
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//void reverse_string(char *string)
//{
//	if ('\0' != *(++string))
//		reverse_string(string);
//	printf("%c", *(string - 1));
//}
//int main()
//{
//	char *a = "asdfgh";
//	reverse_string(a);
//	printf("\n");
//	system("pause");
//	return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>
//void print(int n)
//{
//	if (n < 10)
//	{
//		printf("%d ", n);
//	}
//	else
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	system("pause");
//	return 0;
//}
//

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m = 0;
	int n = 0;
	int i = 0;
	int count = 0;
	printf("please input two numbers:\n");
	scanf("%d%d", &m, &n);
	int a = m^n;
	while (a)
	{
		a = a&(a - 1);
		count++;
	}
	printf("共有count=%d位不同\n", count);
	system("pause");
	return 0;
}




//结构体声明
struct Stu
{
	char name[20];
	short int age;
	char id[13];
}s1;
int main()
{
	struct Stu s2;
	return 0;
}

typedef struct Stu
{
	char name[20];
	short int age;
	char id[13];
}stu;
int main()
{
	struct Stu s2 = {"张三",20,"id"};//初始化：定义变量的同时赋初值
	return 0;
}


//空指针
struct Node
{
	int date;
	struct Point p;
	char c;
	struct Node* pn;
};
int main()
{
	int a = 10;
	//int* p=&a;
	//int *p = NULL;
	struct Node n = { 20, { 5, 6 },'w', NULL };
	printf("data=%d x=%d y=%d %c", n.data, n.p.x, n.p.y, n.c);
	return 0;
}


int main()
{
	int a = 10;
	//int* p=&a;
	int *p = NULL;
	return 0;
}

void Point2(struct B* pb)
{
	printf("%d %s\n", pb->x, pb->arr);
}
int main()
{
	struct B b
	return 0;
}