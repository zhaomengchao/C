#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 
#include<stdlib.h>


//打印乘法表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d\t",i,j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//判断素数
//int main()
//{
//	int n = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i = i++)
//	{
//		for (n = 2; n <= i - 1; n++)
//		{
//			if (i%n == 0)
//				break;
//		}
//		if (n > i - 1)
//			printf("%d ", i);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}


//判断闰年
//int main()
//{
//	int count = 0;
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0)&&(year % 100 != 0))||(year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//		printf("\ncount=%d\n", count);
//	}
//	system("pause");
//	return 0;
//}