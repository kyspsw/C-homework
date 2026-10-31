#include<iostream>
using namespace std;
int mm(int a, int b);
int mm(int a, int b)
{
	int c=0;
	int d=0;
	for (int i = a; i >0; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			c = i;
			cout << "最大公约数为" << c << endl;
			break;
		}
	}
	for(int j=a;;j++)
	{
		if (j % a == 0 && j % b == 0)
		{
			d = j;
			cout << "最小公倍数为" << d << endl;
			break;
		}
	}
}
int main()
{
	int x = 0;
	int y = 0;
	cin >> x;
	cin >> y;
	mm(x, y);
	return 0;
}

