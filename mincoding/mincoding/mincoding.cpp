#include<iostream>
using namespace std;

char path[10];

int mul(int a, int b)
{
	return a * b;
}
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}

int sum, tmp;
int num[3] = { 22,79,21 };
int flag = 0;
void func(int lev)
{
	if (lev == 2) {
		flag = 0;
		for (int i = 0; i < 2; i++) {
			if (path[0] == '0'&&flag==0 ) {
				tmp += mul(num[0], num[1]);
			}
			else if (path[1] == '0') {
				tmp = mul(tmp, num[2]);
			}

			if (path[0] == '1' && flag == 0) {
				tmp += add(num[0], num[1]);
			}
			else if (path[1] == '1') {
				tmp = add(tmp, num[2]);
			}

			if (path[0] == '2' && flag == 0) {
				tmp += sub(num[0], num[1]);
			}
			else if (path[1] == '2') {
				tmp = sub(tmp, num[2]);
			}
			flag = 1;
		}
		
		return;
	}

	for (int brn = 0; brn < 3; brn++) {
		path[lev] = '0'+brn;
		func(lev + 1);
		if (tmp % 101 == 0 && tmp != 0)
			cout << path << endl;
		//cout << tmp << endl;
		tmp = 0;
		path[lev] = 0;
	}
}
int main()
{
	func(0);
	
}

//for (int i = 0; i < 3; i++) {
//	if (path[lev] == 0) {
//		tmp += mul(a, b);
//	}
//	else if (path[lev] == 1) {
//		tmp += add(a, b);
//	}
//	else if (path[lev] == 2) {
//		tmp += sub(a, b);
//	}
//}