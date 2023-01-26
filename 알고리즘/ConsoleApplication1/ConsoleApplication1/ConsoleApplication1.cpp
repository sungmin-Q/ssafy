#include <iostream>
using namespace std;

char path[10];
void func(int lev, int sum)
{
	if (lev == 3) {
		cout << path << " = " << sum << endl;
		return;
	}

	for (int i = 1; i <= 6; i++) {
		path[lev] = '0' + i;
		func(lev + 1, sum + i);
	}
}

int main()
{
	func(0,1);
}

//void bbq(int lev)
//{
//	if (lev == 2) return;
//	for (int i = 0; i < 3; i++) {
//		path[lev] = i;
//		cout << path[lev];
//
//		bbq(lev + 1);
//		//path[lev] = 0;
//	}
//	cout << endl;
//}

//1 1 1 1
//1 1 1 1
//1 1 1 1
//1 1 1 1
//
//0 0 0 0
//0 0 0 0
//0 0 0 0
//0 0 0 0