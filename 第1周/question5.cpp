#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	int n = 0;
	int x = 0;
	cin >> a;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		x= 10 * x + a;
		cout << x<<endl;
	}
	return 0;
}