#include<bits/stdc++.h>

using namespace std;
typedef struct tEdge {
	int node;
	int distance;
}EDGE;
vector<vector<EDGE>> A;
vector<bool> visited;
vector < int > Distance;

void BFS(int s);
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;

	cin >> N;

	A.resize(N+1);
	visited = vector<bool>(N+1, false);
	Distance.resize(N+1);

	

	while (true)
	{
		int node;
		cin >> node;


		while (true)
		{

			int edge, dis;
			cin >> edge;

			if (-1 == edge)
				break;

			cin >> dis;
			EDGE pair;
			pair.node = edge;
			pair.distance = dis;
			A[node].push_back(pair);

		}


		if (node == N)
			break;
	}

	BFS(1);	
	int Max = 1;

	for (int i = 2; i <= N; i++)
	{
		if (Distance[Max] < Distance[i])
			Max = i;
	}
	fill(Distance.begin(), Distance.end(), 0);
	fill(visited.begin(), visited.end(), false);
	BFS(Max);

	sort(Distance.begin(), Distance.end());

	cout << Distance.back()<<"\n";
}

void BFS(int index)
{
	queue<int > myqueue;

	myqueue.push(index);
	visited[index] = true;

	while (!myqueue.empty())
	{
		int now_node = myqueue.front();
		
		myqueue.pop();
		
		for (EDGE i : A[now_node])
		{
			if (!visited[i.node])
			{
				visited[i.node] = true;
				myqueue.push(i.node);

				Distance[i.node] = Distance[now_node] + i.distance;
			}
		}
	}


}