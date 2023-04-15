// #include<iostream>
// using namespace std;
// int main()
// {
//     //Declaring the variable for the program.
//     int arr[100], i, elem,n;
//     cout<<"enter the size of array:"<<endl;
//     cin>>n;
//     //Taking the input from the user
//     cout<<"Enter the Array Elements: "<<endl;
//     for(i=0; i<n; i++)
//         cin>>arr[i];
//     //Taking the elements of the array
//     cout<<"\nEnter Element to Insert: ";
//     cin>>elem;
//     arr[i] = elem;
//     //Taking the elements to insert in the array
//     cout<<"\nThe New Array is:\n";
//     for(i=0; i<n+1; i++)
//         cout<<arr[i]<<"  ";
//     cout<<endl;
//     return 0;
// }



#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3]={9,9,9};
    int s,n=3;
    for(int i=0;i<n;i++)
    {
       s=a[n-i]+1;
           cout<<"MK= "<<s;
    }
return 0;
}