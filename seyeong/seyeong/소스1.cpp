//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int N;
//int num[12];
//int calcnt[4]; //+ - * /
//vector<int> path;
//int maxi = -1e9;
//int mini = 1e9;
//
//void dfs(int lev) {
//	if (lev == N - 1) {
//		//path 길이만큼
//		int temp = num[0];
//		for (int i = 0; i < path.size(); i++)
//		{
//			if (path[i] == 0) {//+
//				temp = temp + num[i + 1];
//			}
//			else if (path[i] == 1) {//-
//				temp = temp - num[i + 1];
//			}
//			else if (path[i] == 2) {//*
//				temp = temp * num[i + 1];
//			}
//			if (path[i] == 3) {///
//				temp = temp / num[i + 1];
//			}
//
//
//		}
//		if (temp > maxi) maxi = temp;
//		if (temp < mini) mini = temp;
//		return;
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		if (calcnt[i] == 0) continue;
//		calcnt[i]--;
//		path.push_back(i);
//		dfs(lev + 1);
//		path.pop_back();
//		calcnt[i]++;
//
//	}
//
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		cin >> calcnt[i];
//	}
//	dfs(0);
//	cout << maxi << endl;
//	cout << mini;
//	return 0;
//}
//
///*
//2
//5 6
//0 0 1 0
//
//3
//3 4 5
//1 0 1 0
//
//
//*/