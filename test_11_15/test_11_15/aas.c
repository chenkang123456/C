#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int bin_search(int arr[], int right, int left, int key)
{
	int mid = 0;
	while (left <= right)
	{
		int mid =left +(right-left)/2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid = +1;
		}
		else
			return mid;
	}
	return -1;
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key = 5;
	int left = 0;
	int num = 0;
	int right = sizeof(arr) / sizeof(arr[0] - 1);
	printf("������Ҫ���ҵ�����");
	scanf("%d", &key);
	num = bin_search(arr,left ,right,key );
	printf("%d\n", &num);
	system("pause");
	return 0;
}



//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int password = 000000;
//	int input = 0;
//	printf("���������룬������%d�λ���:\n", (-m + 3));
//	for (m = 0; m < 3; m++)
//	{
//		scanf_s("%d", &input);
//		if (password == input)
//			break;
//		else
//		{
//			if (m<2)
//				printf("���������룬������%d�λ���:\n", (-m + 2));
//		}
//	}
//	if (m < 3)
//		printf("������ȷ����¼�ɹ�\n");
//	else
//		printf("������������˳�����\n");
//	system("pause");
//}