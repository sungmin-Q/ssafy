#include <iostream>
using namespace std;


int main()
{
	int a, b;
	cin >> a >> b;
	a = a + 1;
	cout << b - a << ' ' <<endl;
	for (int i = a; i < b; i++)
		cout << i << ' ';
}
