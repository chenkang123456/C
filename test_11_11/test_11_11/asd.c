#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <string.h>
//int bin_search(int sz,int arr[],int key)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		int mid =left + (right - left)/2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid]<key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//		return -1;
//	}
//}
//int main()
//{ 
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };	
//	int k = 7;	
//	int left = 0;	
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;	
//	int right = sz;	
//	int ret = binary_search(arr, k, sz);	
//	if (ret == -1)	
//	{ 
//		printf("没有找到\n"); 
//	} 
//	else	
//	{ 
//		printf("找到了，下标为：%d\n", mid); 
//	}	
//	system("pause");	
//	return 0; 
//}


//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int c;
//	int tmp;
//	while ((c = getchar()) != EOF)
//	{
//		if (c>='a'&& c<='z')
//		{ 
//			tmp = c - 32;
//			printf("%c\n", tmp);
//		}
//		else if (c >= 'A'&&c <= 'Z')
//		{
//			tmp = c + 32;
//			printf("%c\n", tmp);
//		}
//		else{
//		}
//	}
//	system("pause");
//	return 0;
//}
//

#include<stdio.h>
#include<stdlib.h>
int bin_search(int arr[], int left, int right, int key)
{
	int mid = 0;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 6;
	int mid = 0;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
			break;
	}
	if (left <= right)
		printf("找到了，下标是%d\n", mid);
	else
	printf("找不到%d\n");
}
