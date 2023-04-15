#include <iostream>
using namespace std;

int findUnique(int n, int a[])
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ a[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        ans = ans ^ i;
    }
    cout << "Find of unique = " << ans;
}

int main()
{
    int n, i, a[100];
    cout << "Enter the number:";
    cin >> n;

    cout << "Enter the array:";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    findUnique(n,a);
}