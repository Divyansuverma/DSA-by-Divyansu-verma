#include <iostream>
using namespace std;

int a = 90;
int b = 5;
int main()
{
    int a = 60;
    int b = 5;
    cout << endl;
    cout << "Local variale(a)=" << a << endl;
    cout << "Local variale(a)=" << b << endl;
    cout << endl;

    cout << "global variale(a)=" << ::a << endl;
    cout << "global variale(a)=" << ::b << endl;
    cout << endl;

    return 0;
}
