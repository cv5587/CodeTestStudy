#include <bits/stdc++.h>

using namespace std;

string ltrim(const string&);
string rtrim(const string&);



/*
 * Complete the 'sumVips' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY score
 *  2. INTEGER guilder_count
 *  3. INTEGER k
 */
long sum = 0;
long deletenum = 0;
vector<int> vecLeft;
vector<int> vecRight;
void split(vector<int> score,  int k);

long sumVips(vector<int> score, int guilder_count, int k) {

    vector<int> newscore(score);

    for (int i = 0; i < guilder_count; i++)
    {
        split(newscore, k);

        if (vecLeft.back() >= vecRight.back())
        {
            sum += vecLeft.back();
            deletenum= vecLeft.back();
            vecLeft.pop_back();
        }
        else
        {
            sum += vecRight.back();
            deletenum = vecRight.back();
            vecRight.pop_back();
        }

        for (int i = 0; i< newscore.size() ; i++)
        {
            if (deletenum == newscore[i])
            {
                newscore.erase(newscore.begin() + i);
                deletenum =0;
                vecLeft.clear();
                vecRight.clear();
                break;
            }
        }

    }
    return sum;
}

void split(vector<int> score, int k)
{
    for (int i = 0; i < k; i++)
    {
        vecLeft.push_back( score[i]);
    }
    sort(vecLeft.begin(), vecLeft.end());

    for (int i = k+1; i < score.size() ; i++)
    {
        vecRight.push_back( score[i]);
    }
    sort(vecRight.begin(), vecRight.end());

}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    string score_count_temp;
    getline(cin, score_count_temp);

    int score_count = stoi(ltrim(rtrim(score_count_temp)));

    vector<int> score(score_count);

    for (int i = 0; i < score_count; i++) {
        string score_item_temp;
        getline(cin, score_item_temp);

        int score_item = stoi(ltrim(rtrim(score_item_temp)));

        score[i] = score_item;
    }

    string guilder_count_temp;
    getline(cin, guilder_count_temp);

    int guilder_count = stoi(ltrim(rtrim(guilder_count_temp)));

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    long result = sumVips(score, guilder_count, k);

    cout << result << "\n";

    //fout.close();

    return 0;
}

string ltrim(const string& str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string& str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
