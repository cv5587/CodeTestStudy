#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, M;

	cin >> N >> M;

	vector<int> A (N, 0);

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	sort(A.begin(), A.end());

	int S = 0;
	int Count = 0;
	int StartIndex = 0, EndIndex = N-1;
	while (StartIndex <  EndIndex  )
	{
		if (A[StartIndex] + A[EndIndex] < M) {
			StartIndex++;
		}
		else if (A[StartIndex] + A[EndIndex] > M)
		{
			EndIndex--;
		}
		else {
			Count++;
			StartIndex++;
			EndIndex--;
		}

	}
	cout << Count << "\n";
}

//문제의 포인트는 2개를 이용해서 이므로 양쪽에서 차차 줄여가면서 해야된다.