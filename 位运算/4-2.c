#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int count_one_bits(int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
			count++;
		n = n / 2;
	}
	return count;
}

int main()
{
	int num = 0;
	int ret = 0;
	scanf("%d", &num);
	ret = count_one_bits(num);
	printf("二进制中一的个数=%d\n", ret);
	system("pause");
	return 0;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int count = 0;
	while (num)
	{
		if (num % 2 == 1)
			count++;
		num = num / 2;
	}
	printf("二进制中一的个数=%d\n", count);
	system("pause");
	return 0;
}


void print_num(unsigned value)
 {
   int count = 0;//计算二进制 位数
    int a[32] = { 0 };
    int i = 0;
    while (value)
	{
		a[i++] = value % 2;
         value /= 2;
         count++;

	}
	printf("奇数序列\n");
     for (i = count; i >= 0; i -= 2) 
	{
	         printf("%d ", a[i]);

	}
     printf("\n");
     printf("偶数序列\n");
     for (i = count - 1; i >= 0; i -= 2) 
	{
         printf("%d ", a[i]);
	
	}
     printf("\n");
}
int main()
{
	printf("获取一个数二进制序列中所有的偶数位和奇数位,分别输出二进制序列\n");
	int value = 11;//01011
	print_num(value);
	system("pause");
	return 0;
}

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);

}


int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	system("pause");
	return 0;
}


int main()
{
	int m = 0;
	int n = 0;
	int count = 0;
	int q = 0;
	printf("请输入两个数：");
	scanf("%d%d", &m, &n);
	q = m^n;
	while (q)
	{
		q = q&(q - 1);
		count++;
	}
	printf("count = %d", count);
	system("pause");
	return 0;
}