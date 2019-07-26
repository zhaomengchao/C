#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//调整数组使奇数全部都位于偶数前面。 
void adjust(int a[], int sz)
{
	int start = 0;
	int end = sz - 1;
	while (start < end)
	{
		while (start < end && a[start] % 2 != 0)
		{
			++start;
		}
		while (start < end && a[start] % 2 != 1)
		{
			++end;
		}
		if (start < end)
		{
			int tmp = a[start];
			a[start] = a[end];
			a[end] = a[start];
		}
	}
}


int main()
{
	int i = 0;
	int arr[] = { 1, 5, 3, 4, 6, 8, 7, 2, 9, 10 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	adjust(arr, 10);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}