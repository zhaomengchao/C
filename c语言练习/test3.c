#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<memory.h>



struct s1
{
	char c1;
	int i;
	//int k;
	
	char c2;
	//float f;
};
struct s2
{
	char c1;
	int i;
	double c2;
};

struct s3
{
	char c1;
	char c2;
	int i;
	long long l;
	short s;
};


int main()
{
	//struct s1 s;
	printf("%d\n", sizeof(struct s1));
	printf("%d\n", sizeof(struct s2));
	printf("%d\n", sizeof(struct s3));

	system("pause");
	return 0;
}


union Un 
{
	char c;
	int i;
};


union Un1 
{ 
	char c[11];//五个字节，+3 = 8个字节
	int i; 
}; 
union Un2 
{ 
	short c[7];//七个字节，2*7 = 14 个字节，+ 2 = 16个字节
	int i; 
}; 
//下面输出的结果是什么？ 


//联合变量的定义
int main()
{
	//union Un un;
	//计算连个变量的大小
	//printf("%d\n", sizeof(un));


	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));
	system("pause");
	return 0;
}


