//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//using namespace std;
//struct node {
//	int i;
//	int j;
//	int num
//};
//struct cmp{
//	bool operator() (node& left, node& right) {
//		if (left.num < right.num) return false;
//		if (left.num > right.num) return true;
//	}
//};
//bool dirct(node A) {
//	int di[] = { -1,1,0,0 };
//	int dj[] = { 0,0,-1,1 };
//	int ni, nj;
//	for (int n = 0; n < 3; n++) {
//		ni = di[n] + A.i;
//		nj = dj[n] + A.j;
//	}
//}
//
//int arr[100][100] = { 0 };
//int main()
//{
//	int N;
//	cin >> N;
//	node lst[100];
//	priority_queue<int, vector<int>, cmp>pq;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> arr[i][j];
//			lst[i].i = i;
//			lst[i].j = j;
//			lst[i].num = arr[i][j];
//		}
//	}
//
//}

/*
준비
dist dat dist[출발지] = 0
최단거리 확정visited 

구현
1. 모든 노드의 최단거리 확정까지 
2. 현재 dist 저장된 후보 거리중 최소간선을 찾음
	이 노드로 이동(이 노드까지의 최단거리 확정)
	(now번 노드)
3. now번 노드부터 갈수있는 모든 간선의 확인
	이미 가진 후보지보다 작거나 같은 경로는 갱신할 필요 없음
*/
//10 13
//0 1 1
//0 3 4
//0 2 5
//1 4 3
//1 5 6
//2 5 8
//2 7 10
//2 6 9
//7 6 11
//6 9 2
//6 8 13
//7 8 12
//5 6 7
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//struct Edge {
//	int to; //to where
//	int cost //weight
//};
//int N, M;
//vector<Edge> al[100];
//void dij(int start) {
//	// dist
//	int dist[100] = { 0 };
//	int Max = 21e8;
//	for (int i = 0; i < N; i++)
//		dist[i] = Max;
//	//start weight 0
//	dist[start] = 0;
//
//	//visited
//	//is conform?
//	int visited[100] = { 0 };
//
//	// dijstra
//	// 노드 개수만큼 반복 한번 돌때 마다 하나의 노드 최단거리
//	//확정,모든 노드의 최단거리 확정시까지
//	for (int i = 0; i < N; i++) {
//		int mincost = 21e8;
//		int now = -1;
//
//		for (int j = 0; j < N; j++) {
//			if (dist[j] >= mincost) continue;
//			//확정 노드
//			if (visited[j] == 1) continue;
//
//			//최소값 찾음
//		}
//	}
//
//}
//
//void difk(int start) {
//	priority_queue <Node> pq;
//	pq.push({ start,0 });
//
//	int dist[100] = { 0 };
//	for (int i = 0; i < N; i++)
//		dist[i] = Max;
//	int visited[100] = { 0 };
//
//	while (!pq.empty()) {
//		Edge now = pq.top();
//		pq.pop();
//		
//		//now 최단거리 확정,확정된 노드면 안 건드림
//		if(visited[now.to] ==1) continue;
//		visited[now.to]=1
//
//			for (int i = 0; i < al[now.to].size(); i++) {
//				Edge next = al[now.to][i];
//				// ncost next번까지의 최종비용
//				int ncost = al[now.to] + next.cost;
//				//만약최종비용이 후보비용보다 크거나 같으면 쓸모없는 경로
//				if (dist[next.to] <= ncost) continue;
//				dist[next.to] = ncost;
//				pq.push({ next.to,ncost });
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		cout<<next<<"까지의 "<<
//	}
//
//}
//
//int main() {
//	cin >> N >> M;
//	for (int i = 0; i < M; i++) {
//		int from, to, cost;
//		cin >> from >> to >> cost;
//	}
//}

/*금나와라*/
/*
#include <iostream>
#include <queue>
using namespace std;

//구분해야함
struct node {
	int weight;
	bool isGold;
};
//노드에 연산자 넣기 가능
//node a;
//node b;
//if(a<b) 연산의 가능
struct cmp{
	bool operator ()(node& left, node& right) {
		//무게 다를땐 가벼운것 우선
		
		if (left.weight != right.weight) {
			return left.weight>right.weight
		}
		//같을땐 금 우선
		if (left.isGold == false && right == true)
			return true;
		return false;

		if (left.weight > right.weight) return true;
		if (left.weight < right.weight) return false;
		if (left.isGold == false && left.isGold == true) return false;
		return false;
	}
};
int main()
{
	//같은 무게일때는 황금 먼저
	
	int N;
	cin >> N;
	priority_queue<node, vector<node>, cmp> pq;
	for (int i = 0; i < N; i++) {
		int weight;
		cin >> weight;
		pq.push({ weight,true });
	}

	//황금 개수 count
	int cnt = 0;
	while (1) {
		node first = pq.top();
		pq.pop();
		if (first.isGold == false) break;
		cnt++;

		node second = pq.top();
		pq.pop();
		if (second.isGold == false) break;
		cnt++;

		pq.push({ 2 * second.weight,false });
	}
	cout << cnt;
	return 0;
}
*/

