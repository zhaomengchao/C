//��Ӿ���
//������Աˮƽֵ�ֱ���3��3��3����ˮƽֵ��3
//������Աˮƽֵ�ֱ���3��2��3����ˮƽֵ��2
//������Աˮƽֵ�ֱ���1��5��2����ˮƽֵ��2


//1 2 5 5 5 8ˮƽֵ���Ϊ10��û�б�10����ķ���
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;//����n������
    while(cin >> n)
    {
        int *array = new int[3*n];//ÿ������������
        for(int i = 0; i < 3*n ;++i)
        {
            cin >> array[i];
        }
        sort(array,array + 3*n);
        int j = 1;
        long sum = 0;
        while(j <= n)
        {
            sum += array[3*n - j*2];//ÿ�δӺ���ǰȡ�м���
            j++;
        }
        cout << sum << endl;
    }
    
    return 0;
}