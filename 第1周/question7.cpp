#include<iostream>
using namespace std;
int main()
{
	int month = 0;
	long long n = 0;
	int f1 =1 ;
	int f2 = 1;
	cout << "第1个月兔子为" << f1 << "对" << endl;
	cout << "第2个月兔子为" << f2 << "对" << endl;
	for (month = 3; month <= 20; month++)
	{
		n = f1 + f2;
		cout << "第" << month << "个月兔子为" << n << endl;
		f1 = f2;
		f2 = n;
	}
	return 0;
}