//연쇄폭탄
/*
#include <iostream>
#include <queue>
using namespace std;

struct node {
	int time;
	int row, col;
};

struct cmp {
	bool operator()(node& left, node& right) {
		return left.time > right.time;
	}
};
int N;

bool isOut(int r, int c) {
	return r < 0 || c < 0 || r >= N || c >= N;
}
int main()
{
	int MAP[1000][1000];
	priority_queue<node, vector<node>, cmp> pq;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> MAP[i][j];
			pq.push({ MAP[i][j],i,j });
		}
	}

	//마지막에 터진 폭탄의 값을 저장,이미 터졌는지 저장된것 확인
	//[row][col]이 터졌는지
	int isBombed[1000][1000] = { 0 };
	int dr[] = { -1,1,0,0 };
	int dc[] = {0,0,-1,1};
	int ans = 0;
	while (!pq.empty()) {
		node now = pq.top();
		pq.pop();

		//뽑은뒤 과정을 진행함
		if (isBombed[now.row][now.col] == 1) continue;
		ans = MAP[now.row][now.col];
		for (int i = 0; i < 4; i++) {
			int nr = now.row + dr[i];
			int nc = now.row + dc[i];
			if(isOut(now.row, now.col)) continue;
			isBombed[nr][nc] = 1;
		}
	}
	cout << ans << "초";
}
*/

//주석단축키
// ugly number
// minheap으로
// pq에서 나오면서 *2,3,5해 pq에 다시 넣어줌
// 정점에 대해 곱 연산 한 번씩만 진행
// dat proceesed[i]=true
// 인덱스 문제 발생가능
// 
// 바로 직전만 확이하면 됨
// int prev 뽑은 경우 저장,이후 뽑힌것과 비교함
// 
// 곱연산 오버플로우 가능
// longlong의 사용
// prev도 longlong으로 시작
// pq에 중복되는 경우가 존재함 ex)6
// 
// 기록: 몇 번째 등장하는지 
//	 order[1]=1,order[1000]=1000번째 등장할 큰 값
// 확인하면서 진행
// 조사식 제한 
// 시작 지점선정

//정중앙대학교
/*
#include <queue>
#include <iostream>
using namespace std;
int main()
{
	priority_queue<int, vector<int>, less<int>> leftheap;
	priority_queue<int, vector<int>, greater<int>> rightheap;
	int mid=500;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		if (b < a)
			swap(a, b);
		
		if (a < mid && mid < b) {
			leftheap.push(a);
			rightheap.push(b);
		}
		else if (b <= mid) {
			leftheap.push(a);
			leftheap.push(b);
			rightheap.push(mid);
			mid = leftheap.top();
			leftheap.pop();
		}
		else if (a >= mid) {
			rightheap.push(a);
			rightheap.push(b);
			leftheap.push(mid);
			mid = rightheap.top();
			rightheap.pop();
		}
		cout << mid << endl;
	}
}
*/

//가중치 경로 my code
/*
#include <iostream>
#include <vector>
using namespace std;


struct node {
	int to;
	int weight;
};
vector <node>arr[20];
char path[10];
bool via[10];

void dfs(int now,int lev) {
	if (now == 6) {
		cout << path << endl;
		return;
	}
	for (int i = 0; i < 7; i++) {
		if (via[i] == 1) continue;
		via[i] = 1;
		path[lev] = '1' + i;
		dfs(i, lev + 1);
		via[i] = 0;
		path[lev] = 0;
	}
}


void dfs1(int now,int sum) {
	if (now == 6) {
		cout << "발견" << endl;
		return;
	}
	for (node next : arr[now]) {
		if (via[next.to] == 1) continue;
		via[next.to] = 1;
		dfs1(next.to,sum+next.weight);
		via[next.to] = 0;
		sum - next.weight;
	}
}
int main() 
{
	int n, m;
	cin >> n >> m;
	int a, b, weight;
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> weight;
		//단방향
		arr[a].push_back({ b,weight });
		
		//양방향
		//arr[a].push_back({ b,weight });
		//arr[b].push_back({ a,weight });
	}


	
	via[1];
	dfs1(1,0);
	
	return 0;
}
*/

//#include <iostream>
//#include <queue>
//#include <string>
//using namespace std;
//struct Edge {
//	int node;
//	int cost;
//
//};
//int N, T;
//vector<Edge> adj[8];
//void input() {
//	cin >> N >> T;
//	for (int i = 0; i < T; i++)
//	{
//		int a, b, cost;
//		cin >> a >> b >> cost;
//		adj[a].push_back({ b,cost });
//	}
//}
//int cnt = 0;
//int visited[8]; // 경로상에 중복 등장하지 않도록 막기
//void dfs(int now, int accSum, string path)
//{
//	if (now == 6) { // 1 ~~~~>6
//		cnt++;
//		cout << "경로 발견!" << accSum << " " << path << "\n";
//		return;
//	}
//	for (Edge next : adj[now])
//	{
//		if (visited[next.node] == 1) continue;
//		visited[next.node] = 1; // 이후 경로에서 등장 x 
//		dfs(next.node, accSum + next.cost, path + to_string(next.node) + "->"); // 1 ~~~~>
//		visited[next.node] = 0;
//	}
//}
//
//struct Node {	//전체
//	int node;	//start->node
//	int accCost; //누적 비용
//};
//struct cmp {
//	bool operator()(Node& left, Node& right) {
//		return left.accCost < right.accCost;
//	}
//};
//int main() {
//	// 파일 입출력
//	freopen_s(new FILE*, "input.txt","r",stdin);
//	priority_queue<Edge, vector<Edge>, cmp> pq;
//	int proceessed[8] = { 0 };
//	int start = 1;
//	pq.push({ start,0 });		//start to start
//
//	while (!pq.empty()) {
//		Node now = pq.top();
//		pq.pop();
//		if (proceessed[now.node] == 1) continue;
//		proceessed[now.node] = now.accCost;
//		dist[now.node] = now.accCost;
//		//작은 번호부터 뽑는중 처음나온 수는 작은수로 확정
//		//proccess
//		for (Edge next : adj[now.node]) {
//			 //start to node
//			int newCost = now.accCost + next.cost;
//			pq.push({ next.node,newCost });
//			//새로 찾은 경로의 비용
//		}
//	}
//	input();
//
//	return 0;
//}
//
//
//

