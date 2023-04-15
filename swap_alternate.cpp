#include <iostream>
using namespace std;

int swapAlter(int n, int a[])
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(a[i], a[i + 1]);
        }
    }

    cout << "Swap Alternate:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ends;
    }
}

int main()
{
    int n, i, a[100];
    cout << "Enter the number:";
    cin >> n;
    cout << "Enter the array:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    swapAlter(n, a);
}