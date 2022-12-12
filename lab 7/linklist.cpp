/*#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
struct Node* next;
};
int main()
{
    Node *n1=new Node();
    n1->data=10;
    n1->next=NULL;

    Node *n2=new Node();
    n2->data=20;
    n2->next=NULL;

     Node *n3=new Node();
    n3->data=30;
    n3->next=NULL;

    n1->next=n2;
    n2->next=n3;

    Node *head =n1;
    Node *temp=n1;
   // while(temp!=NULL){
     //   cout<<temp->data<<" ";
       //   temp=temp->next;
    //}
    while(n1->next!=NULL){
        cout<<n1->data<<" ";
        n1=n1->next;
    }
    cout<<n1->data<<endl;


    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
 Node* next;
};
 Node *head=NULL;

void insert_first(int value)
{
 Node *n1= new Node();
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
     Node *temp=head;
    head=temp->next;
    delete temp;
}
void traversal()
{
     Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
          temp=temp->next;
    }
    cout<<"-----------"<<endl;

}

int main()
{
    insert_first(10);
    insert_first(20);
    insert_first(30);
    insert_first(40);
    traversal();
    deleteform_begining();
    traversal();

    return 0;
}*/

//DS LAB

/*#include<bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node* next;
};

Node* head=NULL;

void insert_first(int data)
{
    Node* NewNode=new Node();
    NewNode->data=data;
    NewNode->next=NULL;
    if(head==NULL)
    {
        head=NewNode;
    }
    else{
        NewNode->next=head;
        head=NewNode;
    }
}

void delete_first()
{
    Node* temp=head;
    head=temp->next;
    delete temp;
}

void traversal()
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<"******************"<<endl;
}

int main()
{
    insert_first(10);
    insert_first(20);
    insert_first(30);
    insert_first(40);
    insert_first(50);

    traversal();

    delete_first();
    delete_first();
    delete_first();

    traversal();
    return 0;
}*/

//DS CLASS

#include<bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node* next;
};

Node* head;
Node* GetNewNode(int x)
{
    Node* NewNode=new Node();
    NewNode->data=x;
    NewNode->next=NULL;
    return NewNode;
}

void insert_first(int data)
{
    Node* NewNode=GetNewNode(data);
    if(head==NULL)
    {
        head=NewNode;
    }
    else{
        NewNode->next=head;
        head=NewNode;
    }

}
void insert_last(int data)
{
    Node* NewNode=GetNewNode(data);
    Node* temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NewNode;
}

void insert_any_position(int data,int pos)
{
    Node* NewNode=GetNewNode(data);
    Node* temp=head;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    NewNode->next=temp->next;
    temp->next=NewNode;
}
void delete_first()
{
    Node* NewNode=head;
    head=head->next;
    delete NewNode;
}

void delete_last()
{
    Node* NewNode=head;
    Node* temp=head;
    int cnt=0;
    while(NewNode->next!=NULL)
    {
        NewNode=NewNode->next;
        cnt++;
    }
    for(int i=1;i<cnt;i++)
    {
        temp->next=NULL;
        delete NewNode;
    }
}

void traversal()
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<"*************"<<endl;
}

int main(){
insert_first(10);
insert_first(20);

traversal();

insert_last(30);

traversal();

insert_any_position(40,2);
traversal();

delete_first();
traversal();

delete_last();
traversal();
return 0;
}




























