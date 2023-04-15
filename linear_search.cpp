#include <iostream>
using namespace std;

int main()
{
    int n, item, flag,i,x;
    cout << "Enter the value" << endl;
    cin >> n;
    int a[n];
    cout << "Enter the array" << endl;
    for (int i = 0; i < n; i++)
    {
        
        cin >> a[i];
    }

    cout << "find the linear value" << endl;
    cin >> item;
    for (int i = 0; i < n; i++)
    {
        if (item == a[i])
        {
            flag = 1;
            x=i;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "search found at location "<<x<< endl;
    }
    else
        cout << "search at not found" << endl;

    return 0;
}

// #include<iostream>
// using namespace std;

// class serch
// {
//   public:
//   int linear(int arr[],int n , int k)
//   {
//     for(int i=0;i<n;i++)
//     {
//       if(arr[i]==k)
//       {
//         return i;
//       }
//     }
//     return -1;
//   }

// };

// int main()
// {
//   int arr[5]={2,7,3,8,4};
//   int k=3;
//   serch s;
//   int set=s.linear(arr,5,3);
//   cout<<"SErch= "<<set;
// }