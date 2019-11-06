//组队竞赛
//三个队员水平值分别是3，3，3队伍水平值是3
//三个队员水平值分别是3，2，3队伍水平值是2
//三个队员水平值分别是1，5，2队伍水平值是2


//1 2 5 5 5 8水平值最大为10，没有比10更大的方案
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;//代表n个队伍
    while(cin >> n)
    {
        int *array = new int[3*n];//每个队伍三个人
        for(int i = 0; i < 3*n ;++i)
        {
            cin >> array[i];
        }
        sort(array,array + 3*n);
        int j = 1;
        long sum = 0;
        while(j <= n)
        {
            sum += array[3*n - j*2];//每次从后往前取中间数
            j++;
        }
        cout << sum << endl;
    }
    
    return 0;
}