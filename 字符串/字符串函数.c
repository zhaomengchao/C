#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>


char* my_strstr(const char* dst, const char* soc)
{
	assert(dst && soc);
	while (*dst)
	{
		char* dst1 = dst;
		char* soc1 = soc;
		while (*dst1 == *soc1 && *soc)
		{
			dst1++;
			soc1++;
		}
		if (*soc1 == '\0')
			return dst;
		else
			dst++;
	}
	return NULL;
}
int main()
{
	char* str1 = "abcdef";
	char* str2 = "abcd";
	my_strstr(str1, str2);
	if (my_strstr(str1, str2) == NULL)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	system("pause");
	return 0;
}

int my_strcmp(const char* dst, const char* soc)
{
	assert(dst && soc);
	while (*dst && *soc)
	{
		if (*dst < *soc)
		{
			return -1;
		}
		else if (*dst > *soc)
		{
			return 1;
		}
		else
		{
			*dst++;
			*soc++;
		}
	}
	if (*dst != '\0')
	{
		return 1;
	}
	else if (*soc != '\0')
	{
		return -1;
	}
	else
	{
		return 0;
	}


}
int main()
{
	char *str1 = "abcd";
	char *str2 = "abdd";
	int ret = my_strcmp(str1, str2);
	printf("%d", ret);
	system("pause");
	return 0;
}

void* my_memcpy(void* dst, void* src, size_t size)
{
	assert(dst && src);
	char* dst1 = (char*)dst;
	char* src1 = (const char*)src;
	for (size_t i = 0; i < size; i++)
	{
		dst1[i] = src1[i];
	}
	return dst;
}




void* my_memmove(void* dst, const void* soc, size_t size)
{
	assert(dst && soc);
	char* dst1 = (char*)dst;
	const char* soc1 = (char*)soc;
	if (soc1 < dst1 && dst1 < soc1 + size)
	{
		for (size_t i = 0; i < size; i--)
		{
			dst1[i] = soc1[i];
		}
	}
	else
	{
		for (size_t i = 0; i < size; i++)
		{
			dst1[i] = soc1[i];
		}
	}
	return dst;
}

int main()
{
	int i = 0;
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 0 };
	int arr3[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//my_memcpy(arr2, arr1, sizeof(arr1));
	my_memmove(arr3 + 5, arr3 + 4, 3 * sizeof(int));
	/*for (i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}*/
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr3[i]);
	}
	system("pause");
	return 0;
}



char* my_strncpy(char* dst, const char* src,size_t size)
{
	assert(dst && src);
	char *ret = dst;
	while (size--)
	{
		*dst++ = *src++;
	}
	
	*dst = '\0';
	return ret;
}
int main()
{
	char arr[] = "abcdef";
	char a1[20];
	my_strncpy(a1, arr, 5);
	printf("%s", a1);
	system("pause");
	return 0;
}



char* my_strncat(char* dst, const char* src, size_t size)
{
	assert(dst && src);
	char* dst1 = dst;
	while (*dst)
		dst++;
	while (size-- && *src)
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return dst1;
}

int main()
{
	char arr[] = "abcdef";
	char a1[20] ="123456";
	my_strncat(a1, arr, 4);
	printf("%s", a1);
	system("pause");
	return 0;
}


int my_strcmp(const char* dst, const char* soc,size_t size)
{
	assert(dst && soc);
	while (*dst && *soc && (size--))
	{
		if (*dst < *soc)
		{
			return -1;
		}
		else if (*dst > *soc)
		{
			return 1;
		}
		else
		{
			*dst++;
			*soc++;
		}
	}
	if (*dst != '\0')
	{
		return 1;
	}
	else if (*soc != '\0')
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	char *str1 = "abcd";
	char *str2 = "abdd";
	int ret = my_strcmp(str1, str2, 2);
	printf("%d", ret);
	system("pause");
	return 0;
}