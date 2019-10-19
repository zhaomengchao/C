#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<memory.h>



判断大小端

int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
	{
		printf("小端机");
	}
	else
	{
		printf("大端机");
	}
	


   system("pause");
   return 0; 
}


//位运算
int main()
{
	int n = 10;
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}
	printf("%d", count);

	system("pause");
	return 0;
}

