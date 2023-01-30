1
1MB
1ms
50
2
1MB
0ms
0

#include <iostream>
using namespace std;
char path[10];
int visit[10];
int cnt = 0;
int n;

void func(int lev)
{
	if (lev == n) {
		if (path[0] == path[1] && path[1] == path[2] && path[2] == path[0]) {
			return;
		}
		else {
			cnt++;
			return;
		}
	}
	for (int i = 0; i < 3; i++) {
		path[lev] = 'A' + i;
		visit[i] = 1;
		func(lev + 1);
		path[lev] = 0;
		visit[i] = 1;
	}
}
int main()
{
	cin >> n;
	func(0);
	cout << cnt;
}