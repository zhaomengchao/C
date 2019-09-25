#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>






//函数实现两个数的交换
//int swap(int *p, int *q)
//{
//	int tmp = *p;
//	*p = *q;
//	*q = tmp;
//	printf("%d %d\n", *p, *q);
//}
//
//int main()
//{
//	int a = 7;
//	int b = 9;
//	printf("%d %d\n", a, b);
//	swap(&a, &b);
//	system("pause");
//	return 0;
//
//}



//函数判断闰年
//int is_leap_year(int year)
//{
//	if ((year % 4 == 0) || (year % 100 != 0) && (year % 400 == 0))
//	{
//		return year;
//	}
//	else
//	{
//		return -1;
//	}
//}
//		
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int ret = is_leap_year(year);
//	if (ret == -1)
//	{
//		printf("%d不是闰年！！")；
//	}
//	else
//	{
//		printf("%d是闰年\n", year);
//	}
//	system("pause");
//	return 0;
//}

//
//int is_prime(int j)
//{
//	int i = 0;
//	for (i = 2; i <= j; i++)
//	{
//		if (j % i == 0)
//		{
//			return 0;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	
//}
//
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	int ret = is_prime(i);
//	if (ret == 1)
//	{
//		printf("是素数\n");
//	}
//	else
//	{
//		printf("不是素数\n");
//	}
//	system("pause");
//	return 0;
//}
//void print(int i, int j, int n)
//{
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	print(i, j, n);
//	system("pause");
//	return 0;
//}
//
//int init(int arr[], int sz)
//{
//	int i = 0;
//	printf("初始化数组:\n");
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//}
//void reverse(int arr[], int len)
//{
//	int i = 0;
//	printf("逆置数组:\n");
//	for (i = len - 1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void empty(int arr[], int len)
//{
//	int i = 0;
//	printf("清空数组:\n");
//	for (i = 0; i<len; i++)
//	{
//		arr[i] = 0;
//		printf("%d ", arr[i]);
//	}
//}
//void Test()
//{
//	int arr[5];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr, sz);
//	printf("\n");
//	reverse(arr, sz);
//	printf("\n");
//	empty(arr, sz);
//	printf("\n");
//}
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}


//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return fib(n - 1) + fib(n - 2);
//}

//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		return c;
//	}
//	
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d ", ret);
//	system("pause");
//	return 0;
//}

//int strlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + strlen(str+1);
//}

//
//int main()
//{
//	int ret = strlen("abc");
//	printf("%d", ret);
//	system("pause");
//	return 0;
////}
//
//#include<stdio.h>
//int mystrlen(char* string)
//{
//	int count = 0;
//	while (*string != '\0')
//	{
//		count++;
//		string++;
//	}
//	return count;
//}
//int main()
//{
//	char string[] = "abc";
//	int ret = mystrlen(string);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
//int fac(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n*fac(n + 1);
//}
//int fac(int n)
//{
//	int i = 0;
//	int s = 1;
//	for (i = 1; i <= n; i++)
//	{
//		s = s*i;
//	}
//	return s;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac(n);
//	printf("%d", ret);
//	system("pause"); 
//	return 0;
//}


//void print(int n)
//{
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
//
//int main()
//{
//
//	int num = 1234;
//	print(num);
//	system("pause");
//	return 0;
//}


//int print(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k == 1)
//		return n;
//	else
//		return n * print(n, k - 1);
//}
//int main()
//{
//	int n = 3;
//	int k = 2;
//	int ret = 0;
//	
//	ret = print(n, k);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}

//
//int DigitSum(int n)
//{
//	if (n <= 10)
//	{
//		return 1;
//	}
//	else
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//}
//
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	scanf("%d", &n);
//	ret = DigitSum(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
void reverse_string(char *str)
{
	if (*(++str) != '\0')
	{
		reverse_string(str);
	}
	printf("%c", *(str - 1));
}

int main()
{
	char* str = "abcde";
	reverse_string(str);
	printf("\n");
	system("pause");
	return 0;
}



//void reverse_string(char *string)
//{
//	if ('\0' != *(++string))
//		reverse_string(string);
//	printf("%c", *(string - 1));
//}
//
//int main()
//{
//	char *a = "abcde";
//	reverse_string(a);
//	printf("\n");
//	system("pause");
//	return 0;
//}
//
