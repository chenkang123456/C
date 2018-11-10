#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int MAX = 0;
//	int arr[10] = { 0 };
//	printf("任意输入10个整数:");
//	for (i = 0; i <10; i++)
//	{
//		scanf("%d\n", &arr[i]);
//	}
//	MAX = arr[1];
//	for (i = 1; i < 10; i++)
//	{
//		if (MAX < arr[i])
//		{
//			MAX = arr[i];
//		}
//	}
//	printf("输出最大数：%d", MAX);
//	return 0;
//}
//
//
//
//
#include<stdio.h>
int main()
{
	float Pie = 3.14f;
	float fArea;
	float fRadius;
	puts("Enter the radius:");
	scanf("%f", &fRadius);
	fArea = fRadius*fRadius*Pie;
	printf("The Area is:%.2f\n", fArea);
	return 0;
}


