#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int d = 1;
//	int e = 1;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (a*b*c*d*e == 120)//�����˶�Ա�����β�����һ���������ж�һ��
//						{
//								if (((b == 1) + (a == 3) == 1) &&
//								((b == 2) + (e == 4) == 1) &&
//								((c == 1) + (d == 2) == 1) &&
//								((c == 5) + (d == 3) == 1) &&
//								((e == 4) + (a == 1) == 1))
//							
//									printf("a=%d,b=%d,c=%d,d=%d,e=%d", a, b, c, d, e);      
//						
//
//						}
//					}
//				}
//			}
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d < 5; d++)
//				{
//					for (e = 1; e < 5; e++)
//					{
//						if (a*b*c*d*e == 120)
//						{
//							if (((b == 2) + (a == 3) == 1) &&
//								((b == 2) + (e == 4) == 1) &&
//								((c == 1) + (d == 2) == 1) &&
//								((c == 5) + (d == 3) == 1) &&
//								((e == 4) + (a == 1) == 1))
//							{
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}


#include <stdio.h>
//int main()
//{
//	int A = 0, B = 0, C = 0, D = 0;
//	int F;//��Ϊc��d�Ĺ��ʸպö��� ��ʾ������
//	int i;
//	for (i = 1; i <= 4; i++)
//	{
//
//		if (i == 1)//A˵�ļ�
//		{
//			A = 1; C = 1; F = 1; D = 0;
//		}
//		if (i == 2)//B˵�ļ�
//		{
//			A = 0; C = 0; F = 1; D = 0;
//		}
//		if (i == 3)//C˵�ļ�
//		{
//			A = 0; C = 1; F = 0; D = 0;
//		}
//		if (i == 4)//D��˵�ļ�
//		{
//			A = 0; C = 1; F = 1; D = 0;
//		}
//		if (A + B + C + D + F == 1 && F == D)//ֻ��һ���������� ����Ϊ1ʱһ�����ֳ���  ��ΪCD�����Ƴ��Ķ���D�ǲ��� ����F==D��Ϊ���ų�D��D���ǵ���� 
//			printf("A=%d B=%d C=%d D=%d\n", A, B, C, D);
//	}
//	system("pause");
//	return 0;
//}

//#define N 10
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[N][N] = { 0 };
//	for (i = 0; i < N; i++)
//	{
//		arr[i][0] = 1;
//	}
//	for (i = 2; i < N; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}



//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832

//unsigned int  reverse_bit(unsigned int value)
//
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	for (a = 0; a < 32; a++)
//	{
//		ret = ret << 1;
//		b = value & 1;
//		value = value >> 1;
//		ret = b | ret;
//	}
//	return ret;
//}
//int main()
//{
//
//	printf("%u\n", reverse_bit(25));
//	system("pause");
//	return 0;
//}

//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	c = (a + b) >> 1;
//	printf("%d", c);
//	system("pause");
//	return 0;
//}
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩


//int main()
//{
//	int arr[] = { 2, 3, 4, 5, 6, 2, 4, 5, 6 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 1; i < len; i++)
//	{
//		arr[0] = arr[0] ^ arr[i];//ͬһ�������κ�һ����������Σ�����������
//	}
//	printf("������һ�ε�����Ϊ:%d\n", arr[0]);
//	system("pause");
//	return 0;
//}

//
//
//
//int my_strlen(char *str)
//{
//	int count = 0;
//	if (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse(char a[], int left, int right)
//{
//	char tmp = 0;
//	while (left < right)
//	{
//		tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//		left++;
//		right--;
//	}
//}
//char* reverse_string(char a[])
//{
//	int i = 0;
//	int left = 0;
//	int right = my_strlen(a) - 1;
//	reverse(a, left, right);
//	while (a[i] != '\0')
//	{
//		left = i;
//		while (a[i] != '\0' || a[i] != ' ')
//		{
//			i++;
//		}
//		right = i - 1;
//		reverse(a, left, right);
//		if (a[i] != '\0')
//		{
//			i++;
//		}
//	}
//	return a;
//
//}
//
//int main()
//{
//	char a[] = "student a am i";
//	reverse_string(a);
//	printf("%s",a);
//	system("pause");
//	return 0;
//}

//��������ʹ����ȫ����λ��ż��ǰ�档 
//void adjust(int a[], int sz)
//{
//	int start = 0;
//	int end = sz - 1;
//	while (start < end)
//	{
//		while (start < end && a[start] % 2 != 0)
//		{
//			++start;
//		}
//		while (start < end && a[end] % 2 != 1)
//		{
//			--end;
//		}
//		if (start < end)
//		{
//			int tmp = a[start];
//			a[start] = a[end];
//			a[end] = tmp;
//		}
//	}
//}
//
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 5, 3, 4, 6, 8, 7, 2, 9, 10 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	adjust(arr, 10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
#define Row 4
//#define Col 4
//int Yang(int a[Row][Col], int val)
//{
//	int i = 0;
//	int j = Col - 1;
//	int tmp = a[i][j];
//	while (1)
//	{
//		if (tmp = val)
//		{
//			return 1;
//		}
//		else if (tmp < val && j > 0)
//		{
//			tmp = a[i++][j];
//		}
//		else if (tmp > val && j > 0)
//		{
//			tmp = a[i][j++];
//		}
//		else
//			return 0;
//	}
//}
//
//
//
//int main()
//{
//	int arr[Row][Col] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	for (i = 0; i < Row; i++)
//	{
//		for (j = 0; j < Col; j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("������Ҫ���ҵ���:\n");
//	scanf("%d", &n);
//	if (Yang(arr, n))
//	{
//		printf("n = %d����:\n",n);
//	}
//	else
//	{
//		printf("n = %d������:\n", n);
//	}
//	system("pause");
//	return 0;
//}