/*
#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct Edge {
	int node;
	int cost;
};
struct Node {
	int node;
	int accCost;
};
struct cmp {
	bool operator()(Node& left, Node& right) {
		return left.accCost > right.accCost;
	}
};
int N, T;
vector<Edge> adj[8];
void input() {
	cin >> N >> T;
	for (int i = 0; i < T; i++) {
		int a, b, cost;
		cin >> a >> b >> cost;
		adj[a].push_back({ b,cost });
	}
}
const int INF = 1e9;
int main() {
	input();
	priority_queue < Node, vector<Node>, cmp> pq;
	int dist[8];
	for (int i = 1; i <= 7; i++)
		dist[i] = INF;

	int start = 1;
	pq.push({ start,0 });
	dist[start] = 0;

	while (!pq.empty()) {
		Node now = pq.top();
		pq.pop();
		
		//기존의 값들과 비교
		if (now.accCost > dist[now.node]) continue;
		
		//기존의 값보다 작거나 같은 경우
		for (Edge& next : adj[now.node]) {
			int newCost = now.accCost + next.cost;
			
			if (newCost < dist[next.node]) {
				dist[next.node] = newCost;
				pq.push({ next.node,dist[next.node] });
			}
		}
	}
	for (int i = 1; i < 7; i++)
		cout << start << Node << "minimum: " << dist[node] << endl;
}
*/

/*
#include <iostream>
#include <queue>
#include <string>
using namespace std;
struct Edge {
	int node;
	int cost;
};
struct Node {
	int node; // start ~~~~ > node
	int accCost; // start~~~>node 까지의 누적비용 
};
struct cmp
{
	bool operator() (Node& left, Node& right)
	{
		return left.accCost > right.accCost;
	}
};
int N, T;
vector<Edge> adj[8];
void input() {
	cin >> N >> T;
	for (int i = 0; i < T; i++)
	{
		int a, b, cost;
		cin >> a >> b >> cost;
		adj[a].push_back({ b,cost });
	}
}
const int INF = 1e9; // 10억 
int main() {
	freopen_s(new FILE*, "input.txt", "r", stdin);
	input();
	priority_queue<Node, vector<Node>, cmp> pq;
	int dist[8];  // dist[A] : PQ에 있는 A의 제일 작은 누적비용 
	for (int i = 1; i <= 7; i++) dist[i] = INF;
	int start = 1;
	pq.push({ start, 0 }); // start, start~~>start비용
	dist[start] = 0;
	while (!pq.empty())
	{
		Node now = pq.top(); pq.pop();
		if (now.accCost > dist[now.node])continue;
		// proccess 
		for (Edge& next : adj[now.node])
		{
			int newCost = now.accCost + next.cost; // start~~~~>now + 간선비용
			if (newCost < dist[next.node])
			{
				dist[next.node] = newCost;
				pq.push({ next.node, dist[next.node] });
			}
		}
	}
	for (int node = 1; node <= 7; node++)
	{
		cout << start << "~~~~~~>" << node << "의 최소비용 : " << dist[node] << endl;
	}

	return 0;
}
*/

//#include <iostream>
//#include <queue>
//#include <string>
//using namespace std;
//struct Edge {
//	int node;
//	int cost;
//};
//struct Node {
//	int node; // start ~~~~ > node
//	int accCost; // start~~~>node 까지의 누적비용 
//};
//struct cmp
//{
//	bool operator() (Node& left, Node& right)
//	{
//		return left.accCost > right.accCost;
//	}
//};
//int N, T;
//vector<Edge> adj[8];
//void input() {
//	cin >> N >> T;
//	for (int i = 0; i < T; i++)
//	{
//		int a, b, cost;
//		cin >> a >> b >> cost;
//		adj[a].push_back({ b,cost });
//	}
//}
//const int INF = 1e9; // 10억 
//int main() {
//	freopen_s(new FILE*, "input.txt", "r", stdin);
//	input();
//	priority_queue<Node, vector<Node>, cmp> pq;
//	int dist[8];  // dist[A] : PQ에 있는 A의 제일 작은 누적비용 
//	for (int i = 1; i <= 7; i++) dist[i] = INF;
//	int start = 1;
//	pq.push({ start, 0 }); // start, start~~>start비용
//	dist[start] = 0;
//	while (!pq.empty())
//	{
//		Node now = pq.top(); pq.pop();
//		if (now.accCost > dist[now.node]) continue;
//		// proccess 
//		for (Edge& next : adj[now.node])
//		{
//			int newCost = now.accCost + next.cost; // start~~~~>now + 간선비용
//			if (newCost < dist[next.node])
//			{
//				dist[next.node] = newCost;
//				pq.push({ next.node, dist[next.node] });
//			}
//		}
//	}
//	for (int node = 1; node <= 7; node++)
//	{
//		cout << start << "~~~~~~>" << node << "의 최소비용 : " << dist[node] << endl;
//	}
//
//	return 0;
//}



