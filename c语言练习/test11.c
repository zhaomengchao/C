//求最小公倍数
#include<stdio.h>
#include<stdlib.h>


int main()
{
    int a,b;
    int max = 0;
    scanf("%d %d",&a,&b);
    if(a > b)
    {
       max = a; 
    }
    else
    {
        max = b;
    }
    while(1)
    {
        if(max % a == 0 && max % b == 0)
        {
            printf("%d",max);
            break;
        }
        max++;
    }
    return 0;
}
