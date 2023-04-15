#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class guddu
{
    Node* front;
    Node* back;
    
    public:
    guddu()
    {
        front=NULL;
        back=NULL;
    }

    void push(int x)
    {
        Node* n=new Node(x);
        if(front==NULL)
        {
            back=n;
            front=n;
            return;
        }
        back->next=n;
        back=n;
    }

    void pop()
    {
        if(front==NULL)
        {
            cout<<"Queue is underflow: "<<endl;
            return;
        }
        Node* todelete=front;
        Node* temp=front->next;
        todelete->next=NULL;
        front=temp;
        delete todelete;
    }

    int peak()
    {
        if(front==NULL)
        {
            cout<<"Empty queue: "<<endl;
            return -1;
        }
        return front->data;
    }

    void empty()
    {
        if(front==NULL)
        {
           cout<<"Queue is empty: "<<endl;
        }
        else
        cout<<"Queue is not empty: "<<endl;
    }
};

int
main()
{
    guddu q;
    q.push(1);
    q.push(3);
    q.push(4);
    q.push(6);

    cout << "peak element "<<q.peak()<<endl;
    q.pop();
    cout << "peak element "<<q.peak() <<endl;
    q.pop();
    cout << "peak element "<<q.peak()<<endl;
    q.pop();
    q.empty();

    return 0;
}