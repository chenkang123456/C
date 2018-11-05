
//#include<stdio.h>
//int main()
//{
//   int i,j;
//   for(i=1;i<=9;i++)
//   {
//      for(j=1;j<=i;j++)
//        {
//          printf("%d*%d=%d",i,j,i*j);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//void prime(int n)
// {
//  int i,j=1;
//  for(i=2;i<n;i++,j=i)
//    {
//       if(n%i==0)
//       break;
//    }
//  if(j>=n)
//  printf("%d is prime\n",n);
//}
//int main()
// {
// int i;
// for(i=100;i<=200;i++)
// prime(i);
// return 0;
//    }
//#include<stdio.h>
//int main()
//{
//int year;
//for(year=1000;year<=2000;year++)
//{
//if((year%4==0&&year%100!=0||year%400==0))
//printf("%-5d",year);
// }
// system("pause");
// return 0;
// }
//#include<stdio.h>
//int main()
//{
//int i, j;
//for(i=1;i<=9;i++)
//{
//for(j=1;j<=i;j++)
//{
//printf("%d*%d=% d ",i,j,i*j);
//}
//printf("%d\n");
//}
//return 0;
//}
//#include<stdio.h>
//void main()
//{
//int i,j,k;
//for(i=1;i<5;i++)
//{
//for(k=0;k>=i-4;k--)
//printf("");
//for(j=0;j<2*i-1;j++)
//printf("*");
//printf("\n");
//}
//for(i=5;i<8;i++)
//{
//for(k=0;k<=i-4;k++)
//printf("");
//for(j=0;j<=14-i*2;j++)
//printf("*");
//printf("\n");
//}
//}
//#include<stdio.h>
//void main()
//long n;
//int a[10],i=0,len;
//printf("输入一个不多于5位数的正整数:");
//scanf("%1d",&n);
//while (n!=0)
//{
//a[i]=n%10;
//i++;
//n=n/10;
//}
//len=i;
//printf("%d\n",len);
//for(i=len-1;i>=0;i--)
//printf("%d",a[i]);
//}/*
//#include<stdio.h>
//int main()
//{
//    int line = 0 ;
//    int i = 0 ;
//    int j = 0 ;
//    int k = 0;
//    scanf("%d",&line);
//    for(i = 0;i< line;i++)
//    {
//    for(j = 0;j< line - (i+1);j++)
//    {
//    printf("");
//    }
//    for(k = 0;k<2*(i+1)-1;k++)
//    {
//    printf("*");
//    }
//    printf("\n");
//}
//for(i= 0 ;i<line-1;i++)
//{
//   for(j = 0;j<i+1;j++)
//   {
//   printf("");
//   }
//   for(k=(2*line)-2*(i+1)-1;k>0;k--)
//   {
//   printf("*");
//   }
//   printf("\n");
//}
//return 0;
//}

 
 
//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//        int line = 0 ;
//        int i = 0 ;
//        int j = 0 ;
//        int n = 0;
//        scanf("%d",&line);
//        for(i = 0;i< line;i++)
//        {
//        for(n = 0;n< line - (i+1);n++)
//        {
//        printf("");
//        }
//        for(j = 0;j<2*(i+1)-1;j++)
//        {
//        printf("*");
//        }
//        printf("\n");
// }
// for(i= 0 ;i<line-1;i++)
// {
//       for(n = 0;n<i+1;n++)
//       {
//       printf("");
//       }
//       for(j=0;j<2*(line-1-i)-1;j++)
//       {
//       printf("*");
//       }
//       printf("\n");
// }
// system("pause");
// return 0;
// }


//#include<stdio.h>          /*输入输出头文件*/
//#include<math.h>          /*数学头文件*/
//void main()           /*空类型：主函数*/
//{
//    int a,b;           /*定义变量的数据类型为整型*/
//    for(a=-6;a<=6;a++)            /*确定行数*/
//    {
//        for(b=1;b<=abs(a);b++)           /*确定空格数量*/
//            printf(" ");
//        for(b=abs(a)-6;b<=6-abs(a);b++)           /*确定每一行星号数量*/
//            printf("*");
//        printf("\n");          /*换行*/
//    }
//}