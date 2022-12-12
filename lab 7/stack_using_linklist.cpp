#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
struct Node* next;
};
struct Node *head=NULL;

void insert_first(int value)
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
void deleteform_begining()
{
    struct Node *temp=head;
    head=temp->next;
    delete temp;
}
void traversal()
{
    struct Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
          temp=temp->next;
    }
    cout<<"-----------"<<endl;

}
void insert_end(int value)
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
{   struct Node *temp=head;
    while(temp->next!=NULL){
          temp=temp->next;
    }
    temp->next=n1;

}
}

int main()
{
    insert_first(10);
    insert_first(20);
    insert_first(30);
    insert_first(40);
    insert_end(60);
    traversal();
    deleteform_begining();
    traversal();

    return 0;
}

