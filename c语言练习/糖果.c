//计算糖果
//输入包含 a-b,b-c,a+b,b+c
//分别求出 A,B,C同学有几个糖果
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