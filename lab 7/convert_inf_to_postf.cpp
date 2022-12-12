#include<iostream>
using namespace std;

template <typename T>

class Stack{
private:
    int top;
    T *arr;
    int m;
public :
    Stack(int n){
    top=-1;
    m=n;
    arr=new T[n];
    }

    bool isFull()
    {
        if(top==m-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isEmpty()
    {
        if(top<0)
        {
            return true;
        }
        else
        {
         return false;
        }
    }


    void push(T data)
    {
        if(isFull())
        {
            cout<<"Stack is overflow."<<endl;
        }
        else
        {
            top++;
            arr[top]=data;
        }
    }
    T pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty."<<endl;
        }
        else{
                T value=arr[top];
            top--;
        return value;
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
    int getSize()
   {
       return top;
   }

};
int main()
{
    int n=10;
    string ex="2+3-4";
    Stack<char> s(n);

    for(int i=0;i<ex.length();i++){
        if(ex[i]=='+'){
            s.push(ex[i]);
        }
        else if(ex[i]=='-'){
            s.push(ex[i]);
        }
        else{
            cout<<ex[i];
            if(s.getSize()!=-1)
            cout<<s.pop();
        }

    }

    return 0;
}
