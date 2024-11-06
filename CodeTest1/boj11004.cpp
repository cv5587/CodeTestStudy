#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<int> &A , int S , int E ,int K);
int partition(vector<int> &A, int S, int E);
void swap(vector<int> , int i , int j);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, K;
    cin >> N >>K;
    vector<int> A(N,0);

    for(int i=0; i<N; i++)
    {
        cin>>A[i];
    }
    
    quickSort(A,0,N-1,K-1);
    
    cout<<A[K-1 ];
}

