#include <iostream>
using namespace std;

int front = -1, rear = -1;

void insert(int arr[], int n)
{
    int elm;
    if (rear == n - 1)
    {
        cout << "Queue is Overflow: " << endl;
    }
    else
    {
        if (front == -1)
        {
            cout << "Insert the element: ";
            cin >> elm;
            rear++;
            arr[rear] = elm;
        }
    }
}

void Delete(int arr[])
{
    if (front == -1 || front > rear)
    {
        cout << "Queue Underflow " << endl;
        return;
    }
    else
    {
        cout << "Delete this Element from Queue: " << arr[front] << endl;
        front = front + 1;
    }
}

void Front(int arr[])
{
    if (front < 0)
    {
        cout << "Queue is empty: " << endl;
    }
    else
    {
        cout << "Front element: " << arr[front];
    }
}

void Display(int arr[])
{
    if (front == -1)
    {
        cout << "Queue is empty: " << endl;
    }
    else
    {
        cout << "All Queue element are: " << endl;
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
            cout << endl;
        }
    }
}

int main()
{
    int n, ch;
    cout << "Enter the Size: ";
    cin >> n;
    int arr[n];

    while (1)
    {
        cout << "Enter your choise: " << endl
             << "1. Insetation " << endl
             << "2. Deletion " << endl
             << "3. Display " << endl
             << "4. Exit " << endl
             << "5. Front: " << endl
             << "Enter___";
        cin >> ch;

        switch (ch)
        {
        case 1:
            insert(arr, n);
            break;

        case 2:
            Delete(arr);
            break;

        case 3:
            Display(arr);
            break;

        case 4:
            exit(0);
            break;
        case 5:
            Front(arr);
            break;

        default:
            cout << "SORRY! Your choise is Invaild. " << endl
                 << "Try again: " << endl;
        }
    }
    return 0;
}
