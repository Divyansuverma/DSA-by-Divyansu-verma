// #include <iostream>
// using namespace std;

// int main()
// {
//     int i, n, a[100], item, low, high, mid, loc, null;

//     cout << "Enter the array size: ";
//     cin >> n;

//     cout << "Enter the array: " << endl;
//     for (i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     cout << "Search the Element:";
//     cin >> item;

//     low = 0;
//     high = n - 1;
//     mid = (low + high) / 2;

//     while (low <= high)
//     {

//         if (item > a[mid])
//         {
//             low = mid + 1;
//         }

//         else if(a[mid]==item)
//         {
//             cout << item << " is found "<<i << endl;
//             break;
//         }
//         else
//             high = mid - 1;
//             mid=(low+high)/2;
//     }

//     if (low>high)
//     {
//         cout<<item<<"is not present in the array"<<endl;
//     }
//     return 0;
// }

//......Binary Search.......
#include<iostream>
using namespace std;

class search
{
  public:
  int binn(int arr[],int n, int k)
  {
    int low=0;
    int high=n-1;
    int mid=(high+low)/2;
    while(low<=high)
    {
      if(arr[mid]==k)
      {
        return mid;
      }
      else if(arr[mid]<k)
      {
        low=mid+1;
      }

      else
      {
        high=mid-1;
      }
      mid=(high+low)/2;
    }
    return -1;
    
    
  }

};

int main()
{
  int arr[5]={1,2,3,4,6};
  int k=6;
  search s;
  int ser=s.binn(arr,5,6);
  cout<<"Search= "<<ser;

}
