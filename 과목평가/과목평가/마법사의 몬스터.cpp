#include <iostream>
using namespace std;
int N, K;
int arr[5][5];
int Max = -21e8;
void input() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}
	cin >> K;
}
long long magic(int row, int col) {
	int dr[] = { -1,-1,1,1 };
	int dc[] = { -1,1,1,-1 };
	long long sum=0;
	for (int l = 1; l <= K; l++) {					//마법의 길이
		for (int i = 0; i < 4; i++) {
			int nr = row + l * dr[i];
			int nc = col + l * dc[i];
			if (nr < 0 || nc < 0 || nr >= N || nc >= N) continue;
			sum += arr[nr][nc];
		}
	}
	return sum;
}
int main() {
	input();
	long long sum=0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			sum = magic(i, j);
			if (Max < sum) Max = sum;
		}
	}
	/*int sum=magic(2, 2);*/
	cout << Max;
}