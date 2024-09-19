//평균 1546
#include<bits/stdc++.h>
using namespace std;

#pragma region 해설
int main()
{
	int N = 0;
	int A[1000];
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	long sum = 0;
	long max = 0;

	for (int i= 0; i < N; i++)
	{
		if (A[i] > max) {
			max = A[i];
		}
		sum = sum + A[i];
	}
	double result = sum * 100.0 / max / N;
	cout << result;
}
#pragma endregion
//조금더 생각하고 쓰기 쉬운 vector를 쓸려고만 하지말고 기본적으로 더 짧게 할수 있으면 짧게 가보자
//cin 같은 경우에는 띄어쓰기도 1회로 인정을 해주기 때문에 띄어쓰기 있다고 getline을 쓰지말자

#pragma region 내가푼거
/*
int main()
{
	int N, Arr[1000] = { 0 };
	string strScore;
	int HighScore=0;
	float SumScore=0.f;
	float fResult;

	cin >> N;
	cin.ignore();

	getline(std::cin,strScore);

	string tmp;
	vector<char> vecTmp;
	vector<int> vecScore;
	for (int i = 0; i < strScore.length()+1; i++)
	{
		if (' ' == strScore[i] || i == strScore.length() )
		{
			for (int i =0 ; i < vecTmp.size() ; i++)
			{
				tmp += vecTmp[i];
			}

			int iScore = stoi(tmp);
			if (HighScore < iScore)
			{
				int iScr = HighScore;
				HighScore = iScore;
				iScore = iScr;
			 }
			vecScore.push_back(iScore);

			vecTmp.clear();
			tmp.clear();

		}
		else
		{
			vecTmp.push_back(strScore[i]);
		}

	}

	for (int i = 0; i < vecScore.size(); i++)
	{
		SumScore += (float)vecScore[i] / (float)HighScore * 100.f;
	}

	fResult = (SumScore + 100.f) / (float)N;
	std::cout << fResult;
}
*/
#pragma endregion