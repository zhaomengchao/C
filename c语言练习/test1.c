#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//非递归求第N个斐波那契数列的值
int fb(int n)
{
	int f1 = 1;
	int f2 = 1;
	int f3 = 1;


	for (int i = 3; i <= n; i++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	return f3;
}

//int main()
//{
//	int num = 4;
//	int sum = fb(num);
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}

//写一个函数，求unsigned int型变量x在内存中二进制1的个数


int number_1(int n)
{
	int count = 0;
	while (n)
	{
		count++;
		n = (n-1) & n;
	}
	return count;
}


int number_2(int n)
{
	int count = 0;
	while (n)
	{
		if ((n & 1) == 1)
		{
			count++;
		}
		n = n >> 1;//每次右移一位
	}
	return count;
}
//int main()
//{
//	int i = 4;
//	int ct = number_2(i);
//	printf("%d", ct);
//	system("pause");
//	return 0;
//}



