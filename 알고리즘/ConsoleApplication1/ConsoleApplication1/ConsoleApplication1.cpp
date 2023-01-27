#include <iostream>
using namespace std;
char path[10];
int used[10];

int func(int lev,int start)
{
	if (lev == 2) {
		cout << path << endl;
		return lev;
	}
	for (int i = start; i <= 6; i++) {
		path[lev] = '0' + i;
		func(lev + 1, i);
		path[lev] = 0;
	}
}
int main()
{
	func(0, 1);
}