/*
union find disjointset
소속/그룹을 만들고 유지/관리하는 알고리즘
결합이 된 상태(팀을 구성)
union:서로 두개의 다른 집합으로 결합하는 작업
ex) M&A
find:특정 소속에 속한 멤버가 어떤 소곡에 포함되어있는지 찾아가고 판단하는 작업
ex) 결제를 받기 위해 대장을 찾아가는 작업
2가지 동작으로 구성된다

find
팀장이 소속 그 자체
대장이 곧 소속
찾아가는 과정: 재귀로 구성한다.
계속해서 팀장을 찾으러 가야함
find(11)->find(6)->find(3)->find(0)
특정 노드에서 시작하여 나의 부모가 누구인지 기록하면 재귀로 사용가능
dat: 나의 부모가 누구인지 저장
parent
index: 노드
value: 부모
노드->부모->노드->부모...

#include <iostream>
using namespace std;

//find:소속을 찾아가는 알고리즘
// 정보:정보(부모정보)를 저장할 parent의 필요
// find최적화 path compresson(경로압축)
// 소속을 단 1회 찾으면 O(1)로 접근 가능
//경로 압축
//장점: 시간 효율성의 증가
//단점: 돌이킬수 없음

int parent[20];
int N, M;

int Find(int now) {
	//find의 시간 복잡도: O(N)
	//종료조건
	//now의 부모가 나랑 같다면: 소속을 찾음
	if (now == parent[now]) {
		return now;
	}
	//재귀구성
	//대장이 아니면 나의 부모를 찾아가라

	//나의 부모(소속)은 = 돌아올때 가지고 있던 값이다.
	//return find(parent[now]); 경로 압축 전

	//경로 압축
	//O(1)~O(NlogN)
	return parent[now] = Find(parent[now]);
}

void Union(int A,int B) {
	// 두 개의 노드 결합이 아닌
	// 집합과 집합간의 합
	// 유니온 대장끼리만 결합,밑의 노드에는 합병 정보가 갱신되지 않음
	// 합병후 
	
	// #1.각 노드의 소속을 확인
	int pa = Find(A);
	int pb = Find(B);

	// #2.B의 소속을 A로 만듬
	parent[pb] = pa;
};
int main()
{
	//parent는 자기자신이 대장인 상태
	//개별적인 상태로 시작
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		parent[i] = i;
	}

	for (int i= 0; i < M; i++) {
		int A, B;
		cin >> A >> B;
		parent[A] = B;
		Union(A, B);
	}

	a와 b가 같은 그룹인지 비교 하기위해
	parent를 사용하지 않음
	한번더 업데이트 필요
	if(parent[a]==parent[b])
	A의 대표를 다시 한번 찾아가며  parent를 update
	상위 노드에 대한 경로압축
	if(parent[2]==parent[6]) -> false;
	if(Find[2]==Find[6]) -> true;
	
	int a, b;
	cin >> a >> b;
}
*/

/*
	문자
	n개의 회사 m개의 인수확병 과정
	A가  B를 인수할때 A회사가 대표회사이고 B회사로부터
	10명의 개발자 데려옴 M개의 인수 확병후 회사들에 남들 개발자의 수
*/

/*
개발자 수를 저장하는 dat를 생성한다
합병이 되면 개발자를 대려옴
최상위 boss에서 10명씩 더해주고
인수된 boss에서 10명씩 뺌

union이 된경우 다시 합병을 할때 다시 결합할 경우 문제발생가능
1. main에서 union을 하기전 확인하는 경우
	A와 B가 같은 소속인 경우 결합하지 않음
2. union내부에서 A와 B가 같은 소속인경우 합병을 거치지 않음


자기자신이 부모인 노드를 구성한다
input으로 노드간 연결을 입력
uinon
각 노드간 소속을 확인
동일한 노드 소속인지 검사
소속을 변경
find
재귀로 구성
부모를 찾아줌
main
부모가 자신인 노드의 생성
부모 노드 아닌find를 통해 찾음
*/

/*
최단거리로만 이동함
가장 먼 위치를 구하기
가장 오기 힘든위치의 피로도를 출력함
다익스트라 최단거리
방향배열을 이용
다익스트라 최단거리
우선순위큐 만들고 처음 위치를 저장
큐가 종료될때까지 반복,next에서 값의 비교를 통해 우선순위를 변경
최소 값을 모든 배열에 넣어둔뒤 다익스트라
*/
/*
피로도를 누적해야함
인접한 값 좌표정보를 통해 이동하는 정보 가져옴
*/


//테스트 케이스 초기화
//디버깅시 arr을 통해 접근함

