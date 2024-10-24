#include<bits/stdc++.h>	
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;

	cin >> N;

	int data1 = 0;
	int data2 = 0;
	priority_queue<int, vector<int>, greater<int>> pq;
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		pq.push(tmp);
	}

	while (pq.size() !=1)
	{
		data1 = pq.top();
		pq.pop();
		data2 = pq.top();
		pq.pop();

		sum += data1 + data2;
		pq.push(data1 + data2);

	}
	cout << sum << "\n";
}