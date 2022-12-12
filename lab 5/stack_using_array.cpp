#include<bits/stdc++.h>
using namespace std;
#define n 6
int arr[6];
int top=-1;

bool isfull()
{
    if(top==n-1)
    {
        return true;
    }
    return false;
}
bool isEmpty()
{
    if(top<=0)
    {
        return true;
    }
    else
        return false;
}

void push(int data)
{
    if(isfull())
    {
        cout<<"Stack is overflow"<<endl;
    }
    else{
    top++;
    arr[top]=data;
    }
}
void display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;

}
void pop()
{
    if(isEmpty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
            arr[top];
          top--;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    //push(40);
    display();
    pop();
    display();

    return 0;
}