/*
#include <iostream>
#include <queue>
using namespace std;

const int Max = 10;
int arr[Max]{ Max };
struct node {
	int i;
	int j;
	int sum;
};
node start;

struct cmp {
	bool operator()(node left, node right) {
		return (left.sum > right.sum);
	}
};
int di[] = { 1,-1,0,0 };
int dj[] = { 0,0,-1,1 };

void dijk(node start) {
	priority_queue<node, vector<node>, cmp > pq;
	int cost = 1;
	int dist[100][100];
	//dist초기화
	int si = 2, sj = 1;
	pq.push({ si,sj,cost });
	const int Inf = 21e8;
	for (int i = 0, j = 0; (i < 100) && (j<100); i++,j++) {
		dist[i][j] = Inf;
	}
	dist[start.i][start.j] = start.sum;
	while (!pq.empty()) {
		node now = pq.top();
		pq.pop();
		if (dist[now.i][now.j] < now.sum) continue; //now에서 큰것을 뽑은 경우
		
		for (node next : arr[now.i][now.j]) {
			for (int t = 0; t < 4; t++) {
				int ni = now.i + di[t];
				int nj = now.j + dj[t];
				if (ni < 0 || nj < 0 || ni >= N || nj >= N) continue;
				if (arr[ni][nj] == -1) continue;
				//new cost의 위치
				int newCost = next.sum + now.sum;
				if (dist[now.i][now.j] < newCost) continue;
				
				
			}
			dist[next.i][next.j] = newCost;
			pq.push({ next.i,next.j,dist[next.i][next.j] });
		}
	}
}
int N, E;
void input()
{
	cin >> start.i >> start.j;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}
	start.sum = arr[start.i][start.j];
}
void input()
{
	init();	//초기화
	intut();
	//좌표를 입력 받음
	cin >> N >> E;
	for (int i = 0; i < E; i++) {
		node from, to, cost;
		cin >> from.i >> from.j >> from.sum;
		cin >> to.i >> to.j >> to.sum;
		adj[from].push_back()
	}
}
int main()
{
	
}
*/
/*
#include <iostream>
#include <queue>
using namespace std;

struct Node {
	int node;
	int cost;
};
const int Inf = 21e8;
int N, E;
vector<Node>adj[100];

bool operator < (Node left, Node right) {
	if (left.cost < right.cost) return false;
	if (left.cost > right.cost) return true;
	return false;
}

vector<Node> lst[100];
int dist[100];
int visit[100];
priority_queue<Node> pq;

void dijk(int start) {
	dist[start] = 0;
	pq.push({ 0,dist[start]});

	while (!pq.empty()) {
		Node now = pq.top();
		pq.pop();
	
		for (Node next : adj[now.node]) {
			int newCost = next.cost + dist[now.node];
			if (dist[next.node] < newCost) continue;
			dist[next.node] = newCost;
			pq.push({ next.node,dist[next.node] });
		}
	}
	cout << dist[N - 1];
}

int main()
{
	cin >> N >> E;
	for (int i = 0; i < E; i++) {
		int from, to, cost;
		cin >> from >> to >> cost;
		adj[from].push_back(Node{ to,cost });
	}
	dijk(0);
	return 0;
}
*/

/*
#include <iostream>
#include <vector>
using namespace std;
int arr[100][100];
int cnt;
int visited[100][100] = { 0 };
int N, M;

void dfs(int si, int sj) {
	for (; si < N; si++) {
		for (; sj < M; sj++) {
			if(visited[i][j])
			cnt++;
		}
	}
}

int main()
{
	cin >> N, M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (arr[i][j]&&visited[i][j]==1) {
				dfs(i, j);
			}
		}
	}
}

*/

/*
1. 문제이해
	조건파악
	구하는것이 무었이지
	
2. 설계 
	todolist
	시간복잡도 검증
	시뮬레이션
3. 구현
	작명에 신경
	가독성 있게
4. 디버깅
*/

//섬에 방문했는지여부
//육지인지 여부
//범위를 넘지않는지 여부

//이미 같은 그룹일때 사이클이 발생함
// 2차원 배열의 확산
// 
// 
// 
//
//

//flood fill
//now가 갈수 있는 노드의 확인
//범위체크
//방문예약
//방문


/*
flood fill
시작노드생성
시작위치,종료위치
**방문 배열의 생성
방향배열
범위체크 
벽체크
*/

/*
#include <iostream>
#include <queue>
using namespace std;
struct Node {
	int row;
	int col;
};
char arr[100][100] = { 0 };
int N, M;
Node start, mid, dest;

void input()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr[i][j];
		}
	}
}
void find() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (arr[i][j] == 'S') {
				start.row = i;
				start.col = j;
			}
			else if (arr[i][j] == 'C') {
				mid.row = i;
				mid.col = j;
			}
			else if (arr[i][j] == 'D') {
				dest.row = i;
				dest.col = j;
			}
		}
	}
}
void bfs(Node A, Node B) {
	queue<Node> q;
	q.push(A);
	int visited[100][100] = { 0 };
	visited[A.row][A.col] = 0;

	int rd[] = { 1,-1,0,0 };
	int cd[] = { 0,0,-1,1 };

	while (!q.empty()) {
		Node now = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nr = now.row + rd[i];
			int nc = now.col + cd[i];
			if (nr < 0 || nc < 0 || nr >= N || nc >= M) continue;
			if (visited[nr][nc] == 1) continue;
			if (arr[nr][nc] == '.') continue;
			visited[nr][nc] = visited[now.row][now.col] + 1;
			q.push({ nr,nc });
		}
	}
}
int main()
{
	input();
	find();
	bfs(start, dest);
}
*/

