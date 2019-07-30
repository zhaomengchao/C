#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
ABCD左旋两个字符得到CDAB
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



//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
AABCD左旋一个字符得到ABCDA
AABCD左旋两个字符得到BCDAA

AABCD右旋一个字符得到DAABC


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
		tmp = str[0];//把需要左旋的字符存起来,下次循环拿第二个最开始的字符
		for (int j = 0; j < size; ++j)//后一位补到前一位
		{
			str[j] = str[j + 1];
		}
		str[size] = tmp;//把刚旋转的字符放在末尾
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
			left_move(str1, size, 1);//每次旋转一位去比较
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
//		printf("str2是由str1旋转得到的");
//	}
//	else if (a == 0)
//	{
//		printf("str2不是由str1旋转得到的");
//	}
//	system("pause");
//	return 0;
//}


