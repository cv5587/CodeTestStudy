//이진탐색
#include<bits/stdc++.h>

using namespace std;

vector<int> A;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N; 
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		A.push_back(tmp);
	}

	sort(A.begin(), A.end(), less<int>());//오름차순
	//sort(A.begin(), A.end(), greater<int>());내림차순

	int M;
	cin >> M;

	for (int i = 0; i < M; i++)
	{
		bool find = false;
		int target;
		cin >> target;

		int start = 0;
		int end = A.size() - 1;

		while (start<=end)
		{
			int midi = (start + end) / 2;
			int midV = A[midi];

			if (midV > target)
			{
				end = midi - 1;
			}
			else if (midV < target)
			{
				start = midi + 1;
			}
			else
			{
				find = true;
				break;
			}

			if (find)
				cout << "1" << "\n";
			else
				cout << "0" << "\n";

		}
	}


}
