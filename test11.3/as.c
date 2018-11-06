
#include<Windows.h>
int main()
{
	int i = 1;
	int MAX;
	int arr[10] = { 0 };
	printf("任意输入10个整数:");
	for (i = 0; i <= 9;i++)
	{
		scanf("%d\n", &arr[i]);
	}
	MAX = arr[1];
	for (i = 1; i <= 9; i++)
	{
		if (1 < arr[i])
		{
			MAX = arr[i];
		}
	}
	printf("输出最大数：%d" ,MAX);
	return 0;
}
//#include<stdio.h>
//int main()
//{
//	int index;
//	int iArraya[10] = { 0 };
//	int iArrayb[10] = { 0 };
//	for (index = 0; index <= 9; index += 1)
//	{
//		[iArraya] = [iArraya] ^ [iArrayb];
//		[iArrayb] = [iArraya] ^ [iArrayb];
//		[iArraya] = [iArraya] ^ [iArrayb];
//	}
//	printf("%d %d\n", iArraya[index],iArrayb[index]);
//	return 0;
//#include <stdio.h>
//int main()
//{
//	//int A, B, C, D, E;
//	int score;
//	char grade;
//	printf("Input a score(0-100):");
//	scanf("%d", &score);
//	if (score >= 60)
//	{
//		grade = 'D';
//	}
//		if (score >= 70)
//		{
//			grade = 'C';
//		}
//			if (score >= 80)
//			{
//				grade = 'B';
//			}
//				if (score >= 90)
//				{
//					grade = 'A';
//				}
//						
//				else
//				{
//					grade = 'E';
//				}
//					
//				putchar(grade);
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			k++;
//		}
//	}
//	printf("%d\n", k);
//	return 0;
//}