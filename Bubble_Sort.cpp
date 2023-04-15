#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[100];
    cout<<"Enter the size: ";
    cin>>n;

    cout<<"Enter the Array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j+1]<a[j])
            {
                swap(a[j+1],a[j]);
            }
        }
    }

    cout<<"Bubble Sort: "<<endl;
        for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

return 0;
}

