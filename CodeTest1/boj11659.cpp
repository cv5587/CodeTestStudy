//���� �� ���ϱ�4 11659
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N,SNum;
	cin >> N >> SNum;
	int A[100001] = {};

	for (int i = 1; i <= N; i++)
	{
		int tmp;
		cin >> tmp;
		A[i] = A[i - 1]+tmp;
	}


	for (int i = 0; i < SNum; i++)
	{
		int min, max;
		cin >> min >> max;
		cout << A[max] - A[min - 1] << "\n";
	}

}

//�ð��ʰ��� ���ֶ�
//endl ���� "\n"�� �̿��Ͽ� �ٹٲ� �����ϱ�
