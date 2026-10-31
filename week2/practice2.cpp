#include<iostream>
#include<cmath>   // sqrt 需要这个头文件
using namespace std;

void prime(int a);

void prime(int a)
{
    if (a <= 1)
    {
        cout << "不是素数" << endl;
        return;
    }
    // i从2到sqrt(a)
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)   // 能整除，有因子
        {
            cout << "不是素数" << endl;
            return;
        }
    }
    // 循环跑完都没找到因子
    cout << "是素数" << endl;
}

int main()
{
    int x;
    cin >> x;
    prime(x);
    return 0;
}
