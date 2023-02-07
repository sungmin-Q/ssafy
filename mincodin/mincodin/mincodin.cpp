#include <iostream>
#include <vector>
using namespace std;
vector<int> vrr(10);
vector<int> tmp(10);

int arr[5][4] = {
	0,0,0,0,
	0,0,1,0,
	1,1,1,1,
	1,1,1,1,
	0,1,0,0
};

int check(int i)
{
	int di[4] = { 0,0,0 };
	int dj[4] = { 1,2,3 };
	int ni = 0, nj = 0;
	for (int dir = 0; dir < 3; dir++) {
		ni = i + di[dir];
		nj = dj[dir];
		if (arr[ni][nj] == 0)
			return 0;
		arr[ni][nj] = 0;
	}
	arr[i][0] = 0;
	return 1;
}

void print()
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}
}

int main()
{
	
	int idx=0;
	for (int i = 0; i < 5; i++) {
		if (arr[i][0] == 1) {
			cout << check(i) << endl;
			if (check(i) == 1) {
				idx = i;
			}
		}
	}

	

	print();
}



//