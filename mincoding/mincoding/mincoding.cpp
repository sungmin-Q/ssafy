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
		if (now.accCost > dist[now.node]) continue;
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