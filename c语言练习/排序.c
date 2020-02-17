#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
	int ret = *a;
	*a = *b;
	*b = ret;
}

void insertSort(int *a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (a[end] > a[end + 1])
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
			a[end + 1] = tmp;
		}
	}
}




void BubbleSort(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(&a[j], &a[j + 1]);
			}
		}
	}
}

int main()
{
	int a[] = { 1, 3, 5, 2, 9, 5, 6, 7, 8, 0, 4, 11, 35 };
	int size = sizeof(a) / sizeof(int);
	insertSort(a, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}








