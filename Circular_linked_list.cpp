#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node*next;

    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }

    ~Node()
    {
        int value=this->data;
        if(this->data!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"memory free for Data: "<<value<<endl;
    }
};

void InsertAtHead(Node*&head,int d)
{

}


void PrintElement(Node*&head)
{

}


int main()
{
    
return 0;
}