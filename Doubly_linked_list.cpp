#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node*next;
    Node*prev;

    Node(int d)
    {
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
    
    // ~Node()
    // {
    //     int value=this->data;
    //     if(next!=NULL)
    //     {
    //         delete next;
    //         next=NULL; 
    //     }
    //     cout<<"memory free for Data: "<<value<<endl;
    // }
};

void InsertAtHead(Node*&head,int d)
{
    Node*temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void InsertAtLast(Node*&last,int d)
{
    Node*temp=new Node(d);
    last->next=temp;
    temp->prev=last;
    last=temp;
}

void InsertAtPosition(Node* &last,Node* &head,int pos ,int d)
{

    //Insert At First.....
    if(pos==1)
    {
        InsertAtHead(head,d);
        return;
    }

    else
    {
        Node*temp=head;
        int cnt=1;
        while(cnt<pos-1)
        {
            temp=temp->next;
            cnt++;
        }


        //Insert At Last....
        if(temp->next==NULL)
        {
            InsertAtLast(last,d);
            return;
        }

        //Insert At Middle......
        Node*creatnewnode=new Node(d);
        creatnewnode->next=temp->next;
        temp->next->prev=creatnewnode;
        temp->next=creatnewnode;
        creatnewnode->prev=temp;
    }
}

void DeletElement(Node*&head,int pos)
{
    if(pos==1)
    {
        Node*temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }

    
    else
    {
        Node*current=head;
        Node*previous=NULL;

        int cnt=1;
    
        while(cnt<pos)
        {
            previous=current;
            current=current->next;
            cnt++;
        }

        current->prev=NULL;
        previous->next=current->next;
        current->next=NULL;
        delete current;
    }
}

void PrintElement(Node* &head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLenght(Node* &head)
{
    int len=0;
    Node*temp=head;
    while(temp!=NULL)
    {
       len++;
        temp=temp->next;
    }
    return len;
}

int main()
{
    Node*node1=new Node(20);
    cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    // cout<<node1->prev<<endl;

    Node*head=node1;
    Node*last=node1;

    cout<<"Insert At Head (30): "<<endl;
    InsertAtHead(head,30);
    PrintElement(head);

    cout<<"Insert At Last (50): "<<endl;
    InsertAtLast(last,50);
    PrintElement(head);

    cout<<"Insert At any Position (90 add at Pos 2): "<<endl;
    InsertAtPosition(last,head,2,90);
    PrintElement(head);

    cout<<"Deletion Of Nodes: "<<endl;
    DeletElement(head,2);
    PrintElement(head);

    cout<<"Lenght of Nodes: "<<getLenght(head)<<endl;


return 0;
}







// ///.........<<<<If Node is Empty>>>>>>>>>.......
// //                |
// //                |
// //                |
// //                |



// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node*next;
//     Node*prev;

//     Node(int d)
//     {
//         this->data=d;
//         this->next=NULL;
//         this->prev=NULL;
//     }
// };

// void InsertAtHead(Node*&last,Node*&head,int d)
// {

//     //Empty Node.....
//     if(head==NULL)
//     {
//         Node*temp=new Node(d);
//         head=temp;
//         last=temp;
//     }
//     else
//     {
//        Node*temp=new Node(d);
//        temp->next=head;
//        head->prev=temp;
//        head=temp;
//     }
// }

// void InsertAtLast(Node*&last,Node*&head,int d)
// {

//     //Empty node...
//     if(last==NULL)
//     {
//         Node*temp=new Node(d);
//         last=temp;
//         head=temp;
//     }
//     else
//     {
//        Node*temp=new Node(d);
//        last->next=temp;
//        temp->prev=last;
//        last=temp;
//     }
// }

// void InsertAtPosition(Node* &last,Node* &head,int pos ,int d)
// {

//     //Insert At First.....
//     if(pos==1)
//     {
//         InsertAtHead(last,head,d);
//         return;
//     }

//     else
//     {
//         Node*temp=head;
//         int cnt=1;
//         while(cnt<pos-1)
//         {
//             temp=temp->next;
//             cnt++;
//         }


//         //Insert At Last....
//         if(temp->next==NULL)
//         {
//             InsertAtLast(last,head,d);
//             return;
//         }

//         //Insert At Middle......
//         Node*creatnewnode=new Node(d);
//         creatnewnode->next=temp->next;
//         temp->next->prev=creatnewnode;
//         temp->next=creatnewnode;
//         creatnewnode->prev=temp;
//     }
// }

// void PrintElement(Node* &head)
// {
//     Node*temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

// int getLenght(Node* &head)
// {
//     int len=0;
//     Node*temp=head;
//     while(temp!=NULL)
//     {
//        len++;
//         temp=temp->next;
//     }
//     return len;
// }

// int main()
// {
//     //Node is Empty......
//     Node*head=NULL;
//     Node*last=NULL;

//     cout<<"Insert At Head (30): "<<endl;
//     InsertAtHead(last,head,30);
//     PrintElement(head);

//     cout<<"Insert At Last (50): "<<endl;
//     InsertAtLast(last,head,50);
//     PrintElement(head);

//     cout<<"Insert At any Position (90 add at Pos 2): "<<endl;
//     InsertAtPosition(last,head,2,90);
//     PrintElement(head);

//     cout<<"Lenght of Nodes: "<<getLenght(head)<<endl;


// return 0;
// }