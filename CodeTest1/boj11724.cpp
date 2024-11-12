#include <bits/stdc++.h>	
using namespace std;
vector<bool> Checkbox;//방문배열
vector<vector<int>> A;	
void DFS(int v);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, M;
	cin >> N >> M;


	A.resize(N+1);

	for (int i = 1; i <= M; i++)
	{
		int node, edge;
		cin >> node >> edge;
		A[node].push_back(edge);
		A[edge].push_back(node);//양방향 넣기
	}

	Checkbox = vector<bool>(N + 1, false);

	int count = 0;

	for (int i = 1; i < N+1; i++)
	{
		if (!Checkbox[i])
		{
			count++;
			DFS(i);
		}
	}

	cout << count << "\n";
}

void DFS(int v)
{
	if (Checkbox[v])
		return;

	Checkbox[v] = true;

	for (int i : A[v])
	{
		if (false==Checkbox[i])
		{
			DFS(i);
		}
	}
}