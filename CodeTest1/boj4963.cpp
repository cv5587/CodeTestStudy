#include<bits/stdc++.h>

using namespace std;

static int mapq[50][50];
static bool visited[50][50] = { false };
int dx[8] = { 1,1,0,-1,-1,-1,0,1 }, dy[8] = { 0,1,1,1,0,-1,-1,-1 };
int w, h;

void dfs(int y, int x)
{
	for (int i = 0; i < 8; i++)
	{
		int nextX = x + dx[i];
		int nextY = y + dy[i];
		if (nextX < 0 || nextY < 0 || nextX >= w || nextY >= h)
			continue;

		if (!visited[nextY][nextX] && mapq[nextY][nextX])
		{
			visited[nextY][nextX] = true;
			dfs(nextY, nextX);
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	while (true)
	{
		int cnt = 0;
		cin >> w >> h;

		if (0 == w && 0 == h)
			break;
		
		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
				cin >> mapq[i][j];

		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				if (!visited[i][j] && mapq[i][j])
				{
					visited[i][j] = 1;
					dfs(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
		memset(visited, false, sizeof(visited)*sizeof(bool	));
	}

}