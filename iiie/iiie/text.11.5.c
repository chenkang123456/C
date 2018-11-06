//#include<stdio.h>
//#include <stdio.h>
//#include <math.h>
// int main()
// {	
// int a,b,c,d;	
// int count = 1;	
// printf("请输入一个不多于5位的正整数：");	
// scanf("%d",&a);	
// c = a;	
// printf("逆序：\n");	
// while(c / 10 != 0)	
// {		
// count++; 		
// b = c % 10;		
// printf("%d\n",b);		
// c = c / 10;		
// }		
// b = c % 10;	
// printf("%d\n",b);	
// printf("位数是：%d\n",count);	
// printf("顺序：\n");	
// while(a % 10 != 0)	
// {		
// d = a / (int)pow(10,(count-1));		
// printf("%d\n",d);		
// a = a % (int)pow(10,count-1);		
// count--;	
// }	
// return 0;
// }

//
//#include <stdio.h>
//int main()
//{
//    int x, a, b, c, d, e;
//    printf("Please enter number: ");
//    scanf("%d", &x);
//    while (x < 0 || x > 99999)
//    {
//        printf
//        ("Error! Retry!\nPlease enter number: ");
//        scanf("%d", &x);
//    }
//    a = x / 10000;
//    b = x / 1000;
//    c = x / 100;
//    d = x / 10;
//    e = x - d * 10;
//    if (a >= 1 && a <= 9)
//    {
//        printf("%d is 5 bits!\n", x);
//        printf("%d %d %d %d %d\n", a, b-a*10, c-b*10, d-c*10, e);
//        printf("%d %d %d %d %d\n", e, d-c*10, c-b*10, b-a*10, a);
//    }
//    else if (b >= 1 && b <= 9)
//    {
//        printf("%d is 4 bits!\n", x);
//        printf("%d %d %d %d\n", b, c-b*10, d-c*10, e);
//        printf("%d %d %d %d\n", e, d-c*10, c-b*10, b);
//    }
//    else if (c >= 1 && c <= 9)
//    {
//        printf("%d is 3 bits!\n", x);
//        printf("%d %d %d\n", c, d-c*10, e);
//        printf("%d %d %d\n", e, d-c*10, c);
//    }
//    else if (d >= 1 && d <= 9)
//    {
//        printf("%d is 2 bits!\n", x);
//        printf("%d %d\n", d, e);
//        printf("%d %d\n", e, d);
//    }
//    else
//    {
//        printf("%d is 1 bits!\n", x);
//        printf("%d\n", x);
//    }
//    return 0;
//}


//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	int i = 1;
//	int MAX;
//	int arr[10] = { 0 };
//	printf("任意输入10个整数:");
//	for (i = 0; i <= 9;i++)
//	{
//		scanf("%d\n", &arr[i]);
//	}
//	MAX = arr[1];
//	for (i = 1; i <= 9; i++)
//	{
//		if (1 < arr[i])
//		{
//			MAX = arr[i];
//		}
//	}
//	printf("输出最大数：%d" ,MAX);
//	return 0;
//}


//#include<stdio.h>
//void main()
//{
//float sum=0;
//int i,f,temp = 1;
//scanf("%d",&i);
//  for(i=1;i<=100;i++)
//  {
//  f=1.0/i;
//  sum=sum+temp*f;
//  temp=-temp;
//  }
//  printf("%f",sum);
//  
//}

//#include<stdio.h>
//int main()
//{
//int a[5]={1,2,3,4,5};
//int b[5]={6,7,8,9,10};
//int i,temp;
//for(i=0;i<=4;i++)
//{
//temp=a[5];
//a[5]=b[5];
//b[5]=temp;
//}
//for(i=0;i<=4;i++)
//printf("%d\n",a[5]);
//for(i=1;i<=4;i++)
//printf("%d\n",b[5]);
//return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//  int i=0;
//  int k=0;
//  for(i=1;i<=100;i++)
//   {
//      if(i%10==9)
//      {
//        k++;
//      }
//   }
//printf("%d\n",k);
//return 0;
//}



#include<stdio.h>
int main()
{	
int i, j;	
float max1=0.000000,max2=0.000000,max;
	for(i=1.000000; 
	i<=100; i+=2)	
	{
	  max1=max1 + 1.000000/i;
	}
	for(j=2.000000; j<=100; j+=2)
	{	
	  max2=max2 + 1.000000/j;
	}	
	max=max1-max2;
	printf("%f",max);	
	return 0;
	}