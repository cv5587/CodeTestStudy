#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;

	cin >> N;

	queue<int> A;

	for (int i = 1; i <= N; i++)
	{
		A.push(i);
	}

	while (A.size()>1)
	{
		A.pop();

		A.push(A.front());

		A.pop();
	}

	cout << A.front();
}