#include<iostream>
using namespace std;
int main()
{
	int a = 1;
	int n = 0;
	for (int i = 0; i < 9; i++)
	{
		int b = 1;
		for (int j = 0; j <= i; j++)
		{
			n = a * b;
			cout << a << "*" << b << "=" << n << " ";
			b++;
		}
		a++;
		cout << endl;
	}
	return 0;
}