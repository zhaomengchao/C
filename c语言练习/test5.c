#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<memory.h>

二分查找
int binary_search(int arr[], int left, int right,int k)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] == k)
		{
			return mid;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return -1;
}


int main()
{
	int array[10] = { 1, 3, 5, 6, 7, 8, 9, 10, 12, 13 };

	int key = 9;
	int left = 0;
	int right = sizeof(array) / sizeof(array[0]) - 1;
	printf("%d", right);
	int ret = binary_search(array,left,right,key);

	printf("%d", ret);
	system("pause");
	return 0;
}

int main()
{
	

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