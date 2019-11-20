//查找组成一个偶数最接近的两个素数

#include<iostream>
using namespace std;

bool is_prime(int n)
{
    if(n < 2)
    {
        return false;
    }
    for(int i = 2; i < n / 2; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    while(cin >> n)
    {
        if(n % 2 != 0)
        {
            return 0;
        }
        int min = 0;
        int j,dis;//dis表示13 7 之间的差值
        int t = 0;
        
        for(int j = 2; j <= n / 2;j++)
        {
            dis = n - j - j;
            if(is_prime(j) && is_prime(n - j))
            {
                min = dis;
                t = j;
            }
        }
        cout << t << endl;
        cout << (n - t) << endl;
    }
    return 0;
}