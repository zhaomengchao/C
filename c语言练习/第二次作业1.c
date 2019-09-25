#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>



//交换两个数的值，创建一个变量
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c;
//	c = a;
//	a = b;
//	b = c;
//	printf("%d %d", a, b);
//	system("pause");
//	return 0;
//}

//不创建变量，交换两个数的值（1.加减法）
//int main()
//{
//
//	int a = 2;
//	int b = 3;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	system("pause");
//	return 0;
//}
//（2.异或法交换）

//int main()
//{
//	int a = 10;//10的二进制表示为1010
//	int b = 5;//5的二进制为0101
//	printf("%d %d\n", a, b);
//	a = a ^ b;//a =1010异或0101为1111等于16；
//	b = a ^ b;//b =1111异或0101为1010等于10；
//	a = a ^ b;//a = 1111异或1010为0101等于5；
//	printf("%d %d", a, b);
//	system("pause");
//}

//数组找最大值
//int main()
//{
//	int arr[10] = { 5, 6, 4, 9, 7, 8, 5, 2, 1, 3 };
//	int i = 0;
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//		
//	}
//	printf("%d", max);
//	system("pause");
//}

//将三个数从大到小依次输出
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int n = 0;
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a < b)
//	{
//		n = a;
//		a = b;
//		b = n;
//	}
//	if (a < c)
//	{
//		n = a;
//		a = c;
//		c = n;
//	}
//	if (b < c)
//	{
//		n = b;
//		b = c;
//		c = n;
//	}
//	printf("%d,%d,%d", a, b, c);
//	system("pause");
//	return 0;
//}

//函数在传参时，形参相当于实参的一份临时拷贝，在进行值间的交换时，传的是地址，简单值得运算传的是值；
//void Swap(int *x, int *y)
//{
//	int t = *x;
//	*x = *y;
//	*y = t;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	//scanf("%d %d %d", &a, &b, &c);
//
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	printf("%d,%d,%d", a, b, c);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int z;
//	scanf("%d %d", &a, &b);
//	/*if (a < b)
//	{
//		z = a;
//		a = b;
//		b = z;
//	}*/
//	while (z = a % b)
//	{
//		a = b;
//		b = z;
//	}
//	printf("最大公约数为：%d\n", a);
//	system("pause");
//}




////打印菱形
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int k = 0;
//	int o = 0;
//	int p = 0;
//	int q = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n - i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 1; k <= 2 * i- 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (o = 1; o <= n-1; o++)
//	{
//		for (p = 1; p <= o; p++)
//		{
//			printf(" ");
//		}
//		for (q = 1; q <= (2 * n - 1)-2*o; q++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//	
//}


//例如：2+22+222+2222+22222 
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int k = 0;
//	int sum = 0;
//	int a = 0;
//	scanf("%d %d", &n, &k);
//	for (i = 1; i <= n; i++)
//	{
//		
//		a = a * 10 + k;
//		sum = sum + a;
//	}
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//
//}



//水仙花数
//int main()
//{
//	
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 100; i <= 999; i++)
//	{
//			n = i / 100;
//			j = i / 10 - n * 10;
//			k = i%10;
//		
//		if (i== n*n*n + j*j*j + k*k*k)
//	    {
//			printf("%d\n", i);
//	    }
//	}
//	system("pause");
//	return 0;
//}



//有序数组查找值（二分查找）
//int binary_search(int arr[],int  k, int right, int left)
//{
//	
//	while (left <= right)
//	{
//		int mid = left + right - left / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//	
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//	int left = 0;
//	int ret = binary_search(arr, k, right, left);
//	if (ret == -1)
//	{
//		printf("找不到该数字");
//	}
//	else
//	{
//		printf("%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}

//int Confirm_password(int password[], int input[])
//{
//	if (strcmp(password, input) == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	
//    char password[100] = "abc123";
//    int count = 0;
//    char input[100];
//    while (count < 3)
//	{
//        printf("请输入密码:");
//        scanf("%s", input);
//        int i = Confirm_password(password, input);
//        if (i == 1)
//		{
//            printf("密码正确!\n");
//            break;
//      }
//        else 
//		{
//            printf("密码错误!\n");
//            count++;
//       }
//    }
//    if (count == 3)
//	{
//        printf("三次输入错误，已退出程序！");
//    }
//    printf("\n");
//    system("pause");
//    return 0;
//
//}

//int main()
//{
//	int c = 0;
//	
//	while ((c = getchar()) != EOF)
//	{
//		if ((c >='a')&& (c <= 'z'))
//		{
//			putchar(c + 32);
//		}
//		else if ((c >= 'A')&& (c <= 'Z'))
//		{
//			
//			printf("%c\n", c - 32);
//		}
//		else if (c >= '0'&&c <= '9')
//		{
//			printf("是数字，不输出！");
//		}
//	}
//	system("pause");
//	return 0;
//}


  
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'A') && (ch <= 'Z'))
//		{
//			putchar(ch + 32);
//		}
//		else if ((ch >= 'a') && (ch <= 'z'))
//		{
//			printf("%c\n", ch - 32);
//		}
//		else if ((ch >= '0') && (ch <= '9'))
//		{
//			printf("数字，不输出\n");
//		}
//	}
//	system("pause");
//	return 0;
//}



