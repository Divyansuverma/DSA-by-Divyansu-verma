#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter the number:";
    cin >> n;
    int ans = 0;
    i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }

    cout << "answer = " << ans;
}


// class Solution{
//     public:
//     long long int minValue(int a[], int b[], int n)
//        {
//           for (int i = 0; i < n - 1; i++)
//             {
//                 for (int j = i + 1; j < n; j++)
//                 {
//                     if (a[i] > a[j])
//                     {
//                         int temp = a[i];
//                         a[i] = a[j];
//                         a[j] = temp;
//                     }

//                     if (b[i] > b[j])
//                     {
//                         int temp = b[i];
//                         b[i] = b[j];
//                         b[j] = temp;
//                     }
//                 }
//             }
//            int l = n;
//            int i=0,sum;
//            while (i < n)
//             {
//                sum = b[i] * a[l - 1] + sum;
//                l--;
//                i++;
//             }
//              return sum;
//        }
// };

// //{ Driver Code Starts.
// int main()
//  {
//      int t;
//      cin>>t;
//      while(t--)
//      {
//          int n, i;
//          cin>>n;
//          int a[n], b[n];
//          for(i=0;i<n;i++)
//          cin>>a[i];
//          for(i=0;i<n;i++)
//          cin>>b[i];
//          Solution ob;
//          cout<< ob.minValue(a, b, n) <<endl;
//      }
	
// 	return 0;
// }
// // } Driver Code Ends