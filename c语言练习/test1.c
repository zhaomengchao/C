#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//�ǵݹ����N��쳲��������е�ֵ
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

//дһ����������unsigned int�ͱ���x���ڴ��ж�����1�ĸ���


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
		n = n >> 1;//ÿ������һλ
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



