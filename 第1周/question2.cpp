#include <iostream>
using namespace std;
int main()
{
	int score = 0;
	cout << "来给电影打分吧" << endl;
	cin >> score;
	cout << "你认为电影";
	switch (score)
	{
	case 10:cout << "经典" << endl; break;
	case 9:cout << "经典" << endl; break;
	case 8:cout << "非常好" << endl; break;
	case 7:cout << "非常好" << endl; break;
	case 6:cout << "一般" << endl; break;
	case 5:cout << "一般" << endl; break;
	case 4:cout << "烂片" << endl; break;
	case 3:cout << "烂片" << endl; break;
	case 2:cout << "烂片" << endl; break;
	case 1:cout << "烂片" << endl; break;
	}
	return 0;
}