﻿#include <iostream>

using namespace std;

// 문제. 
// 0번 노드에서 2번 노드로 가는데 다양한 길이 있다.
// 그 다양한 길들은 각각의 통행료가 (=가중치)있는데
// 0번에서 2번 노드로 가는데에 발생할 수 있는 통행료의 합들을 출력하라.

// 추가적으로 해보면 좋은 것
// 1단계 : 그래프 가중치값들을 바꿔보기
// 2단계 : 최종적으로 MAX 값 , MIN 값만을 출력하는 형태로 만들어보기
// 3단계 : 노드 개수, 간선 개수, 가중치 값
//         시작지점, 도착지점 등을 직접 입력 받는 형태로 만들어보기

int sum = 0; // 총합
int visited[4] = { 0, }; // 방문배열
int maxval = -21e8, minval = 21e8;
int node;
int arr[100][100] =
{
}; // 인접행렬 map[노드개수][노드개수] , 하드코딩
int START, END;

void input()
{
    for (int i = 0; i < node; i++) {
        for (int j = 0; j < node; j++) {
            cin >> arr[i][j];
        }
    }
}

void dfs(int now, int sum)
{

    if (now == END) // 2번 노드에 도착했다면 
    {
        if (maxval < sum) maxval = sum;
        if (minval > sum) minval = sum;
        return;
    }


    for (int i = 0; i < node; i++)
    {
        if (arr[now][i] == 0) continue; // 간선이 없다면 컨티뉴
        if (visited[i] == 1) continue; // 이미 방문한 적이 있다면 컨티뉴
        visited[i] = 1; // 방문하게 될 노드에 1 체크(이게 없다면 무한 사이클에 빠질 수 있습니다 !)

        dfs(i, sum + arr[now][i]); // (다음 탐방노드, 현재 SUM값에서 가중치값 더하기) 
        // ( now = from , i = to , map[now][i] 란 map[from][to] 의 의미)

        visited[i] = 0; // 방문하고 돌아간다면 0 체크(이게 있어야 모든 경우를 해볼 수 있습니다 !)
    }
};

int main()
{
    cin >> node;
    input();
    cin >> START >> END;
    visited[START] = 1; // 시작노드는 방문배열에 1을 체크하고 감
    dfs(START, sum); // (시작노드번호, sum값)
    cout << minval << endl;
    cout << maxval << endl;

    return 0;
}