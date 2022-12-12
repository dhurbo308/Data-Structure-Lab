#include<bits/stdc++.h>
using namespace std;

#define size 6
int fornt=0,rear=0,counter=0,a[size];
/*bool isEmpty()
{
    return fornt==rear:true?false;
}*/
bool isEmpty()
{
    if(fornt==0 && rear==0)
    {
        return true;
    }
    return false;
}
/*int isFull()
{
     return rear==size:1?0;
}*/
bool isFull()
{
    if(rear==size-1)
    {
        return true;
    }
    return false;
}
void enqueue(int value)
{
    if(isFull())
    {
        cout<<"Queue is full"<<endl;
    }
    else{
        a[rear]=value;
    rear++;
    counter++;
    }

}
int dequeue()
{
    if(isEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        int x=a[fornt];
        fornt++;
        counter--;
        return x;
    }
}

void printQueue()
{
    if(isEmpty())
    {
        cout<<"Queue is empty";
    }
    else
    {
        for(int i=fornt; i<rear;i++)
        {
         cout<<a[i]<<endl;
        }
    }
}



int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
   // enqueue(60);
    dequeue();
    printQueue();

    return 0;
}
