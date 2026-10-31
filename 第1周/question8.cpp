#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	int s = 1;
	cout << s << endl;
	for (int i = 0; i <9 ; i++)
	{
		s = (s + 1) * 2;
		cout << s << endl;
	}
	return 0;
}