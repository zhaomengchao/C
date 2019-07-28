#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


Ä£ÄâÊµÏÖstrcat
char* my_strcat(char* dst, const char* soc)
{
	assert(dst && soc);
	char* ret = dst;

	while (*dst++);
	dst--;
	while (*dst++ = *soc++);
	return ret;
}

char* my_strcat(char* dst, const char* soc)
{
	assert(dst && soc);
	char* ret = dst;

	size_t count = 0;
	while (dst[count])
	{
		count++;
	}
	dst += count;
	while (*dst++ = *soc++);
	return ret;
}
int main()
{
	char dst[10] = "hello";
	my_strcat(dst, " world");
	printf("%s ", dst);
	system("pause");
	return 0;
}


void* my_memmove(void* dst, const void* src, size_t size)
{
	assert(dst && src);
	char* ch_dst = dst;
	const char* ch_src = src;
	if (ch_src < ch_dst && ch_dst < ch_src + size)
	{
		for (size_t i = size -1 ; i < size; i--)
		{
			ch_dst[i] = ch_src[i];
		}
	}
	else
	{
		for (size_t i = 0; i < size; i++)
		{
			ch_dst[i] = ch_src[i];
		}
	}
	return dst;
}
int main()
{
	char a1[] = "abcdef";
	my_memmove(a1 + 3, a1, 3);
	printf("%s ",a1);
	system("pause");
	return 0;
}