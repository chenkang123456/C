#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int iResult=0;
//	int i;
//	printf("由1加到100的结果是:");
//	for (i = 1; i < 100; i++)
//	{
//		iResult = iResult + i;
//	}
//	printf("%d\n");
//	return 0;
//}
//
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i;
//	int MAX;
//	int arr[10] = { 0 };
//	printf("请任意输入10个整数:");
//	for (i = 0; i <= 9; i++)
//	{
//		scanf("%d\n", &arr[i]);
//	}
//	MAX == arr[0];
//	for (i = 1; i <= 9; i++)
//	  {
//		  if (1 < arr[i]);
//	  }
//	{
//		MAX == arr[i];
//	}
//	printf("输出最大数\n", &arr[i]);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int b[5] = { 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i<sizeof(a) / sizeof(a[0]); i++)
//	{
//		a[i] = a[i] + b[i];
//		b[i] = a[i] - b[i];
//		a[i] = a[i] - b[i];
//	}
//	printf("now,a[5]=\n");
//	for (i = 0; i<sizeof(a) / sizeof(a[0]); i++)
//		printf("%d ", a[i]);
//	printf("\nnow,b[5]=\n");
//	for (i = 0; i<sizeof(a) / sizeof(a[0]); i++)
//		printf("%d ", b[i]);
//	return 0;
//}

//void menu()
//{
//	system("cls");
//	printf("\n\n\n\n\n");
//	printf("\t\t|---------STUDENT---------|\n");
//	printf("\t\t|\t 0.exit                   |\n");
//	printf("\t\t|\t 1.input record           |\n");
//	printf("\t\t|\t 2.search record          |\n");
//	printf("\t\t|\t 3.delete record          |\n");
//	printf("\t\t|\t 4.modify record          |\n");
//	printf("\t\t|\t 5.insert record          |\n");
//	printf("\t\t|\t 6.order                  |\n");
//	printf("\t\t|\t 7.number                 |\n");
//	printf("\t\t|------------------|\n");
//	printf("\t\t\tchoose(0-7):");
//}
//void main()
//{
//	int n;
//	menu();
//	scanf("%d", &n);
//	while (n)
//	{
//		switch (n)
//		{
//		case 1:
//			in();
//			break;
//		case 2:
//			search();
//			break;
//		case 3:
//			del();
//			break;
//		case 4:
//			modify();
//			break;
//		case 5:
//			insert();
//			break;
//		case 6:
//			order();
//			break;
//		case 7:
//			number();
//			break;
//		default:break;
//		}
//		getch();
//		menu();
//		scanf("%d", &n);
//	}
//}


//#include<string.h>
//sort(char*strings[], int n)
//{
//	char*temp;
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (strcmp(strings[i], strings[i])>0)
//			{
//				temp = strings[i];
//				strings[i] = strings[j];
//				strings[j] = temp;
//			}
//		}
//	}
//}
//main()
//{
//	int n = 12;
//	int i;
//	char**p;
//	char*month[] =
//	{
//		"January",
//		"Fabruary",
//		"March",
//		"April",
//		"May",
//		"June",
//		"July",
//		"August",
//		"September",
//		"October",
//		"November",
//		"December",
//	};
//	p = month;
//	sort(p, n);
//	printf("排序后的12月份如下:\n");
//	for (i = 0; i < n; i++)
//		printf("%d\n", month[i]);
//}
//
//
//void order(int*p, int n)
//{
//	int i, t, j;
//	for (i = 0; i <= n - 1; i++)
//		for (j = 0; j <= n - 1 - i; j++)
//			if (*(p + j) > *(p + j + 1));
//	        {
//				t = *(p + j);
//				*(p + j) = *(p + j + 1);
//				*(p + j + 1) = t;
//	        }
//			printf("排序后的数组：");
//			for (i = 0; i < n; i++)
//			{
//				if (i % 5 == 0)
//					printf("\n");
//				printf("%5d", *(p + i));
//			}
//			printf("\n");
//}
//main()
//{
//	int a[20], i, n;
//	printf("请输入数组元素的个数:\n");
//	scanf("%\n", &n);
//	printf("请输入各个元素:\n");
//	for (i = 0; i < n; i++)
//		scanf("%d", a + i);
//	order(a, n);
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + (pow(-1, i + 1)) / i;
//	}
//	printf("结果是：%lf\n", sum);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i, j;
//	float max1 = 0.000000, max2 = 0.000000, max;
//	for (i = 1.000000;
//		i <= 100; i += 2)
//	{
//		max1 = max1 + 1.000000 / i;
//	}
//	for (j = 2.000000; j <= 100; j += 2)
//	{
//		max2 = max2 + 1.000000 / j;
//	}
//	max = max1 - max2;
//	printf("%f", max);
//	return 0;
//}



