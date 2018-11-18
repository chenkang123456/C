#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h> 
//int fun(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//		return  fun(n - 1) + fun(n - 2);
//}
//
//int main()
//{
//
//	int n;
//	printf("please input n:");
//	scanf("%d", &n);
//	printf("the result is %ld\n", fun(n));
//}

//#include<stdio.h>
//#include<windows.h> 
//int power(int n,int k)
//{
//	if(k <= 0)		
//		return 1;	
//    else		
//        return n*power(n, k - 1);
//}
//int main()
//{ 
//	int n = 3;	
//	int k = 2;	
//	scanf("%d%d", &n, &k);	
//	int ret = power(n, k);	
//	printf("%d\n", ret);	
//	system("pause");	
//	return 0; 
//}


//#include<stdio.h>
//#include<stdlib.h>
//int DigitSum(int n)
//{
//	if (n > 0)
//
//		return n % 10 + DigitSum(n / 10);
//
//	else
//
//		return 0;
//}
//int main()
//{
//	int num = 0;
//
//	scanf("%d", &num);
//
//	printf("%d\n", DigitSum(num));
//
//	system("pause");
//
//	return 0;
//
//}
//
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
//#include<stdio.h>
//#include<windows.h>
//int my_strlen(char *string)
//{
//	int count = 0;
//	if (*string != '\0')
//	{
//		string++;
//		count = 1 + my_strlen(string);
//	}
//	return count;
//}
//
//int main()
//{
//	char *str = "asdf";
//	printf("%d\n", my_strlen(str));
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//int my_strlen(char* string)
//{
//	int count = 0;
//	while (*string != '\0')
//	{
//		count++;
//		string++;
//	}
//	return count;
//}
//int main()
//{
//	char string[] = "asdf";
//	int ret = my_strlen(string);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//#include<windows.h>
//int my_strlen( char *string)
//{
//	assert(string != NULL);
//	if (*string != '\0')
//	{
//		return  1 + my_strlen(string + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char *string = "abcd";
//	int ret = my_strlen(string);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<windows.h>
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
//	printf("递归结果为：%d\n",DS);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//int FD_S(int n)
//{
//	int sum = 1;
//	for (; n > 0; n--)
//		sum *= n;
//	return sum;
//}
//int main()
//{
//	int n = 2;
//	printf("please input the number:");
//	scanf("%d", &n);
//	int FDS = 0;
//	FDS = FD_S(n);
//	printf("结果为：%d\n", FDS);
//	system("pause");
//	return 0;
//}

