//ţ���� fibs
//��������:?
����Ϊһ��������N(1 �� N �� 1,000,000)

�������:?
���һ����С�Ĳ�����ΪFibonacci����

��������:?
15

�������:?
2

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int N;//����ĳ����
    scanf("%d",&N);

    if (N <= 0)//������������
    {
        return -1;
    }

    int f0 = 0;
    int f1 = 1;
    int f;//��f������ÿһ�ε�f0��f1��ֵ
    while (N > f1)
    {
        f = f0 + f1;
        f0 = f1;
        f1 = f;
    }

    int a = f1 - N;//��f1���ڵ���Nʱ
    int b = N - f0;//��N����f0ʱ

    int c = 0;
    c = a > b ? b : a;
    printf("%d",c);
    return 0;
}
