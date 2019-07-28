#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int d = 1;
//	int e = 1;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (a*b*c*d*e == 120)//各个运动员的名次不可能一样，所以判断一下
//						{
//								if (((b == 1) + (a == 3) == 1) &&
//								((b == 2) + (e == 4) == 1) &&
//								((c == 1) + (d == 2) == 1) &&
//								((c == 5) + (d == 3) == 1) &&
//								((e == 4) + (a == 1) == 1))
//							
//									printf("a=%d,b=%d,c=%d,d=%d,e=%d", a, b, c, d, e);      
//						
//
//						}
//					}
//				}
//			}
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d < 5; d++)
//				{
//					for (e = 1; e < 5; e++)
//					{
//						if (a*b*c*d*e == 120)
//						{
//							if (((b == 2) + (a == 3) == 1) &&
//								((b == 2) + (e == 4) == 1) &&
//								((c == 1) + (d == 2) == 1) &&
//								((c == 5) + (d == 3) == 1) &&
//								((e == 4) + (a == 1) == 1))
//							{
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}


#include <stdio.h>
//int main()
//{
//	int A = 0, B = 0, C = 0, D = 0;
//	int F;//因为c和d的供词刚好对立 表示对立的
//	int i;
//	for (i = 1; i <= 4; i++)
//	{
//
//		if (i == 1)//A说的假
//		{
//			A = 1; C = 1; F = 1; D = 0;
//		}
//		if (i == 2)//B说的假
//		{
//			A = 0; C = 0; F = 1; D = 0;
//		}
//		if (i == 3)//C说的假
//		{
//			A = 0; C = 1; F = 0; D = 0;
//		}
//		if (i == 4)//D的说的假
//		{
//			A = 0; C = 1; F = 1; D = 0;
//		}
//		if (A + B + C + D + F == 1 && F == D)//只有一个人是凶手 当和为1时一个凶手出现  因为CD供词推出的都是D是不是 与上F==D是为了排除D是D不是的情况 
//			printf("A=%d B=%d C=%d D=%d\n", A, B, C, D);
//	}
//	system("pause");
//	return 0;
//}

//#define N 10
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[N][N] = { 0 };
//	for (i = 0; i < N; i++)
//	{
//		arr[i][0] = 1;
//	}
//	for (i = 2; i < N; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}



//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值是value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832

//unsigned int  reverse_bit(unsigned int value)
//
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	for (a = 0; a < 32; a++)
//	{
//		ret = ret << 1;
//		b = value & 1;
//		value = value >> 1;
//		ret = b | ret;
//	}
//	return ret;
//}
//int main()
//{
//
//	printf("%u\n", reverse_bit(25));
//	system("pause");
//	return 0;
//}

//2.不使用（a + b） / 2这种方式，求两个数的平均值。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	c = (a + b) >> 1;
//	printf("%d", c);
//	system("pause");
//	return 0;
//}
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）


//int main()
//{
//	int arr[] = { 2, 3, 4, 5, 6, 2, 4, 5, 6 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 1; i < len; i++)
//	{
//		arr[0] = arr[0] ^ arr[i];//同一个数和任何一个数异或两次，就是他本身
//	}
//	printf("出现了一次的数字为:%d\n", arr[0]);
//	system("pause");
//	return 0;
//}

//
//
//
//int my_strlen(char *str)
//{
//	int count = 0;
//	if (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse(char a[], int left, int right)
//{
//	char tmp = 0;
//	while (left < right)
//	{
//		tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//		left++;
//		right--;
//	}
//}
//char* reverse_string(char a[])
//{
//	int i = 0;
//	int left = 0;
//	int right = my_strlen(a) - 1;
//	reverse(a, left, right);
//	while (a[i] != '\0')
//	{
//		left = i;
//		while (a[i] != '\0' || a[i] != ' ')
//		{
//			i++;
//		}
//		right = i - 1;
//		reverse(a, left, right);
//		if (a[i] != '\0')
//		{
//			i++;
//		}
//	}
//	return a;
//
//}
//
//int main()
//{
//	char a[] = "student a am i";
//	reverse_string(a);
//	printf("%s",a);
//	system("pause");
//	return 0;
//}

//调整数组使奇数全部都位于偶数前面。 
//void adjust(int a[], int sz)
//{
//	int start = 0;
//	int end = sz - 1;
//	while (start < end)
//	{
//		while (start < end && a[start] % 2 != 0)
//		{
//			++start;
//		}
//		while (start < end && a[end] % 2 != 1)
//		{
//			--end;
//		}
//		if (start < end)
//		{
//			int tmp = a[start];
//			a[start] = a[end];
//			a[end] = tmp;
//		}
//	}
//}
//
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 5, 3, 4, 6, 8, 7, 2, 9, 10 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	adjust(arr, 10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
#define Row 4
//#define Col 4
//int Yang(int a[Row][Col], int val)
//{
//	int i = 0;
//	int j = Col - 1;
//	int tmp = a[i][j];
//	while (1)
//	{
//		if (tmp = val)
//		{
//			return 1;
//		}
//		else if (tmp < val && j > 0)
//		{
//			tmp = a[i++][j];
//		}
//		else if (tmp > val && j > 0)
//		{
//			tmp = a[i][j++];
//		}
//		else
//			return 0;
//	}
//}
//
//
//
//int main()
//{
//	int arr[Row][Col] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	for (i = 0; i < Row; i++)
//	{
//		for (j = 0; j < Col; j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("请输入要查找的数:\n");
//	scanf("%d", &n);
//	if (Yang(arr, n))
//	{
//		printf("n = %d存在:\n",n);
//	}
//	else
//	{
//		printf("n = %d不存在:\n", n);
//	}
//	system("pause");
//	return 0;
//}