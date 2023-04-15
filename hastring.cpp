#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
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

void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(Node *&head, int pos, int d)
{
    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void DeletionElement(int pos, Node *&head)
{
    if (pos == 1)
    {
        // Delete First....
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // Delete Middle and Last...
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void Display(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // int ch;
    // cout << "1. Insert At Head:" << endl
    //     << "2. Insert At Last: " << endl
    //     << "3. Insert At Position: " << endl
    //     << "4. Exit " << endl
    //     << "Enter___";
    // cin >> ch;

    Node *node1 = new Node(10);
    cout << node1->data << endl;

    Node *head = node1;
    Node *Tail = node1;

    cout << endl
         << "Insert At Head: " << endl;
    InsertAtHead(head, 15);
    InsertAtHead(head, 20);
    InsertAtHead(head, 25);
    InsertAtHead(head, 40);
    Display(head);

    cout << endl
         << "Insert At Tail: " << endl;
    InsertAtTail(Tail, 30);
    InsertAtTail(Tail, 40);
    InsertAtTail(Tail, 60);
    InsertAtTail(Tail, 80);
    Display(head);

    cout << endl
         << "Insert At Position 7: " << endl;
    InsertAtPosition(head, 7, 90);
    Display(head);

    cout << endl
         << "Deletion of Node: " << endl;
    DeletionElement(1, head);
    Display(head);

    return 0;
}