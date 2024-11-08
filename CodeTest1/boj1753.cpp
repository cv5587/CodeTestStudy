#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> edge;
static int V, E, K;

//최단거리 저장 배열
static vector<int> mdistance;
//노드 사용 여부 저장
static vector<bool> visited;
//그래프 정보 저장 인접 리스트
static vector<vector<edge>> mlist;
//다익스트라 알고리즘 수행을 위한 우선 순위 큐
static priority_queue<edge, vector<edge>, greater<edge>> q;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> V >> E >> K;
	mdistance.resize(V + 1);
	fill(mdistance.begin(), mdistance.end(), INT_MAX);
	visited.resize(V + 1);
	fill(visited.begin(), visited.end(), false);
	mlist.resize(V + 1);

	for (int i = 0; i < E; i++)
	{
		int u, v, w;
		cin >> u >> v >> w;
		mlist[u].push_back(make_pair(v, w));
	}

	q.push(make_pair(0, K));
	mdistance[K] = 0;

	while (!q.empty())
	{
		edge current = q.top();
		q.pop();
		int c_v = current.second;
		if (visited[c_v]) {
			continue;
		}
		visited[c_v]=true;

		for (int i = 0; i < mlist[c_v].size(); i++)
		{
			edge tmp = mlist[c_v][i];
			int next = tmp.first;
			int value = tmp.second;

			if (mdistance[next] > mdistance[c_v] + value)
			{
				mdistance[next] = value + mdistance[c_v];
				q.push(make_pair(mdistance[next], next));
			}

		}
	}

	for (int i = 1; i <= V; i++)
	{
		if (visited[i])
		{
			cout << mdistance[i] << "\n";
		}
		else
		{
			cout << "INF" << "\n";
		}
	}

}