#include<iostream>
using namespace std;
short int divide(unsigned short int, unsigned short int);
short int divide(unsigned short int a, unsigned short int b)
{
	short int c = 0;
	if (b == 0)
	{
		return -1;
	}

	c = a / b;
	return c;
}
int main()
{
	unsigned short int x;
	unsigned short int y;
	cin >> x;
	cin >> y;
	cout<<divide(x, y);
	return 0;

}