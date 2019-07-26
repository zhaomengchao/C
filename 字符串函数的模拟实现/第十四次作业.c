#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//Ä£ÄâÊµÏÖstrcpy
char* my_strcpy(char* dst, const char* soc)
{
	assert(dst && soc);
	char * ret = dst;
	while (*soc != '\0')
	{
		*dst = *soc;
		dst++;
		soc++;
	}
	*dst = *soc;
	return ret;
}
char* my_strcpy(char* dst, const char* soc)
{
	assert(dst && soc);
	char * ret = dst;
	while (*dst++ = *soc++);
	return ret;
}

int main()
{
	char dst[10];
	my_strcpy(dst, "hello");
	printf("%s ", dst);
	system("pause");
	return 0;
}




