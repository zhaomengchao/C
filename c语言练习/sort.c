#include<stdio.h>
#include<stdlib.h>


void Print(int* a,int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

//插入排序  把要插入的值假定放在数组最后一个
//元素集合越接近有序，直接插入排序算法的时间效率越高
//时间复杂度：O(N^2)
//空间复杂度：O(1),它是一种稳定的排序算法
void InsertSort(int* a, int n)
{
	
	for (int i = 0; i < n - 1; i++)//所以比较的范围在n-1之前
	{
		int end = i;
		int temp = a[end + 1];
		while (end >= 0)
		{
			if (a[end + 1]< a[end])//判断当前位置end 与后面值之间的大小关系
			{
				a[end + 1] = a[end];
				end--;         //判断是否大于前一个元素，从当前位置减一
			}
			else
			{
				break;
			}
			a[end + 1] = temp;
		}
	}
	
}
void InsertTest()
{
	int array[] = { 3, 4, 2, 6, 5, 7, 1, 9, 8, 0 };
	int num = sizeof(array) / sizeof(int);
	InsertSort(array, num);
	Print(a, n);
}

//对直接插入排序优化
//平均时间复杂度O(N^1.3--N^2)



void  shellsort(int *a, int n) // 希尔排序=预排序(接近于顺序有序)+插入排序
{
	int gap = n;      //gap越小，排序越慢；gap越大，排序越快
	while (gap>1)
	{
		gap = gap / 3 + 1;   //加一保证最后一次的插入排序
		for (int i = 0; i < n - gap; i++)   // 该循环巧妙之处在于，多路同时进行排序
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
	Print(a, n);
}

void ShellTest()
{
	int array[] = { 3, 4, 2, 6, 5, 7, 1, 9, 8, 0 };
	int num = sizeof(array) / sizeof(int);
	shellsort(array, num);
	//ShellSort(array, num);

}



