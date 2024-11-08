#include <bits/stdc++.h>

using namespace std;

string ltrim(const string&);
string rtrim(const string&);



/*
 * Complete the 'Moves' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int Moves(vector<int> arr)
{
    int iCount = 0; 
    int Ed = sizeof(arr)/sizeof(int);
    bool bChange = false;

    while (!bChange)
    {
        bChange = true;

        for (int i = 0; i < Ed; i++)
        {
            if(0==arr[i]%2)
                
        }

    }
    return iCount;
}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

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

    int result = Moves(arr);

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
