//�����ǹ�
//������� a-b,b-c,a+b,b+c
//�ֱ���� A,B,Cͬѧ�м����ǹ�
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    
    int A = 0;
    int B = 0;
    int C = 0;
    
    A = (a + c)/2;
    B = (b + d)/2;
    C = (d - b)/2;
    
    if(A - B == a && B - C == b && A + B == c && B + C == d)
    {
        printf("%d %d %d",A,B,C);
    }
    else
    {
        printf("No");
    }
    return 0;
}