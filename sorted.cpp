#include <iostream>
using namespace std;
int main()
{
    int n, i, j, a[100];

    cout << "Enter the array size:";
    cin >> n;

    cout << "enter the array:";
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    cout << "sorted element";
    {
        for (i = 1; i <= n; i++)
        {
            cout << a[i]<<endl;
        }
    }
}