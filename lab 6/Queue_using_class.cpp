#include<bits/stdc++.h>
using namespace std;

class Queue{
private:
    int n;
    int *a;//T *a;
    int fornt;
    int rear;
    int counter;
    int elecount;
public :
    Queue()
    {
        n=10;
        a=new int[n];
        //a=new T[n];
        fornt=0;
        rear=0;
        counter=0;
       elecount=0;
    }
 Queue(int n)
    {
        this->n=n;
        a=new int[n];
        fornt=0;
        rear=0;
        counter=0;
        elecount=0;
    }

    int elementcount()
    {
        for(int i=fornt;i<rear;i++)
        {
            elecount++;
        }
        return elecount;
    }

    bool isEmpty()
{
    if(fornt==0 && rear==0)
    {
        return true;
    }
    return false;
}

bool isFull()
{
    if(rear==n-1)
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

};


int main()
{
    Queue q;//Queue<integer> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.dequeue();
    q.printQueue();
    cout<<"Total element in the queue: "<<q.elementcount()<<endl;
    return 0;
}