/*
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct Node {
	int row;
	int col;

	bool operator ==(Node right) {
		return row == right.row && col == right.col;
	}
};
const int N=6,M=5;
Node parent[N][M];	//링크를 알려줌 , parent[3][4] => {2,4}
int Map[N][M];
int sizeOf[N][M];	//보스의 크기(최대 맵의 크기),root에서 관리

Node Find(Node now) {
	Node p = parent[now.row][now.col];
	if (now.row == p.row && now.col == p.col) return now;
	Node ret = Find(parent[now.row][now.col]);
	parent[now.row][now.col] = ret;
	return ret;
}

void Union(Node a, Node b) {
	Node ra = Find(a);
	Node rb = Find(b);
	if (ra.row == rb.row && ra.col == rb.col) return;
	parent[rb.row][rb.col] = ra;
	sizeOf[ra.row][ra.col] += sizeOf[rb.row][rb.col];
	sizeOf[rb.row][rb.col] = 0;		//디버깅 위해
}

void input()
{
	int Q;
	cin >> Q;
	for (int i = 0; i < Q; i++) {
		int row, col;
		cin >> row >> col;
		parent[row][col] = { row,col };
		sizeOf[row][col] = 1;
		int dr[] = { 1,-1,0,0 };
		int dc[] = { 0,0,-1,1 };

		for (int t = 0; t < 4; t++) {
			int nr = row + dr[t];
			int nc = col + dc[t];
			if (nc < 0 || nr < 0 || nr >= N || nc >= N) continue;

			if (Find{ nr,nc }) = ({ -1,-1 });		//땅이 있는지
			
			Union({ row,col }, { nr,nc });
			
		}
	}
}

//root가 몇 개인지로 땅의 크기를 찾을수 있다

int size
void bfs(int row,int col) {
	queue<Node> que;
	que.push({ row,col });

	int dist[100][100];
	dist[row][col] = 0;

	
	while (!que.empty()) {
		Node now = que.front();
		que.pop();

		for (int t = 0; t < 4; t++) {
			int nr = now.row + dr[t];
			int nc = now.col + dc[t];
			if (nc < 0 || nr < 0 || nr >= N || nc >= N) continue;
			if (dist[nr][nc] != 0) continue;
			dist[nr][nc] = dist[now.row][now.col]+1;

		}
	}
}
int main()
{
	//땅이 몇개나 생겼는지 boss의 개수를 세준다

	int total;
	int maxSize = -1;
	for (int row = 0; row < N; row++) {
		for (int col = 0; col < M; col++) {
			Node r = Find({ row,col });
			if (row == r.row && col == r.col) {
				total++;
				maxSize = max(sizeof[row][col], maxSize);
			}
		}
	}

}
mapping을 통하여 자료형을 이용가능
row,col
MAP[row][col]=1
parent[1]=2
*/

/*
MST
최소비용으로 모든 노드가 포함되는 트리를 만든다
어떻게 최소비용으로 구할수 있는지
신장트리는 여러가지 나올수 있음
최소신장트리도 여러개 나올수 있음(비용이 동일한것이 여러개일때)
간선들을 선택해 나감(비용이 적은것 기준)
MST에 포함
간선정보를 가지고 있어야함(간선리스트)
간선비용,연결된 정보들을 벡터에 저장
정렬을 통해 최소 간선비용을 갖는 값을 찾아줄수 있음
*/


//간선리스트의 저장
//모든 간선을 Edge에 저장
/*
N T
1 2 2
1 5 4
1 4 1
*/

// bfs 2회 사용시 초기화 필요
// 간선을 뒤집어 생각가능
//큐는 뽑을때 탐색된다
//#include <iostream>
//#include <queue>
//using namespace std;
//int N;
//int arr[7][7];
//int cmp[7][7];
//struct Node {
//	int row;
//	int col;
//};
//Node start;
//int num = 0;
//int Ant;
//int Cmp;
//
//void input() {
//	cin >> N;
//	for (int i = 0; i <= N; i++) {
//		for (int j = 0; j <= N; j++) {
//			cin >> arr[i][j];
//		}
//	}
//}
//void numOfAnt() {
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (arr[i][j] == 1) Ant++;
//		}
//	}
//}
//int isWrap(int num) {
//	for (int i = -num; i <= num; i++) {
//		for (int j = -num; j <= num; j++) {
//			if (arr[i][j] == 1) Cmp++;
//		}
//	}
//	if (Cmp == Ant) return 1;
//	else return 0;
//}
//
//int main()
//{
//	input();
//	num = 2;
//	cout<<isWrap(num);
//}

/*
#include<iostream>
#include<algorithm>
using namespace std;

int N = 10;
int arr[] = { 4,4,5,7,8,10,20,22,23,24 };

int binSearch(int s, int e, int target) {
	int mid = (s + e) / 2;
	if (arr[mid] == target) {
		cout << "found";
		return 1;
	}
	else if (arr[mid] < target) {
		binary_search(mid + 1, e, target);
		return mid;
	}
	else if (arr[mid] < target) {
		binary_search(s, mid-1, target);
		return mid;
	}
	if (s > e) {
		cout << "not find";
		return -1;
	}
}
int main() {
	binSearch(0,9,8);
}
*/

