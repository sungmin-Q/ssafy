#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
struct Node {
	int num;
	int i;
	int j;
	bool boom;
};
struct cmp {
	bool operator()(Node& left, Node& right) {
		if (left.num < right.num) return false;
		if (left.num < right.num) return true;
	}
};

int main()
{
	//초수,좌표,터졌는지
	//좌표에 대해 찾음
	//터졌는지 여부는 따로 정리해놓음
	//정렬을 이용할때
	//정중앙대학교 pq를 2개 사용하기 
	//priority queue 커스텀 하는법
	//동작과정의 이해
	priority_queue<Node,vector<Node>,cmp> pq;

	Node node[16];
	int arr[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			node->i = i;
			node->j = j;
			node->num = arr[i][j];
			node->boom = 0;
		}
	}
	for(int i=0;i<16;i++)
		pq.push(node[i]);
	
	while (!pq.empty()) {
		if(pq.top.)
	}
	return 0;
}
	

