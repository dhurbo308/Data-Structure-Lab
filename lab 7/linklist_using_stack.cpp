#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
struct Node* next;
};
struct Node *head=NULL;

void push(int value)
{
struct Node *n1;
n1= new Node();
n1->data =value;
n1->next =NULL;
if(head==NULL)
{
head=n1;
}
else
{
n1->next=head;
head=n1;
}
}

void pop()
{
    struct Node *temp=head;
    head=temp->next;
    delete temp;
}

void printStack()
{
    struct Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
          temp=temp->next;
    }
    cout<<"-----------"<<endl;

}

int stackSize()
{
    int c=0;
     struct Node *temp=head;
    while(temp!=NULL){
        c++;
          temp=temp->next;
    }
    return c;

}
int top()
{
    return head->data;
}

int stackSum()
{
      int c=0;
     struct Node *temp=head;
    while(temp!=NULL){
        c=c+temp->data;
          temp=temp->next;
    }
    return c;
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    printStack();
    pop();
    printStack();
    cout<<stackSize()<<endl;
    cout<<top()<<endl;
    cout<<stackSum()<<endl;
    cout<<stackSum()/(double)stackSize()<<endl;

    return 0;
}

