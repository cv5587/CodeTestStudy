//평균
#include <iostream>
#include <vector>
#include <string>
using namespace std;

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