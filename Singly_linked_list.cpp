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

      // Memory free....
    //  ~Node()
    //  {
    //      int value=this->data;
    //      if(this->data!=NULL)
    //      {
    //          delete next;
    //          this->next=NULL;
    //      }
    //      cout<<"Memory is free for Node with the Node: "<<value<<endl;
    //  }
};

void InsertAthead(Node* &head,int d)
{
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;
}

void InsertAtLast(Node* &last,int d)
{
    Node*temp=new Node(d);
    last->next=temp;
    last=temp;
}

void InsertAtMiddle(Node* &head,int pos,int d)
{

    //Insert at 1st Position.....
    if(pos==1)
    {
        InsertAthead(head,d);
        return;
    }
    Node*temp=head;
    int cnt=1;
    while(cnt<pos-1)
    {
        temp = temp->next;
        cnt++;
    }

    Node*insertnode=new Node(d);
    insertnode->next=temp->next;
    temp->next=insertnode;
}

void DeletionElement(Node*&head,int pos)
{
   if(pos==1)
   {
    Node*temp=head;
    head=temp->next;
    temp->next=NULL;
    delete temp;
   }

   else
   {
    Node*currenrt=head;
    Node*previous=NULL;

    int cnt=1;
    while(cnt<pos)
    {
        previous=currenrt;
        currenrt=currenrt->next;
        cnt++;
    }
    previous->next=currenrt->next;
    currenrt->next=NULL;
    delete currenrt;
   }
}

void PrintElemment(Node* &head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* node1=new Node(10);
    cout<<node1->data<<endl;

    Node*head=node1;
    Node*last=node1;

    cout<<"Insert At Head (20): "<<endl;
    InsertAthead(head,20);
    PrintElemment(head);

    cout<<"Insert at Last (50): "<<endl;
    InsertAtLast(last,50);
    PrintElemment(head);

    cout<<"Insert At Midddle (80 add at Position 2): "<<endl;
    InsertAtMiddle(head,2,80);
    PrintElemment(head);

    cout<<"Dletetion of Node (Position 3): "<<endl;
    DeletionElement(head,3);
    PrintElemment(head);

return 0;
}
