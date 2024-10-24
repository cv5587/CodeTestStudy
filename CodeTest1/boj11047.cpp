#include <bits/stdc++.h>
using namespace std;
//그리디 알고리즘 
//동전 개수의 최솟값 구하기
//탐욕 알고리즘 

//문제해결방식은 3단계를 반복하며 해결함
/*
1. 해선택 :현재 상태에서 가장 최선이라고 생각되는 해를 선택한다.(추려내기)
2. 적절성 검사 : 현재 선택한 해가 전체 문제의 제약 조건에 벗어나지 않는지 검사한다.(조건 부합 검사)
3. 해검사 : 현재까지 선택한 해 집합이 전체 문제를 해결할 수 있는지 검사한다. 전체 문제를 해결하지 못한다면 1.로 돌아가 같은 과정을 반복한다.
*/

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, K;

	cin >> N >> K;

	vector<int> A(N);

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	int count = 0;
	for (int i = N-1; i >= 0; i--)
	{
		if (A[i] <= K)
		{
			count += (K / A[i]);
			K = K % A[i];
		}

	}

	cout << count << "\n";

}