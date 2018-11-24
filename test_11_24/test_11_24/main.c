#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i < 10; i++)
//	{
//		if(a[i] % 2 == 1)
//			printf(" %d ", a[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//	    if (a[i] % 2 == 0)
//		    printf(" %d ", a[i]);
//    }
//	return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int a[3][3] = { 0 };
//	int i, j, sum;
//	printf("please input:\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (i == j)
//			{
//				sum = sum + a[i][j];
//			}
//		}
//	}
//	printf("the result is:%d\n", sum);
//	return 0;
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//unsigned int reverse_bit(unsigned int x)
//{ 
//	unsigned int data = 0;	
//	int i = 0;	
//	for (i = 0; i < 32; i++)
//	{ 
//		if (x & (1 << i))		
//		{ 
//			data = data | (1 << (31 - i)); 
//		} 
//	}	
//	return data; 
//}int main()
//{ 
//	unsigned int ret = reverse_bit(25);	
//	printf("%x\n", ret);	
//	system("pause");	 
//	return 0; 
//}


//#include<stdio.h>
//#include<stdlib.h>
//unsigned int get_value(unsigned int N)
//{
//	unsigned int value = 1;
//	for (unsigned int i = 0; i<N; ++i)
//	{
//		value = 2 * value;
//	}
//	return value;
//}
//unsigned int reverse_bit(unsigned int value)
//{
//	char arr[32] = { 0 };
//	int i = 31;
//	unsigned int result = 0;
//	while (value)
//	{
//		arr[i--] = value % 2 + '0';
//		value >>= 1;          
//	}
//	for (; i >= 0; i--)
//		arr[i] = arr[i] + '0';
//	for (int j = 0; j<32; ++j)
//	{
//		unsigned int ret = arr[j] - '0'; 
//		result = result + ret*get_value(j);   
//	}
//	return result;
//}
//void main()
//{
//	unsigned int value = 25;
//	printf("%u\n", reverse_bit(value));
//	system("pause");
//}


//
//#include<stdio.h>
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d", i + j);
//	return 0;
//}
//
//
//
//#include<stdio.h>
//int main()
//{
//	int a = 8;
//	int b = 6;
//	int aver = 0;
//	aver = (a&b) + ((a^b)>>1);
//	printf("%d\n", aver);
//	return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("please input two numbers:(a>b)\n");
//	scanf("%d%d", &a, &b);
//	printf("\n");
//	printf("%d\n", (a&b)+((a^b)>>1));
//	return 0;
//}
//
//
//
//#include<stdio.h>
//int average(int a, int b)
//{
//	int ret = a - (a - b) / 2;
//	return ret;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	printf("please input two numbers:(a>b)\n");
//	scanf("%d%d", &a, &b);
//	ret = average(a, b);
//	printf("%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	int a[7] = { 1, 2, 3, 4, 3, 2, 1 };
//	for (i = 0; i < 7; i++)
//	{
//		ret ^= a[i];
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//
//
#include<stdio.h>
#include<stdlib.h>
void reverse_string(char arr[])
{
	char *p = arr;
	char *q = p;
	while (*p)
	{
		if (isspace(*p))
		{
			reverse(q, p - 1);
			p++;
			q = p;
		}
		else
		{
			p++;
		}
	}
	reverse(q, p - 1);
	reverse(arr, p - 1);
}

static int reverse(char *start, char *end)
{
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
int main()
{

	char arr[] = "student a am i";
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	reverse_string(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}

//
//
#include<stdio.h>
#include<stdlib.h>
int Findnum(int arr[3][3], int key, int rows, int cols)
{
	int row = 0;//срио╫гоб╠Й
	int col = cols - 1;
	while ((row >= 0) && (col <= cols - 1))
	{
		if (key < arr[row][col])
		{
			col--;
		}
		if (key > arr[row][col])
		{
			row++;
		}
		if (key == arr[row][col])
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 10 };
	int key = 9;
	int ret = Findnum(arr, key, 3, 3);
	if (ret == 0)
	{
		printf("no\n");
	}
	else if (ret == 1)
	{
		printf("yes\n");
	}
	system("pause\n");
	return 0;
}








