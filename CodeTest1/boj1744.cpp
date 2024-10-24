#include<bits/stdc++.h>	
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	//1���� ū ���
	//1�ǰ���
	//0�ǰ���
	//����

	int N;
	cin >> N;
	priority_queue<int> pq;
	priority_queue<int, vector<int>, greater<int>> minuspq;
	int zero = 0;
	int one = 0;

	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		if (1 < tmp)
			pq.push(tmp);
		else if (1 == tmp)
			one++;
		else if (0 == tmp)
			zero++;
		else
			minuspq.push(tmp);
	}

	int sum = 0;
	//���
	while (pq.size() > 1)
	{
		int first = pq.top();
		pq.pop();
		int second = pq.top();
		pq.pop();
		sum = sum + first * second;
	}
	//1
	if (!pq.empty())
	{
		sum = sum + pq.top();
		pq.pop();
	}
	// ����
	while (minuspq.size() > 1)
	{
		int first = minuspq.top();
		minuspq.pop();
		int second = minuspq.top();
		minuspq.pop();
		sum = sum + first * second;
	}
	//0
	if (!minuspq.empty())
	{
		if (0 == zero)
		{
			sum = sum + minuspq.top();
			minuspq.pop();
		}
	}

	sum = sum + one;
	cout << sum << "\n";
}