//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	int i = 1;
//	int MAX;
//	int arr[10] = { 0 };
//	printf("任意输入10个整数:");
//	for (i = 0; i <= 9; i++)
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
//printf("输出最大数：%d", MAX);
//return 0;
//}

//#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#define LEN sizeof(struct student)
#define FORMAT "%-8d%-15s%-12.1lf%-12.1lf%-12.1lf%-12.1lf\n"
#define DATA stu[i].num,stu[i].name,stu[i].elec,stu[i].expe,stu[i].requ,stu[i].sum
float Felec, Fexpe, Frequ;
struct student/*定义学生成绩结构体*/
{
	int num;/*学号*/
	char name[15];/*姓名*/
	double elec;/*选修课*/
	double expe;/*实验课*/
	double requ;/*必修课*/
	double sum;/*总分*/
};
struct student stu[50];/*定义结构体数组*/
void in();/*录入学生成绩信息*/
void show();/*显示学生信息*/
void order();/*按总分排序*/
void del();/*删除学生成绩信息*/
void modify();/*修改学生成绩信息*/
void menu();/*主菜单*/
void insert();/*插入学生信息*/
void total();/*计算总人数*/
void search();/*查找学生信息*/
void main()/*主函数*/
{
	int n;
	menu();
	scanf("%d", &n);/*输入选择功能的编号*/
	while (n)
	{
		switch (n)
		{
		case 1:
			in();
			break;
		case 2:
			search();
			break;
		case 3:
			del();
			break;
		case 4:
			modify();
			break;
		case 5:
			insert();
			break;
		case 6:
			order();
			break;
		case 7:
			total();
			break;
		default:break;
		}
		getch();
		menu();/*执行完功能再次显示菜单界面*/
		scanf("%d", &n);
	}
}

void in()/*录入学生信息*/
{
	int i, m = 0;/*m是记录的条数*/
	char ch[2];
	FILE *fp;/*定义文件指针*/
	if ((fp = fopen("data", "ab+")) == NULL)/*打开指定文件*/
	{
		printf("can not open\n");
		return;
	}
	while (!feof(fp))
	{
		if (fread(&stu[m], LEN, 1, fp) == 1)
			m++;/*统计当前记录条数*/
	}
	fclose(fp);
	if (m == 0)
		printf("No record!\n");
	else
	{
		system("cls");
		show();/*调用show函数，显示原有信息*/
	}
	if ((fp = fopen("data", "wb")) == NULL)
	{
		printf("can not open\n");
		return;
	}
	for (i = 0; i<m; i++)
		fwrite(&stu[i], LEN, 1, fp);/*向指定的磁盘文件写入信息*/
	printf("please input(y/n):");
	scanf("%s", ch);
	if (strcmp(ch, "Y") == 0 || strcmp(ch, "y") == 0)
	{
		printf("please input per centum:");
		printf("\nelective:");
		scanf("%f", &Felec);
		printf("\nexperiment:");
		scanf("%f", &Fexpe);
		printf("\nrequired course:");
		scanf("%f", &Frequ);
	}
	while (strcmp(ch, "Y") == 0 || strcmp(ch, "y") == 0)/*判断是否要录入新信息*/
	{
		printf("number:");
		scanf("%d", &stu[m].num);/*输入学生学号*/
		for (i = 0; i<m; i++)
			if (stu[i].num == stu[m].num)
			{
				printf("the number is existing,press any to continue!");
				getch();
				fclose(fp);
				return;
			}
		printf("name:");
		scanf("%s", stu[m].name);/*输入学生姓名*/
		printf("elective:");
		scanf("%lf", &stu[m].elec);/*输入选修课成绩*/
		printf("experiment:");
		scanf("%lf", &stu[m].expe);/*输入实验课成绩*/
		printf("required course:");
		scanf("%lf", &stu[m].requ);/*输入必修课成绩*/
		stu[m].sum = stu[m].elec*Felec + stu[m].expe*Fexpe + stu[m].requ*Frequ;/*计算出总成绩*/
		if (fwrite(&stu[m], LEN, 1, fp) != 1)/*将新录入的信息写入指定的磁盘文件*/
		{
			printf("can not save!");
			getch();
		}
		else
		{
			printf("%s saved!\n", stu[m].name);
			m++;
		}
		printf("continue?(y/n):");/*询问是否继续*/
		scanf("%s", ch);
	}
	fclose(fp);
	printf("OK!\n");
}

