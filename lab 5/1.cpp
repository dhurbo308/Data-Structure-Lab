#include<iostream>
using namespace std;

class Stack
{
public:
    int *a;
    int top,s;
    Stack(int s)
    {
        top=-1;
        this->s=s;
        a=new int[s];
    }
    bool isFull()
    {
        if(top==s-1)
        {
            return true;
        }
        return false;
    }
    bool isEmpty()
    {
        if(top<0)
        {
            return true;
        }
        return false;
    }
    void push(int data)
    {
        if(isFull())
        {
            cout<<"Stack OverFlowen "<<data<<endl;
        }
        else
        {
            top++;
            a[top]=data;
            cout<<"Data Inserted:"<<data<<endl;
        }
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack Empty"<<endl;
        }
        else
        {
            top--;
            cout<<"Data Removed "<<endl;
        }
    }
    void print()
    {
        for(int i=top;i>=0;i--)
        {
            cout<<"Datas:"<<a[i]<<endl;
        }
    }
};
int main()
{
    Stack st(5);
    st.push(10);
    st.push(11);
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);
    st.push(16);
    st.push(17);
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.print();
}
