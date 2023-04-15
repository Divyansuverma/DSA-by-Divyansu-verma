#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int top = -1;

void push(int n, int arr[])
{
    int item;
    if (top >= (n - 1))
    {
        cout << "Stack is Overflow: ";
    }
    else
    {
        cout << "Enter the push element: ";
        cin >> item;
        top++;
        arr[top] = item;
        cout << "Push this element: " << arr[top] << endl;
    }
}

void pop(int arr[])
{
    if (top < 0)
    {
        cout << "Stack is Overflow: " << endl;
    }
    else
    {
        cout << "Pop this element: " << arr[top] << endl;
        top--;
    }
}

void Empty(int n)
{
    if (top < 0 || top > (n - 1))
    {
        cout << "Stack is Empty: " << endl;
    }
    else
    {
        cout << "Stack is not Empty: " << endl;
    }
}

void Top(int arr[])
{
    if (top < 0)
    {
        cout << "Stack is Empty: So not parsent element in Top Position: " << endl;
    }
    else
    {
        cout << "Top value is " << arr[top] << endl;
    }
}

void DisplayAllElement(int arr[])
{
    if (top < 0)
    {
        cout << "Stack is Overflow: " << endl;
    }
    else
    {
        for (int i = top; i >= 0; i--)
            cout << arr[i] << endl;
    }
}

int main()
{
    int n, ch;
    cout << "Enter the size of stack: ";
    cin >> n;
    int arr[n];

    while (1)
    {
        cout << endl<<"Enter your Choise: " 
             << "1. Push " 
             << "2. Pop " 
             << "3. Empty " 
             << "4. Top " 
             << "5. Display All elements: " 
             << "6. Exit " << endl
             << "Enter____";
        cin >> ch;

        switch (ch)
        {
        case 1:
            push(n, arr);
            break;

        case 2:
            pop(arr);
            break;

        case 3:
            Empty(n);
            break;

        case 4:
            Top(arr);
            break;

        case 5:
            DisplayAllElement(arr);
            break;

        case 6:
            exit(0);

        default:
            cout << endl<<" SORRY! Your choise is invailde: ";
            break;
        }
    }

    return 0;
}