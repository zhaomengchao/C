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