#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
int n;
int path[50];
int cnt;
int dat[51];
void dfs(int lev, int sum, int start) {
	if (sum > n) {
		return;
	}
	if (sum == n) {
		cnt++;
		return;
	}
	for (int i = start; i <= n; i++) {
		path[lev] = i;
		dat[i]++;
		if (dat[i] > 2) {
			dat[i]--;
			continue;
		}
		dfs(lev + 1, sum + i, i);
		path[lev] = 0;
		dat[i]--;

	}
}

int main() {
	cin >> n;
	dfs(0, 0, 1);
	cout << cnt;
	return 0;
}


