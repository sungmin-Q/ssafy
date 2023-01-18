#include <iostream>
#include <string>
using namespace std;


int main()
{
	int A, B, C;
	long long mul;
	string Smul;
	int lst[10] = { 0 };
	cin >> A >> B >> C;
	mul = A * B * C;
	Smul = to_string(mul);
	for (int i = 0; i < Smul.size(); i++) {
		lst[Smul[i] - '0']++;
	}
	for (int j = 0; j < 10; j++)
		cout << lst[j];
}
