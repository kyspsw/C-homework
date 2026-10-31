#include <iostream>
using namespace std;

// 递归
int fib(int n)
{
    // 终止条件
    if (n == 1 || n == 2)
    {
        return 1;
    }
    // 递归调用
    return fib(n-1) + fib(n-2);
}

int main()
{
    int k;
    cout << "请输入n：";
    cin >> k;
    cout << "F(" << k << ") = " << fib(k) << endl;
    return 0;
}

