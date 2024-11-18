#include<bits/stdc++.h>

using namespace std;

static vector<vector<int>>A;
static vector<bool>visited;
void DFS(int n);
void BFS(int n);
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, M, Start; 
	cin >> N >> M>> Start;

	A.resize(N+1);

	for (int i = 0; i < M; i++)
	{
		int node, edge;
		cin >> node >> edge;
		A[node].push_back(edge);
		A[edge].push_back(node);
	}

	visited = vector<bool>(N + 1, false);
	for (int i = 1; i <= N; i++)
	{
		sort(A[i].begin(), A[i].end());
	}

	DFS(Start);

	cout << "\n";

	fill(visited.begin(), visited.end(), false);

	BFS(Start);

	cout << "\n";
}

void DFS(int n)
{
	cout << n << " ";
	visited[n] = true;

	for (int i : A[n])
	{
		if (!visited[i])
			DFS(i);
	}
}

void BFS(int n)
{
	queue<int> myqueue;
	myqueue.push(n);
	visited[n] = true;

	while (!myqueue.empty())
	{
		int now_node = myqueue.front();
		myqueue.pop();

		cout << now_node << " ";

		for (int i : A[now_node])	//A 가 가지고 있는걸 넣는다
		{
			if (!visited[i])
			{
				visited[i] = true;
				myqueue.push(i);
			}
				
		}
	}
}