#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	cout << "输入一个数字" << endl;
	cin >> a;
	int x = a;
	int y = 0;
	int z = 0;
	while (a>0)
	{
		z = 10*z;
		y = a % 10;
		z = z + y;
		a = a / 10;
	}
	if (x == z)
	{
		cout << "是回文序列" << endl;
	}
	else
		cout << "不是回文序列";
	return 0;
}