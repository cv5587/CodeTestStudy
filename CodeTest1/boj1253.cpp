#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;

	cin >> N;

	vector<int> A(N, 0);

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	sort(A.begin(), A.end());

	int i, j = 0;
	int Count = 0;

	for (int K = 0; K < N; K++)
	{
		long find = A[K];
		int i = 0;
		int j = N - 1;
	
		while (i<j)
		{
			if (A[i] + A[j] == find)
			{
				if (i != K && j != K) {
					Count++;
					break;
				}
				else if (i == K)
				{
					i++;
				}
				else if (j == K)
				{
					j--;
				}
			}
			else if (A[i] + A[j] < find)
			{
				i++;
			}
			else
			{
				j--;
			}
		}
	
	}

	cout << Count << "\n";

}


//���� ������ �״�� ���� ¥ ����
//�� �����ʹ� ���� ��Ŀ� ���� ������ ����ȭ �������� ������ ���� �˰� �־��