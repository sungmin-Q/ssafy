#include <iostream>
using namespace std;
int path[10]; //idx: 주사위 번째,value: 해당 주사위에서 어떤 눈을 뽑았는지
// like dat path[박스번째] 해당 박스에서 뽑은 눈
// 경로 기록용
// 주사위 번째,눈
// 주사위 눈을 뽑았었는지 -> 주사위의 눈 기록
int visited[7]; //idx:주사위의 눈,value: 해당 주사위 눈을 뽑았었는지
// 주사위 눈 -> 뽑았었는지
//선택을 기반으로 해당 선택
//visited,used
int N;
int sum;


void func(int lev)
{
	// 4.가지치기 (내 지금 선택을 판단)
	// backtraking
	if (lev >= N) {			// 2.기저조건
		// 같은 눈을 뽑은 기록 없다면 출력
		// 이미 뽑음 (비효울)

		for (int i = 0; i < N; i++)
			cout << path[i] << ' ';
		cout << "sum:" << sum;
		cout << endl;
		return;
	}

	for (int i = 1; i <= 6; i++) {
		//lev번째 주사위에서 i라는 눈 뽑음

		/*int flag = 0;
		for (int j = 0; j < lev; j++) {
			if (path[j] == i)
				flag = 1;
		}	반복이 존재
		*/
		
		if (visited[i] == 1) //i는 이미 뽑혔다,skip
			continue;
		//return은 이번 주사위의 완전 종료
		path[lev] = i;		// 3. 기록 및 처리
		sum += i;		// 기록된 주사위를 합
		//4.가지치기
		visited[i] = 1;		// i라는 눈 뽑힘
		// i라는 눈을 뽑는것이 괜찮은지 검사
		// 뽑아가며 판단 (효율)
		
		func(lev + 1);		// 1. 재귀 기본구조

		// i의 눈 선택 완료됨
		// 기록의 삭제가 필요함

		// 3. 기록 및 처리의 복구
		visited[i] = 0;
		//i의 눈의 기록 삭제
		path[lev] = 0;
		//a 주사위에서 i눈 뽑은 기록의 삭제
		sum = 0;
	}
	
}

int main()
{
	cin >> N;
	//주사위 개수 n 
	func(0);
}

