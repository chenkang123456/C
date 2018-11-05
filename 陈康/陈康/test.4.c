#include<stdio.h>
int main()
{    
 int a[5]={1,2,3,4,5};
 int b[5]={6,7,8,9,10};
 int i=0;
 for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
 {
 a[i]=a[i]+b[i];
 b[i]=a[i]-b[i];
 a[i]=a[i]-b[i];
 }
 printf("now,a[5]=\n");
 for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
 printf("%d ",a[i]);
 printf("\nnow,b[5]=\n");
 for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
 printf("%d ",b[i]);
 return 0;
}

//printf("%d %d\n",sum1 ,sum2);
//return 0;
//}
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

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//   int i=0;
//   double sum=0.0;
//   for(i=1;i<=100;i++) 
//     {
//      sum=sum+(pow(i,i+1))/i;
//     } 
//   printf("½á¹ûÊÇ£º%lf\n",sum);
//   system("pause");
//   return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//int A, B, C, D, E;
//	int score;
//	printf("input a score(0-100):");
//	scanf("%d", &score);
//	    if (score >= 90)
//			{
//			  printf("grade = A"); 
//			 }
//		 if (score >= 80)
//			{
//			  printf("grade = B");
//			 }
//		 if (score >= 70)
//		    {
//			  printf("grade = C");
//		     }		
//	     if (score >= 60)
//	        {
//		      printf("grade = D");
//	        }
//		 else
//			 {
//			   printf("grade = E");
//            }	
// return 0;
//}

//#include<stdio.h>
//int main()
//{	
//int i, j;	
//float max1=0.000000,max2=0.000000,max;
//	for(i=1.000000; 
//	i<=100; i+=2)	
//	{
//	  max1=max1 + 1.000000/i;
//	}
//	for(j=2.000000; j<=100; j+=2)
//	{	
//	  max2=max2 + 1.000000/j;
//	}	
//	max=max1-max2;
//	printf("%f",max);	
//	return 0;
//	}
//
#include<stdio.h>
int main()
{
 int a[10]={1,2,3,4,5,6,7,8,9,10};
 int b[10]={10,9,8,7,6,5,4,3,2,1};
 int i=0;
 for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
 {
 a[i]=a[i]+b[i];
 b[i]=a[i]-b[i];
 a[i]=a[i]-b[i];
 }
 printf("now,a[10]=\n");
 for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
 printf("%d ",a[i]);
 printf("\nnow,b[10]=\n");
 for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
 printf("%d ",b[i]);
 return 0;
}
