#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'programmerStrings' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

//progame

void NewWord(int St, int Ed, string s);
void Add(char c);
bool Check();
void Sliding(int St, int Ed, string s);

static int iMyArr[7];
static int iCount = -1;

bool bFirst = false;
void Add(char c)
{
    switch (c)
    {
    case 'p':
        iMyArr[0]++;
        break;
    case 'r':
        iMyArr[1]++;
        break;
    case 'o':
        iMyArr[2]++;
        break;
    case 'g':
        iMyArr[3]++;
        break;
    case 'a':
        iMyArr[4]++;
        break;
    case 'm':
        iMyArr[5]++;
        break;
    case 'e':
        iMyArr[6]++;
        break;
    default:
        break;
    }
}
void NewWord(int St, int Ed,string s)
{
    for (int i = 0; i < 7;   i++)
    {
        iMyArr[i] = 0;
    }
    for (int i = St; i < Ed; i++)
    {
        Add(s[i]);
    }
}

bool Check()
{


    for (int i = 0; i < 7; i++)
    {
        switch (i)
        {
        case 0:
            if (1 > iMyArr[i])
                return false;
            break;
        case 1:
            if (3 > iMyArr[i])
                return false;
            break;
        case 2:
            if (1 > iMyArr[i])
                return false;
            break;
        case 3:
            if (1 > iMyArr[i])
                return false;
            break;
        case 4:
            if (1 > iMyArr[i])
                return false;
            break;
        case 5:
            if (2 > iMyArr[i])
                return false;
            break;
        case 6:
            if (1 > iMyArr[i])
                return false;
            break;
        default:
            break;
        }
        

    }
    return true;
}

void Sliding(int St, int Ed, string s)
{

    Add(s[Ed]);
}

int programmerStrings(string s) {


    int St=0, Ed = 10;

    NewWord(St,Ed,s);

    while (true)
    {
        if (Check())
        {
            if (!bFirst)
            {
                St = Ed + 1;
                if (Ed + 10 > s.length())
                    Ed = s.length();
                else
                    Ed += 10;

                bFirst = true;
                NewWord(St, Ed, s);
            }
            else
                if (-1 == iCount)
                    return 0;
                else
                    return iCount;
        }
        else
        {
            if (Ed < s.length())
            {
                Sliding(St, Ed, s);
                St++;
                Ed++;
                if (bFirst)
                    iCount++;
            }
            else
                if (-1 == iCount)
                    return 0;
                else
                    return iCount;
        }
    }


}

int main()
{
   // ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = programmerStrings(s);

    cout << result << "\n";

   // fout.close();

    return 0;
}


