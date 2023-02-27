#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int N, T;
int parent[100];
int a, b;

int Find(int a) {

	return a = Find(parent[b]);
}

int Union(int a, int b) {
	int pa = Find(a);
	int pb = Find(b);
	if (pa == pb) return 0;
	
	return parent[pb] = a;
}

int main() {
	cin >> N >> T; // 별 개수, 연결 개수

	for (int i = 0; i < N; i++)
	{
		parent[i] = i;
	}

	for (int i = 0; i < T; i++)
	{
		cin >> a >> b;
		Union(a, b);
	}
	int dat[100];
	int cnt = 0;
	for (int i = 0; i < N; i++)
	{
		dat[parent[i]]++;
	}
	for (int i = 0; i < 100; i++)
	{
		if (dat[i] != 0) cnt++;
	}
	cout << cnt;
	return 0;
}

/*
13 9
1 2
1 8
11 12
12 13
4 9
3 7
9 3
3 5
5 6

*/