/*runtime error*/
/*
#include <iostream>
using namespace std;

int main() {
	char oil[10];
	for(int i=0;i<10;i++)
		cin >> oil[i];
	

	int s = 0;
	int e = 9;
	int ans = -1;

	while (s <= e) {
		int mid = (s + e) / 2;
		if (oil[mid] == '#') {
			//새 답의 후보로 선택
			ans = max(ans, mid);
			s=mid + 1;
		}
		else {
			e = mid - 1;
		}
	}
	cout << ans+1<<"0%";

	return 1;
}
*/

/*
runtime error
index
return
#include <iostream>
using namespace std;

int main() {
	
	string oil;
	cin >> oil;
	int s = 0;
	int e = 9;
	int ans = -1;

	while (s <= e) {
		int mid = (s + e) / 2;
		if (oil[mid] == '#') {
			//새 답의 후보로 선택
			ans = max(ans, mid);
			s = mid + 1;
		}
		else {
			e = mid - 1;
		}
	}
	cout << ans + 1 << "0%";

	return 0;
}
[lb,ub)
ub-lb
*/

/*
#include<iostream>
using namespace std;

int main() {
	int lst[10];
	for (int i = 0; i < 10; i++)
		cin >> lst[i];
	const int W = 5;
	const int N = 10;
	int sum = 0;
	for (int i = 0; i < W; i++) {
		sum += lst[i];
	}

	int slow = 0;
	int fast = W-1;
	int Max = -21e8;
	while (fast < 9) {
		sum -= lst[slow];
		slow++;
		fast++;
		sum += lst[fast];
		if (Max < sum) {
			Max = sum;
		}
	}

	//해당구간의 정보를 확인할것
	//[a,b]
	//[a,b)
	
	cout << Max;
}
*/

/*
#include <iostream>
#include <queue>
using namespace std;
struct Node {
	int row;
	int col;
};

int visited[100][100] = { false };
int arr[100][100];
int totalcnt;
Node Maxidx;
int maxi, maxj;

void bfs(int row,int col) {
	queue<Node> que;
	que.push({row,col});

	int dr[] = { 1,-1,0,0 };
	int dc[] = { 0,0,-1,1 };
	int cnt=0;	

	while (!que.empty()) {
		Node now = que.front();
		que.pop();
		
		for (int t = 0; t < 4; t++) {
			int nr = now.row + dr[t];
			int nc = now.col + dc[t];
			if (nr < 0 || nc < 0 || nr>=4 || nc>=9) continue;
			if (arr[now.row][now.col] != arr[nr][nc]) continue;
			if (visited[nr][nc] == 1) continue;
			visited[nr][nc] = 1;
			cnt++;
			que.push({ nr,nc });
//			cout <<nr<<' '<<nc << ' ' << cnt << endl;
		if (totalcnt < cnt) {
			totalcnt = cnt;
			Maxidx = ({ nr,nc });
			maxj = nr;
			maxi = nc;
		}
		}
	}
}
void input()
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
		}
	}
}
int main()
{
	input();
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 9; j++) {
			bfs(i, j);
		}
	}
	cout << totalcnt*arr[maxj][maxi];
}
*/

//for문을 이용하여 타이거 새우는 nr, nc에 3배, 오징어는 4배

/*
______###
______###
______###
_____####
____##___
#________
##_______
###______
*/

//#include <iostream>
//#include <queue>
//using namespace std;
//struct Node {
//	int row;
//	int col;
//};
//queue<Node> save;
//char arr[10][10];
//int visited[10][10];
//
//void bfs(int row,int col) {
//	queue<Node> que;
//	que.push({ row,col });
//
//	visited[row][col] = true;
//	while (!que.empty()) {
//		Node now = que.front();
//		que.pop();
//		int dr[] = { 1,-1,0,0 };
//		int dc[] = { 0,0,-1,1 };
//		for (int t = 0; t < 4; t++) {
//			int nr = now.row + dr[t];
//			int nc = now.col + dc[t];
//			if (visited[nr][nc] == true) continue;
//			if (arr[nr][nc] == '_') continue;
//			if (nr < 0 || nc < 0 || nr >= 8 || nc >= 9) continue;
//			visited[nr][nc] = 1;
//			que.push({ nr,nc });
//			save.push({ nr,nc });
//		}
//	}
//}
//void input() {
//	for (int i = 0; i < 8; i++) {
//		for (int j = 0; j < 9; j++) {
//			cin >> arr[i][j];
//		}
//	}
//}
//int main()
//{
//	input();
//	for (int i = 0; i < 8; i++) {
//		for (int j = 0; j < 9; j++) {
//			bfs(i, j);
//		}
//	}
//	int df = 1;
//}

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
int arr[10][10], bit[10][10];
vector<int> lst;
void input() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> bit[i][j];
		}
	}
}
void bitmask() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			arr[i][j] = arr[i][j] * bit[i][j];
			if (arr[i][j]) lst.push_back(arr[i][j]);
		}
	}
	int df = 1;
}
bool cmp(int left, int right) { // LEFT 가 먼저 나올때 TRUE  리턴
	if (left == right) return true;
	else {
		if (left < right) return true;
		if (left > right) return false;
	}
	return false;
}

