#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N,Snum;

	cin >> N>>Snum;

	vector<vector<int>> A(N + 1, vector<int>(N + 1, 0));
	vector<vector<int>> S(N + 1, vector<int>(N + 1, 0));


	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> A[i][j];
			S[i][j] = S[i][j - 1]+S[i-1][j]-S[i-1][j-1] + A[i][j];
		}
	}

	for (int i = 0; i < Snum; i++)
	{
		int x1, y1, x2, y2;
		cin >> SI>> EI>> SJ>> EJ;
		int Result = S[SJ][EJ] - S[SI - 1][EJ] - S[SJ][EI - 1] + S[SI - 1][SJ - 1];
		cout << Result << "\n";
	}

}