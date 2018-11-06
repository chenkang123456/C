#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int iResult=0;
//	int i;
//	printf("由1加到100的结果是:");
//	for (i = 1; i < 100; i++)
//	{
//		iResult = iResult + i;
//	}
//	printf("%d\n");
//	return 0;
//}
//
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i;
//	int MAX;
//	int arr[10] = { 0 };
//	printf("请任意输入10个整数:");
//	for (i = 0; i <= 9; i++)
//	{
//		scanf("%d\n", &arr[i]);
//	}
//	MAX == arr[0];
//	for (i = 1; i <= 9; i++)
//	  {
//		  if (1 < arr[i]);
//	  }
//	{
//		MAX == arr[i];
//	}
//	printf("输出最大数\n", &arr[i]);
//	return 0;
//}


#include<stdio.h>
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int b[5] = { 6, 7, 8, 9, 10 };
	int i = 0;
	for (i = 0; i<sizeof(a) / sizeof(a[0]); i++)
	{
		a[i] = a[i] + b[i];
		b[i] = a[i] - b[i];
		a[i] = a[i] - b[i];
	}
	printf("now,a[5]=\n");
	for (i = 0; i<sizeof(a) / sizeof(a[0]); i++)
		printf("%d ", a[i]);
	printf("\nnow,b[5]=\n");
	for (i = 0; i<sizeof(a) / sizeof(a[0]); i++)
		printf("%d ", b[i]);
	return 0;
}