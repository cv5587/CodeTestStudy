#include <iostream>
using namespace std;
//���� �� ���ϱ�
int main()
{
	int Num;
	string tmp;
	int iResult = 0;

	cin >> Num;
	
	cin >> tmp;

	for (int i = 0; i < Num; i++)
	{
		iResult += tmp[i] - '0';	
	}

	cout << iResult;
}
//7,000,000,000,000,000,000,000,000