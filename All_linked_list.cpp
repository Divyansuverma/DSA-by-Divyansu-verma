// Online C++ compiler to run C++ program online
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class node
{
  public:
  int data;
  node*next;
  
  node( int val)
  {
      this->data=val;
      this->next=NULL;
  }
};

void InsertAtTail(node*&head,int d)
{
    node*data=new node(d);
    if(head==NULL)
    {
        head=data;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=data;
}

void InsertAtHead(node*&head,int d)
{
    node*temp=new node(d);
    temp->next=head;
    head=temp;
}

void serchElement(node*&head,int key)
{
    node*temp=head;
    while(temp->next!=NULL)
    {
        if(temp->data==key)
        {
            cout<<"Ok"<<endl;
            exit(0);
        }
        temp=temp->next;
    }
    cout<<"No"<<endl;
}

void DeletionAtHead(node*&head)
{
    node*todelete=head;
    head=head->next;
    
    delete todelete;
}

void DeleteNode(node*&head,int position)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        DeletionAtHead(head);
        return;
    }
    
    node*temp=head;
    while(temp->next->data!=position)
     {
         temp=temp->next;
     }
     node*todelete=temp->next;
     temp->next=temp->next->next;
     delete todelete;
}

node* reversElement(node*&head)
{
    node*previousptr=NULL;
    node*currentptr=head;
    node*nextptr;
    
    while(currentptr!=NULL)
    {
        nextptr=currentptr->next;
        currentptr->next=previousptr;
        
        previousptr=currentptr;
        currentptr=nextptr;
    }
    return previousptr;
}

node* reverseRecursive(node* &head)
{
    //bass
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    //recursive call......
    node*newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    
    return newhead;
}

node* reverseK(node*&head,int k)
{
    node*prevptr=NULL;
    node*currptr=head;
    node*nextptr;
    
    int count=0;
    while(currptr!=NULL && count < k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL)
    {
       head->next=reverseK(nextptr,k);
    }
    
    return prevptr;
    
}

void display(node*&head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main() {
    
    node*head=NULL;
    InsertAtTail(head,20);
    InsertAtTail(head,30);
    InsertAtTail(head,40);
    InsertAtTail(head,50);
    display(head);
    InsertAtHead(head,15);
    InsertAtHead(head,10);
    display(head);
    serchElement(head,90);
    DeleteNode(head,15);
    display(head);
    DeletionAtHead(head);
    display(head);
    // node* newhead = reversElement(head);
    // display(newhead);
    // node* newhead = reverseRecursive(head);
    // display(newhead);
    int k=3;
    node*newhead=reverseK(head,k);
    display(newhead);
    
    return 0;
}