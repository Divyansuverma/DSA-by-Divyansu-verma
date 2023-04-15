#include <iostream>
using namespace std;

int main()
{
    int n, item, first, last, mid, loc;
    cout << "Enter the value" << endl;
    cin >> n;
    int a[n];
    cout << "Enter the array" << endl;
    for (int i = 0; i <= n; i++)
    {

        cin >> a[i];
    }

    cout << "find the linear value" << endl;
    cin >> item;

    first = 0;
    last = n + 1;
    mid = (first + last) / 2;

    while (first <= last)
    {

        if (a[mid] < item)
        {
            first = mid + 1;
        }
        else if (a[mid] == item)
        {
            cout << item << "is Found at loction " << mid + 1 << endl;
            break;
        }

        else
            last = mid - 1;
        mid = (first + last) / 2;
    }

    if ((first > last))
        cout << item << " is notperesent in the array." << endl;

    /*  printf("linner search\n");
      for (int i = 0; i < n; i++)
      {
          if (a[i] = item)
          {
              loc = i + 1;
              break;
          }
      }
      if (loc > 0)
      {
          printf("it is seccessfully");
      }

      else
      {
          printf("it is unseccessfull");
      }*/
    return 0;
}