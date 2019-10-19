#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<memory.h>
模拟实现strlen

int my_strlen(char* dst)
{
	int count = 0;
	while (*dst)
	{
		count++;
		dst++;
	}
	return count;
}


不创建变量实现
int my_strlen1(char* dst)
{
	if (*dst == '\0')
	{
		return 0;
	}
	
	return 1 + my_strlen1(dst + 1);
}


模拟实现strcpy

char* my_strcpy(char* dst, const char* src)
{
	assert(dst && src);
	char *ret = dst;
	while (*dst++ = *src++);
	return ret;//不能返回dst，已经改变
}

模拟实现strcat
char* my_strcat(char* dst, const char* src)
{
	assert(dst && src);
	char* ret = dst;
	while (*dst)
	{
		dst++;
	}

	while (*dst++ = *src++);
	

	return ret;
}

模拟实现strcmp(比较字符串的大小）
int my_strcmp(const char* dst, const char* src)
{
	assert(dst && src);

	while (*dst && *src)
	{
		if (*(unsigned char*)dst < *(unsigned char*)src)
		{
			return -1;
		}
		else if (*(unsigned char*)dst > *(unsigned char*)src)
		{
			return 1;
		}
		else
		{
			dst++;
			src++;
		}
	
	}
	if (*dst != '\0')
	{
		return 1;
	}
	else if (*src != '\0')
	{
		return -1;
	}
	else
		return 0;
}

模拟实现strstr
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	
	while (*str1)
	{
		const char* p = str1;
		const char* q = str2;

		while (*p == *q && *q)
		{
			p++;
			q++;
		}
		if (*q == '\0')
		{
			return str1;
		}
		else
		{
			str1++;
		}
	}
	return NULL;
}


void* my_mymcpy(void* dst, const void* src, size_t num)
{
	assert(dst && src);
	char* _dst =(char*) dst;
	const char* _src = (const char*)src;

	for (size_t i = 0; i < num; i++)
	{
		_dst[i] = _src[i];
	}
	return dst;
}


int main()
{
	char a[] = "qqq";
	char arr[] = "hello";
	/*int ret = my_strlen1(arr);
	printf("%d ", ret);*/


	/*char* ret = my_strcpy(arr, a);
	printf("%s", ret);*/


	/*char* ret = my_strcat(a, "www");
	printf("%s", ret);*/

	/*int ret = my_strcmp("q", "q");
	printf("%d", ret);*/


	/*char str[] = "This is a simple string"; 
	char * pch;
	pch = strstr(str, "simple");
	puts(str);*/


	/*const char* ret = my_strstr("This is a simple string", "simple");
	puts(ret);*/

	
	char* ret = my_mymcpy(a, arr, 3);
	printf("%s", ret);

	system("pause");
	return 0;
}

int main() {
	char str1[20];  char str2[20];  strcpy(str1, "To be ");  strcpy(str2, "or not to be");  strncat(str1, str2, 6);  puts(str1);  
	system("pause"); return 0;
}


