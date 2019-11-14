//牛客网 fibs
//输入描述:?
输入为一个正整数N(1 ≤ N ≤ 1,000,000)

输出描述:?
输出一个最小的步数变为Fibonacci数”

输入例子:?
15

输出例子:?
2

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int N;//输入某个数
    scanf("%d",&N);

    if (N <= 0)//负数不做处理
    {
        return -1;
    }

    int f0 = 0;
    int f1 = 1;
    int f;//用f来保存每一次的f0和f1的值
    while (N > f1)
    {
        f = f0 + f1;
        f0 = f1;
        f1 = f;
    }

    int a = f1 - N;//当f1大于等于N时
    int b = N - f0;//当N大于f0时

    int c = 0;
    c = a > b ? b : a;
    printf("%d",c);
    return 0;
}
