#include <iostream>
using namespace std;

// 整型版本：int getPower(int x, int y)
// y<0 返回0
int getPower(int x, int y)
{
    if (y < 0)
    {
        return 0;
    }
    if (y == 0)
    {
        return 1;
    }
    return x * getPower(x, y - 1);
}

// 实型版本：double getPower(double x, int y)
double getPower(double x, int y)
{
    if (y == 0)
    {
        return 1.0;
    }
    if (y < 0)
    {
        return 1.0 / getPower(x, -y);
    }
    return x * getPower(x, y - 1);
}

int main()
{
    int a, m;
    double b;

    cout << "请输入整数底数a：";
    cin >> a;
    cout << "请输入实型底数b：";
    cin >> b;
    cout << "请输入整数指数m：";
    cin >> m;

    int resInt = getPower(a, m);
    double resDouble = getPower(b, m);

    cout << a << "^" << m << " = " << resInt << endl;
    cout << b << "^" << m << " = " << resDouble << endl;

 
    double resA_double = getPower(static_cast<double>(a), m);
    cout << "将a转double计算：" << a << "^" << m << " = " << resA_double << endl;

    return 0;
}

