#include<bits/stdc++.h>
using namespace std;

#pragma region ���� Ǭ��
/*
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;
	
	int StartIdx=1, EndIdx=1;
	cin >> N;
	int Count = 1;
	int S = 0;
	for (StartIdx; StartIdx < N; StartIdx++)
	{
		S = 0;
		EndIdx = StartIdx;
		for (EndIdx; EndIdx <= N; EndIdx++)
		{
			S += EndIdx;
			if (S > N)
			{
				break;
			}
			else if (S == N)
			{
				Count++;
				break;
			}
		}
	}
	cout << Count << "\n";
}
*/
#pragma endregion
//�������� �� �ΰ��� �ε����� ������ �����ϴ� ���

#pragma region �ؼ�
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;

	int StartIdx = 1, EndIdx = 1;
	cin >> N;
	int Count = 1;
	int S = 1;

	while (EndIdx != N)
	{
		if (S == N)
		{
			Count++;
			EndIdx++;
			S = S + EndIdx;
		}
		else if (S > N)
		{
			S = S - StartIdx;
			StartIdx++;
		}
		else
		{
			EndIdx++;
			S = S + EndIdx;
		}
	}


	cout << Count << "\n";
}
#pragma endregion
