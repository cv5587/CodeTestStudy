#include<bits/stdc++.h>

using namespace std;

struct compare {
	bool operator()(int o1, int o2) {
		int first_abs = abs(o1);
		int second_abs = abs(o2);
		if (first_abs == second_abs)
		{
			return o1 > o2;
		}
		else
		{
			return first_abs > second_abs;
		}
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;

	cin >> N;
	
	priority_queue<int ,vector<int>, compare> B;

	for (int i = 0; i < N; i++)
	{
		int A;
		cin >> A;

		if (0 != A)
		{
			B.push(A);	
		}
		else
		{
			if (B.empty())
			{
				cout << "0\n";
			}
			else
			{
				cout << B.top() << '\n';
				B.pop();
			}
		}
	}
}