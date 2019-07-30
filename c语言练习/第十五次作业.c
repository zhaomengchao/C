#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
ABCD���������ַ��õ�CDAB
void left_move(char * str)
{
	char* str1 = str;
	char start = *str;
	while (*(str1 + 1))
	{
		*str1 = *(str1 + 1);
		str1++;
	}
	*str1 = start;
}


//int main()
//{
//	char arr[] = "ABCD";
//	left_move(arr);
//	printf("%s", arr);
//	system("pause");
//	return 0;
//}



//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
AABCD����һ���ַ��õ�ABCDA
AABCD���������ַ��õ�BCDAA

AABCD����һ���ַ��õ�DAABC


void reverse(char * start, char *end)
{
	char temp = *start;
	*start = *end;
	*end = temp;
	start++;
	end--;
}
void left_move(char * str, int k)
{
	int len = strlen(str);
	reverse(str, str + k - 1);
	reverse(str + k, str + len - 1);
	reverse(str, str + len - 1);
}
//int main()
//{
//	char arr[] = "ABCDE";
//	left_move(arr, 1);
//	printf("%s", arr);
//	system("pause");
//	return 0;
//}


void left_move(char str[], int size, int n)
{
	char tmp = { 0 };
	for (int i = 0; i < n; ++i)
	{
		tmp = str[0];//����Ҫ�������ַ�������,�´�ѭ���õڶ����ʼ���ַ�
		for (int j = 0; j < size; ++j)//��һλ����ǰһλ
		{
			str[j] = str[j + 1];
		}
		str[size] = tmp;//�Ѹ���ת���ַ�����ĩβ
	}
}

int  is_left_move(char str1[], char str2[], int size, int n)
{
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	if (strcmp(str1, str2) == 0)
	{
		return 1;
	}
	else
	{
		for (n = 1; n < size; ++n)
		{
			left_move(str1, size, 1);//ÿ����תһλȥ�Ƚ�
			if (strcmp(str1, str2) == 0)
			{
				return 1;
			}
		}
		return 0;
	}
}

//int main()
//{
//	char str1[] = "AABCDA";
//	char str2[] = "BCDAAA";
//	int size = strlen(str1) - 1;
//	int n = 0;
//	int a = is_left_move(str1, str2, size, n);
//	if (a == 1)
//	{
//		printf("str2����str1��ת�õ���");
//	}
//	else if (a == 0)
//	{
//		printf("str2������str1��ת�õ���");
//	}
//	system("pause");
//	return 0;
//}


