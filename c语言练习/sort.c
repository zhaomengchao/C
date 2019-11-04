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

//��������  ��Ҫ�����ֵ�ٶ������������һ��
//Ԫ�ؼ���Խ�ӽ�����ֱ�Ӳ��������㷨��ʱ��Ч��Խ��
//ʱ�临�Ӷȣ�O(N^2)
//�ռ临�Ӷȣ�O(1),����һ���ȶ��������㷨
void InsertSort(int* a, int n)
{
	
	for (int i = 0; i < n - 1; i++)//���ԱȽϵķ�Χ��n-1֮ǰ
	{
		int end = i;
		int temp = a[end + 1];
		while (end >= 0)
		{
			if (a[end + 1]< a[end])//�жϵ�ǰλ��end �����ֵ֮��Ĵ�С��ϵ
			{
				a[end + 1] = a[end];
				end--;         //�ж��Ƿ����ǰһ��Ԫ�أ��ӵ�ǰλ�ü�һ
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

//��ֱ�Ӳ��������Ż�
//ƽ��ʱ�临�Ӷ�O(N^1.3--N^2)



void  shellsort(int *a, int n) // ϣ������=Ԥ����(�ӽ���˳������)+��������
{
	int gap = n;      //gapԽС������Խ����gapԽ������Խ��
	while (gap>1)
	{
		gap = gap / 3 + 1;   //��һ��֤���һ�εĲ�������
		for (int i = 0; i < n - gap; i++)   // ��ѭ������֮�����ڣ���·ͬʱ��������
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



