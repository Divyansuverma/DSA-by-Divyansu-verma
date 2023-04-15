#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define n 20
class guddu
{
    int *arr;
    int front;
    int back;                                            //............Array Impletation.....

public:
   guddu()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }
    
    //Enqueu....
    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "queue is overflow: " << endl;
            return;
        }
        back++;
        arr[back] = x;

        if (front == -1)
        {
            front++;
        }
    }
    
    //Dequeue.....
    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "queue is Empty: " << endl;
            return;
        }
        front++;
    }

    int peak()
    {
        if (front == -1 || front > back)
        {
            cout << "queue is Empty: " << endl;
            return -1;
        }

        return arr[front];
    }

    void empty()
    {
        if (front == -1 || front > back)
        {
            cout<<"Queue is empty: "<<endl;
        }
        else
         cout<<"Queue is not empty: "<<endl;
    }
};

int main()
{
    guddu q;
    q.push(1);
    q.push(3);
    q.push(4);
    q.push(6);

    cout << "peak element "<<q.peak()<<endl;
    q.pop();
    cout << "peak element "<<q.peak()<<endl;
    q.pop();
    cout << "peak element "<<q.peak()<<endl;
    q.pop();
    q.empty();
    cout << "peak element "<<q.peak()<<endl;
    q.pop();
    q.empty();
    return 0;
}