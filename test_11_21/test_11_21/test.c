#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i,j,n=0;
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
//	for (j = 1; j <= i; j++)
//	a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//	for (i = 0; i < n;i++)
//	{
//		for (j = 0; j <= i;j++)
//		printf("%5d", a[i][j]);
//		printf("\n");
//	 }
//}


#include<stdio.h>
int main()
{
	int A = 0, B = 0, C = 0, D = 0, E = 0;
	for (A = 1; A <= 5; A++)
	{
		for (B = 0; B <= 5; B++)
		{
			for (C = 0; C <= 5; C++)
			{
				for (D = 0; D <= 5; D++)
				{
					for (E = 0; E <= 5;E++)
						if (((B == 2) + (A == 3) == 1) && ((B == 2) + (E == 4) == 1) && ((C == 1) + (D == 2) == 1)
							&& ((C == 5) + (D == 3) == 1) && ((E == 4) + (A == 1) == 1))
						{
							int num = 0;
							int flag = 1;
							num |= (1 << (A - 1));
							num |= (1 << (B - 1));
							num |= (1 << (C - 1));
							num |= (1 << (D - 1));
							num |= (1 << (E - 1));
							while (num)
							{
								if (num % 2 == 0)
								{
									flag = 0;
								}
								num /=2;
							}
							if (flag == 1)
								printf("A=%d B=%d C=%d D=%d E=%d\n", A, B, C, D, E);
						}
				}
			}
		}
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i, sum = 0, flag = 0;
	char killer;
	for (i = 1; i <= 4; i++)
	{
		killer = 64 + i;
		sum = (killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D');
		if (sum == 3)
		{
			flag = 1;
			printf("%c is the killer.\n", killer);
			break;
		}
	}
	if (flag == 0)
	{
		printf("%c can not find.\n");
	}
	return 0;
}