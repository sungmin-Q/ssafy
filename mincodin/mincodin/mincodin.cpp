#include <iostream>
using namespace std;

int cnt;
int num[3] = { 1,2,3 };
int n;

void func(int sum)
{
	if (sum==n) {
		cnt++;
		return;
	}
	else if (sum > n)
		return;

	for (int i = 0; i < 3; i++) {
		func(sum + num[i]);
	}
}
int main()
{
	cin >> n;
	func(0);
	cout << cnt;
}