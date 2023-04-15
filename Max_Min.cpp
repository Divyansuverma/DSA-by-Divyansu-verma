#include <iostream>
using namespace std;

int getMax(int n, int a[])
{
    int max = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        // if (max < a[i])
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

int getMin(int n, int a[])
{
    int min = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}

int main()
{
    int n, a[100];
    cout << "enter the size:";
    cin >> n;

    cout << "Enter the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Maximum Value = " << getMax(n, a) << endl;
    cout << "Minimum Value = " << getMin(n, a);
}