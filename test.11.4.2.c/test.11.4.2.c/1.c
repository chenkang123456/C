#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int A, B, C, D, E;
//	int score;
//	printf("input a score(0-100):");
//	scanf("%d", &score);
//	if (score >= 90)
//	{
//		printf("grade = A");
//	}
//	if (score >= 80)
//	{
//		printf("grade = B");
//	}
//	if (score >= 70)
//	{
//		printf("grade = C");
//	}
//	if (score >= 60)
//	{
//		printf("grade = D");
//	}
//	else
//	{
//		printf("grade = E");
//	}
//	return 0;
//}
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	double sum = 0.0;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + (pow(i, i + 1)) / i;
	}
	printf("½á¹ûÊÇ£º%f\n", sum);
	system("pause");
	return 0;
}