void show()
{
	FILE *fp;
	int i, m = 0;
	fp = fopen("data", "ab+");
	while (!feof(fp))
	{
		if (fread(&stu[m], LEN, 1, fp) == 1)
			m++;
	}
	fclose(fp);
	printf("number  name           elective    experiment  required    sum\t\n");
	for (i = 0; i<m; i++)
	{
		printf(FORMAT, DATA);/*将信息按指定格式打印*/
	}
}

void menu()/*自定义函数实现菜单功能*/
{
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t|---------------------STUDENT-------------------|\n");
	printf("\t\t|\t 0. exit                                |\n");
	printf("\t\t|\t 1. input record                        |\n");
	printf("\t\t|\t 2. search record                       |\n");
	printf("\t\t|\t 3. delete record                       |\n");
	printf("\t\t|\t 4. modify record                       |\n");
	printf("\t\t|\t 5. insert record                       |\n");
	printf("\t\t|\t 6. order                               |\n");
	printf("\t\t|\t 7. number                              |\n");
	printf("\t\t|-----------------------------------------------|\n\n");
	printf("\t\t\tchoose(0-7):");
}

void order()/*自定义排序函数*/
{
	FILE *fp;
	struct student t;
	int i = 0, j = 0, m = 0;
	if ((fp = fopen("data", "ab+")) == NULL)
	{
		printf("can not open!\n");
		return;
	}
	while (!feof(fp))
		if (fread(&stu[m], LEN, 1, fp) == 1)
			m++;
	fclose(fp);
	if (m == 0)
	{
		printf("no record!\n");
		return;
	}
	for (i = 0; i<m - 1; i++)
		for (j = i + 1; j<m; j++)/*双重循环实现成绩比较并交换*/
			if (stu[i].sum<stu[j].sum)
			{
				t = stu[i];
				stu[i] = stu[j];
				stu[j] = t;
			}
	if ((fp = fopen("data", "wb")) == NULL)
	{
		printf("can not open\n");
		return;
	}
	for (i = 0; i<m; i++)/*将重新排好序的内容重新写入指定的磁盘文件中*/
		if (fwrite(&stu[i], LEN, 1, fp) != 1)
		{
			printf("%s can not save!\n");
			getch();
		}
	fclose(fp);
	printf("save successfully\n");
}
void del()/*自定义删除函数*/
{
	FILE *fp;
	int snum, i, j, m = 0;
	char ch[2];
	if ((fp = fopen("data", "ab+")) == NULL)
	{
		printf("can not open\n");
		return;
	}
	while (!feof(fp))
		if (fread(&stu[m], LEN, 1, fp) == 1)
			m++;
	fclose(fp);
	if (m == 0)
	{
		printf("no record!\n");
		return;
	}
	printf("please input the number:");
	scanf("%d", &snum);
	for (i = 0; i<m; i++)
		if (snum == stu[i].num)
			break;
	if (i == m)
	{
		printf("can not find");
		getchar();
		return;
	}
	printf("find the student,delete?(y/n)");
	scanf("%s", ch);
	if (strcmp(ch, "Y") == 0 || strcmp(ch, "y") == 0)/*判断是否要进行删除*/
	{
		for (j = i; j<m; j++)
			stu[j] = stu[j + 1];/*将后一个记录移到前一个记录的位置*/
		m--;/*记录的总个数减1*/
		printf("delete successfully!\n");
	}
	if ((fp = fopen("data", "wb")) == NULL)
	{
		printf("can not open\n");
		return;
	}
	for (j = 0; j<m; j++)/*将更改后的记录重新写入指定的磁盘文件中*/
		if (fwrite(&stu[j], LEN, 1, fp) != 1)
		{
			printf("can not save!\n");
			getch();
		}
	fclose(fp);

}

void search()/*自定义查找函数*/
{
	FILE *fp;
	int snum, i, m = 0;
	char ch[2];
	if ((fp = fopen("data", "ab+")) == NULL)
	{
		printf("can not open\n");
		return;
	}
	while (!feof(fp))
		if (fread(&stu[m], LEN, 1, fp) == 1)
			m++;
	fclose(fp);
	if (m == 0)
	{
		printf("no record!\n");
		return;
	}
	printf("please input the number:");
	scanf("%d", &snum);
	for (i = 0; i<m; i++)
		if (snum == stu[i].num)/*查找输入的学号是否在记录中*/
		{
			printf("find the student,show?(y/n)");
			scanf("%s", ch);
			if (strcmp(ch, "Y") == 0 || strcmp(ch, "y") == 0)
			{
				printf("number  name           elective    experiment  required    sum\t\n");
				printf(FORMAT, DATA);/*将查找出的结果按指定格式输出*/
				break;
			}
			else
				return;
		}
	if (i == m)
		printf("can not find the student!\n");/*未找到要查找的信息*/
}

