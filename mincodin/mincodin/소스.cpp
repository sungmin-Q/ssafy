#include<iostream>
using namespace std;

int result;
void func(int lev)
{
	if (lev == 0) {
		return;
	}
	func(lev - 1);
	result += lev;
}

int main()
{
	func(3);
	cout << result;
}