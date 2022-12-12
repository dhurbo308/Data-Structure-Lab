#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
Node *next;
};
Node *head;
Node* GetNewNode(int x)
{
    Node* NewNode=new Node();
    NewNode->data=x;
    NewNode->next=NULL;
    return NewNode;
}
void InsertAtHead(int x)
{
    Node* NewNode=GetNewNode(x);
    NewNode->next=head;
    head=NewNode;
}
void InsertAtTail(int x)
{
    Node* NewNode=GetNewNode(x);
    if(head==NULL)
    {
        head=NewNode;
        return;
    }
    Node* temp=head;
    while(temp->next !=NULL)
    {
        temp=temp->next;
    }
    temp->next=NewNode;
}
void InsertAtAnyPosition(int n,int x)
{
    Node* NewNode=GetNewNode(x);
    if(n==1)
    {
        NewNode->next=head;
        head=NewNode;
        return;
    }
    Node* temp=head;
    for(int i=1;i<n-1;i++)
    {
        temp=temp->next;
    }
    NewNode->next=temp->next;
    temp->next=NewNode;
}
void Traverse()
{
    Node* temp=head;
    cout<<"List is: ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void Search(int x)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==x){
            cout<<"Found "<<endl;
            return;
            }
            temp=temp->next;
    }
    cout<<"Not found"<<endl;
}
int main()
{
    head=NULL;
    InsertAtHead(5);
    InsertAtHead(6);
    InsertAtHead(7);
    InsertAtHead(8);
    Traverse();

    InsertAtTail(9);
    InsertAtTail(10);
    Traverse();

    InsertAtAnyPosition(2,11);
    Traverse();

    Search(10);

    return 0;
}
