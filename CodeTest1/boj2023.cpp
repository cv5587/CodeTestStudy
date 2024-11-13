#include<bits/stdc++.h>

using namespace std;
static vector<int>A;
static int N;
void DFS(int n, int j);
bool isPrime(int num);
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	DFS(2, 1);
	DFS(3, 1);
	DFS(5, 1);
	DFS(7, 1);


}
void DFS(int n, int j)
{
	if (j == N)
	{
		if (isPrime(n)) {
			cout << n << "\n";
		}
		return;
	}

	for (int i = 1; i < 10; i++)
	{
		if (i % 2 == 0) {
			continue;
		}
		if (isPrime(n * 10 + i)) {
			DFS(n * 10 + i, j + 1);
		}

	}
}

bool isPrime(int num)
{
	for (int i = 2; i <= num/2; i++)
	{
		if (num % i == 0) {
			return false;
		}
	}

	return true;
}