void modify()/*自定义修改函数*/
{
	FILE *fp;
	int i, j, m = 0, snum;
	if ((fp = fopen("data", "ab+")) == NULL)
	{
		printf("can not open\n");
		return;
	}
	while (!feof(fp))
		if (fread(&stu[m], LEN, 1, fp) == 1)
			m++;
	if (m == 0)
	{
		printf("no record!\n");
		fclose(fp);
		return;
	}
	printf("please input the number of the student which do you want to modify!\n");
	scanf("%d", &snum);
	for (i = 0; i<m; i++)
		if (snum == stu[i].num)/*检索记录中是否有要修改的信息*/
			break;
	if (i<m)
	{
		printf("find the student!you can modify!\n");
		printf("please input per centum:");
		printf("\nelective:");
		scanf("%f", &Felec);
		printf("\nexperiment:");
		scanf("%f", &Fexpe);
		printf("\nrequired course:");
		scanf("%f", &Frequ);
		printf("name:\n");
		scanf("%s", stu[i].name);/*输入名字*/
		printf("\nelective:");
		scanf("%lf", &stu[i].elec);/*输入选修课成绩*/
		printf("\nexperiment:");
		scanf("%lf", &stu[i].expe);/*输入实验课成绩*/
		printf("\nrequired course:");
		scanf("%lf", &stu[i].requ);/*输入必修课成绩*/
		stu[i].sum = stu[i].elec*Felec + stu[i].expe*Fexpe + stu[i].requ*Frequ;
	}
	else
	{
		printf("can not find!");
		getchar();
		return;
	}
	if ((fp = fopen("data", "wb")) == NULL)
	{
		printf("can not open\n");
		return;
	}
	for (j = 0; j<m; j++)/*将新修改的信息写入指定的磁盘文件中*/
		if (fwrite(&stu[j], LEN, 1, fp) != 1)
		{
			printf("can not save!");
			getch();
		}
	fclose(fp);
}

void insert()/*自定义插入函数*/
{
	FILE *fp;
	int i, j, k, m = 0, snum;
	if ((fp = fopen("data", "ab+")) == NULL)
	{
		printf("can not open\n");
		return;
	}
	while (!feof(fp))
		if (fread(&stu[m], LEN, 1, fp) == 1)
			m++;
	if (m == 0)
	{
		printf("no record!\n");
		fclose(fp);
		return;
	}
	printf("please input position where do you want to insert!(input the number)\n");
	scanf("%d", &snum);/*输入要插入的位置*/
	for (i = 0; i<m; i++)
		if (snum == stu[i].num)
			break;
	for (j = m - 1; j>i; j--)
		stu[j + 1] = stu[j];/*从最后一条记录开始均向后移一位*/
	printf("now please input the new information.\n");
	printf("number:");
	scanf("%d", &stu[i + 1].num);
	for (k = 0; k<m; k++)
		if (stu[k].num == stu[i + 1].num&&k != i + 1)
		{
			printf("the number is existing,press any to continue!");
			getch();
			fclose(fp);
			return;
		}
	printf("please input per centum:");
	printf("\nelective:");
	scanf("%f", &Felec);
	printf("\nexperiment:");
	scanf("%f", &Fexpe);
	printf("\nrequired course:");
	scanf("%f", &Frequ);
	printf("name:\n");
	scanf("%s", stu[i + 1].name);
	printf("\nelective:");
	scanf("%lf", &stu[i + 1].elec);
	printf("\nexperiment:");
	scanf("%lf", &stu[i + 1].expe);
	printf("\nrequired course:");
	scanf("%lf", &stu[i + 1].requ);
	stu[i + 1].sum = stu[i + 1].elec*Felec + stu[i + 1].expe*Fexpe + stu[i + 1].requ*Frequ;
	if ((fp = fopen("data", "wb")) == NULL)
	{
		printf("can not open\n");
		return;
	}
	for (k = 0; k <= m; k++)
		if (fwrite(&stu[k], LEN, 1, fp) != 1)/*将修改后的记录写入磁盘文件中*/
		{
			printf("can not save!");
			getch();
		}
	fclose(fp);
}

void total()
{
	FILE *fp;
	int m = 0;
	if ((fp = fopen("data", "ab+")) == NULL)
	{
		printf("can not open\n");
		return;
	}
	while (!feof(fp))
		if (fread(&stu[m], LEN, 1, fp) == 1)
			m++;/*统计记录个数即学生个数*/
	if (m == 0)
	{
		printf("no record!\n");
		fclose(fp);
		return;
	}
	printf("the class are %d students!\n", m);/*将统计的个数输出*/
	fclose(fp);
}
