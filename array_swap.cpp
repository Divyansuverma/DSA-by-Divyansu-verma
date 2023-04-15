#include <iostream>
using namespace std;
int reverse(int n, int a[])
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

int printing(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ends;
    }
}

int main()
{
    int n, a[100];
    cout << "Enter the array size:";
    cin >> n;

    cout << "Enter the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    reverse(n, a);
    printing(n, a);

    // cout << "Reverse array:" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i];
    // }
}

