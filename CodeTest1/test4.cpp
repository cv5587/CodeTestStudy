#include <bits/stdc++.h>

using namespace std;

string ltrim(const string&);
string rtrim(const string&);



/*
 * Complete the 'minDeletions' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */
int iCount=0;
int minDeletions(vector<int> arr) {
    for (int i = 0; i < arr.size()-1; i++)
    {
        for (int j = 0; j < arr.size()-1-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr.erase(arr.begin() + j + 1);
                j--;
                iCount++;
            }
        }
    }
    if (0 == iCount)
        return iCount;
    else
        return iCount-1;
}

int main()
{
   // ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    int result = minDeletions(arr);

    cout << result << "\n";

   // fout.close();

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