int main()
{
	input();
	bitmask();
	// DAT


	sort(lst.begin(), lst.end(), cmp);
	for (int num : lst)
		cout << num;
}
*/

/*
#include <iostream>
using namespace std;
char parent[100];
int flag = 0;
char Find(char now) {
	if (now == parent[now])
		return now;
	return parent[now] = Find(now);
}
void Union(char A,char B) {
	char pA = Find(A);
	char pB = Find(B);
	if (pA == pB) { 
		flag = 1;
		return;
	}
	parent[pB] = pA;
}
int main() {
	for (int i = 0; i < 100; i++)
		parent[i] = i;
	for (int i = 0; i < 4; i++) {
		char A, B;
		cin >> A >> B;
		Union(A, B);
	}
	if (flag)
		cout << "발견";
	else
		cout << "미발견";
}
*/

/*
#include <iostream>
using namespace std;
int arr[4][8] = { 0,0,3,3,0,0,0,0,
				5,1,4,2,6,9,8,1,
				6,5,1,3,2,6,3,2,
				0,0,0,0,9,9,4,0
};
struct rowvalue {
	int startcol;
	int endcol;
	int value;
};
rowvalue value[8];
void calculaterow() {
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 8; i++) {

		}
	}
}
int main() {

}
*/

/*
#include <iostream>
using namespace std;
struct Row {
	int start;
	int end;
	int value;
};
Row rowsum[8];
int arr[4][8];

void sum(){
	for (int j = 0; j < 8; j++) {
		for (int i = 0; i < 4; i++) {
			rowsum[j].value += arr[i][j];
			
			rowsum[j].start = i;
			rowsum[j].end = j;

		}
	}
}
void input() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> arr[i][j];
		}
	}
}
int main() {
	input();
	sum();
}
*/
//일단 재귀로 구현후 memolization'


//탑다운 DP
//Backtracking 인데, 메모 가지치기


//int a=getResult(y,x+1)+현재


//Max = getResult(index);
//int a=getResult(index-2)+v[index]
//int a=getResult(index-7)+v[index]
//int result=max(a,b)

#include <iostream>
#include <vector>
using namespace std;

//int arr[7][7] = { 0,0,0,0,0,0,0,
//				0,0,1,0,1,0,0,
//				0,1,0,1,0,0,0,
//				0,0,1,0,0,0,0,
//				0,1,0,0,0,1,1,
//				0,0,0,0,1,0,0,
//				0,0,0,0,1,0,0
//};
bool visited[7] = { 0 };
vector<int> arr[100];
void predfs(int now) {
	for (int i = 6; i >= 1; i--) {
		//if (arr[now][i] == 0) continue;
		if (visited[i] == 1) continue;
		visited[i] = 1;
		cout << now << ' ';
		predfs(i);
	}
}
void postdfs(int now) {
for (int i = 6; i >= 1; i--) {
		//if (arr[now][i] == 0) continue;
		if (visited[i] == 1) continue;
		visited[i] = 1;
		postdfs(i);
		cout << now << ' ';
	}
}
void init() {
	for (int i = 0; i < 7; i++)
		visited[i] = 0;
}
int N, E,start;
void input() {
	cin >> N >> E;
	cin >> start;
	for (int i = 0; i < E; i++) {
		int A, B;
		cin >> A >> B;
		arr[A].push_back(B);
	}
}
int main() {
	input();
	visited[start] = 1;
	cout << start << ' ';
	predfs(start);
	init();
	cout << endl;
	visited[start] = 1;
	postdfs(start);
	cout << start;
	return 0;
}



//#include <iostream>
//#include <vector>
//using namespace std;
//
////int arr[7][7] = { 0,0,0,0,0,0,0,
////				0,0,1,0,1,0,0,
////				0,1,0,1,0,0,0,
////				0,0,1,0,0,0,0,
////				0,1,0,0,0,1,1,
////				0,0,0,0,1,0,0,
////				0,0,0,0,1,0,0
////};
//bool visited[7] = { 0 };
//vector<int> arr[100];
//void predfs(int now) {
//	for (int i = 6; i >= 1; i--) {
//		//if (arr[now][i] == 0) continue;
//		if (visited[i] == 1) continue;
//		visited[i] = 1;
//		cout << i << ' ';
//		predfs(i);
//	}
//}
//void postdfs(int now) {
//	for (int i = 6; i >= 1; i--) {
//		//if (arr[now][i] == 0) continue;
//		if (visited[i] == 1) continue;
//		visited[i] = 1;
//		postdfs(i);
//		cout << i << ' ';
//	}
//}
//void init() {
//	for (int i = 0; i < 7; i++)
//		visited[i] = 0;
//}
//int N, E, start;
//void input() {
//	cin >> N >> E;
//	cin >> start;
//	for (int i = 0; i < E; i++) {
//		int A, B;
//		cin >> A >> B;
//		arr[A].push_back(B);
//		arr[B].push_back(A);
//	}
//}
//int main() {
//	input();
//	visited[start] = 1;
//	cout << start << ' ';
//	predfs(start);
//	init();
//	cout << endl;
//	visited[start] = 1;
//	postdfs(start);
//	cout << start;
//	return 0;
//}