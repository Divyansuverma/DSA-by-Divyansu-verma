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

    for(int i=1;i<n;i++)
    {
        int current=a[i];
        int j=i-1;
        while(a[j]>current && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }  
        a[j+1]=current;
    }
     
    cout<<"Insertation Sort: "<<endl; 
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
return 0;
}