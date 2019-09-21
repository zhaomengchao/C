#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<memory.h>



//
//struct s1
//{
//	char c1;
//	int i;
//	//int k;
//	
//	char c2;
//	//float f;
//};
//struct s2
//{
//	char c1;
//	int i;
//	double c2;
//};
//
//struct s3
//{
//	char c1;
//	char c2;
//	int i;
//	long long l;
//	short s;
//};
//
//
//int main()
//{
//	//struct s1 s;
//	printf("%d\n", sizeof(struct s1));
//	printf("%d\n", sizeof(struct s2));
//	printf("%d\n", sizeof(struct s3));
//
//	system("pause");
//	return 0;
//}


//union Un 
//{
//	char c;
//	int i;
//};
//
//
//union Un1 
//{ 
//	char c[11];//五个字节，+3 = 8个字节
//	int i; 
//}; 
//union Un2 
//{ 
//	short c[7];//七个字节，2*7 = 14 个字节，+ 2 = 16个字节
//	int i; 
//}; 
////下面输出的结果是什么？ 
//
//
////联合变量的定义
//int main()
//{
//	//union Un un;
//	//计算连个变量的大小
//	//printf("%d\n", sizeof(un));
//
//
//	printf("%d\n", sizeof(union Un1));
//	printf("%d\n", sizeof(union Un2));
//	system("pause");
//	return 0;
//}


//判断大小端

//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端机");
//	}
//	else
//	{
//		printf("大端机");
//	}
//	
//
//
//  /* const char*str1 = "abcdef"; 
//   const char*str2 = "bbb";
//
//   printf("%u\n", strlen(str1));
//   printf("%u\n", strlen(str2));
//   printf("%u\n", strlen(str2) - strlen(str1));
//
//   if((int)strlen(str2)-(int)strlen(str1)>0)
//   {        
//	   printf("str2>str1\n");    
//   }     
//   else
//   {       
//	   printf("srt1>str2\n");
//   }  */
//   system("pause");
//   return 0; 
//}


////位运算
//int main()
//{
//	int n = 10;
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	printf("%d", count);
//
//	system("pause");
//	return 0;
//}

//二分查找
//int binary_search(int arr[], int left, int right,int k)
//{
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] == k)
//		{
//			return mid;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//	}
//	return -1;
//}
//
//
//int main()
//{
//	int array[10] = { 1, 3, 5, 6, 7, 8, 9, 10, 12, 13 };
//
//	int key = 9;
//	int left = 0;
//	int right = sizeof(array) / sizeof(array[0]) - 1;
//	printf("%d", right);
//	int ret = binary_search(array,left,right,key);
//
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}

int main()
{
	/*int s = 0;
	int n;
	for (n = 0; n < 4; n++)
	{
		switch (n)
		{
		default:s += 4;
		case 1: s += 1;
		case 2:s += 2;
		case 3:s += 3;
		}
	}
	printf("%d\n", s);*/

	int arr[10] = { 2, 4, 6, 5, 3, 1, 7, 0, 8, 9 };
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10 - i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
	system("pause");
	return 0;
}