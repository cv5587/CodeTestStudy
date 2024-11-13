#include<bits/stdc++.h>

using namespace std;
static bool arrive;
static vector<bool> visited;
static vector<vector<int>>A;
void DFS(int now, int depth);
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, M;
	arrive = false;
	cin >> N >> M;



	A.resize(N);

	for (int i = 0; i < M; i++)
	{
		int node, edge;
		cin >> node >> edge;
		A[node].push_back(edge);
		A[edge].push_back(node);
	}
	visited = vector<bool>(N, false);

	for (int i = 0; i < N; i++)
	{
		DFS(i, 1);
		if (arrive)
			break;
	}

	if (arrive)
		cout << 1 << "\n";
	else
		cout << 0 << "\n";

}

void DFS(int now, int depth)
{
	if (depth == 5|| arrive) {
		arrive = true;
		return;
	}
	visited[now] = true;

	for (int i : A[now])
	{
		if (!visited[i])
		{
			DFS(i, depth + 1);
		}
	}
	visited[now] = false;
}