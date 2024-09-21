#include <bits/stdc++.h>	
using namespace std;

int CheckArr[4];
int MyArr[4];
int CheckSecret = 0;
void Add(char c);
void Remove(char c);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int S, P;
	cin >> S >> P;

	string A;

	cin >> A;

	int Result = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> CheckArr[i];
		if (CheckArr[i] == 0)
		{
			CheckSecret++;
		}
	}

	for (size_t i = 0; i < P; i++)
	{
		Add(A[i]);
	}
	if (CheckSecret == 4) {
		Result++;
	}
	for (int i = P; i < S; i++)
	{
		int j = i - P;
		Add(A[i]);
		Remove(A[j]);

		if (CheckSecret == 4)
		{
			Result++;
		}
	}

	cout << Result << "\n";
}

void Add(char c)
{
	switch (c)
	{
	case 'A':
		MyArr[0]++;
		if (MyArr[0] == CheckArr[0])
			CheckSecret++;
		break;
	case 'C':
		MyArr[1]++;
		if (MyArr[1] == CheckArr[1])
			CheckSecret++;
		break;
	case 'G':
		MyArr[2]++;
		if (MyArr[2] == CheckArr[2])
			CheckSecret++;
		break;
	case 'T':
		MyArr[3]++;
		if (MyArr[3] == CheckArr[3])
			CheckSecret++;
		break;

	default:
		break;
	}
}

void Remove(char c)
{
	switch (c)
	{
	case 'A':
		if (MyArr[0] == CheckArr[0])
			CheckSecret--;
		MyArr[0]--;
		break;
	case 'C':
		if (MyArr[1] == CheckArr[1])
			CheckSecret--;
		MyArr[1]--;
		break;
	case 'G':
		if (MyArr[2] == CheckArr[2])
			CheckSecret--;
		MyArr[2]--;
		break;
	case 'T':
		if (MyArr[3] == CheckArr[3])
			CheckSecret--;
		MyArr[3]--;
		break;

	default:
		break;
	}
}