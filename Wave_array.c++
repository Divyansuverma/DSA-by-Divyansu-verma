#include <iostream>
using namespace std;

int main()
{
    int n, arr[100], i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp;
    int c = n;
    if (n % 2 != 0)
        c = n - 1;
    for (i = 0; i < c; i = i + 2)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}