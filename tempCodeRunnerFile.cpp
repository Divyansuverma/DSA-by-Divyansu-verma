
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int A1[N],A2[M];
    for (int i = 0; i < N; i++)
    {
        cin >> A1[i];
    }

    for (int i = 0; i < M; i++)
    {
        cin >> A2[i];
    }

    vector<int> v;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (A2[i] == A1[j])
            {
                v.push_back(A2[j]);
                continue;
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        cout<<v[i]<<" ";
    }
}