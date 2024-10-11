#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, M;
	cin >> N >> M;

	vector<long> S;
	S.resize(N, 0);
	vector<long> C;	
	C.resize(M, 0);

	long Result = 0;

	cin >> S[0];
	for (int i = 1; i < N; i++)
	{
		int Tmp=0;
		cin >> Tmp;
		S[i]=S[i-1] + Tmp;
	}

	for (int i = 0; i < N; i++)
	{
		int remainder = S[i] % M;

		//0인 자체가 0부터 i까지의 구간 합이 이미 M으로 나누어 떨어진다는 뜻임
		if (0 == remainder)
			Result++;

		C[remainder]++;
	}
	for (int i = 0; i < M; i++)
	{
		if (C[i] > 1) {
			Result = Result + (C[i] * (C[i] - 1) / 2);
			//C[j]개 중에 2개를 뽑는 경우의수 계산 공식 -> C[i]*(C[i]-1)/2
		}
	}
	cout << Result << "\n";

}