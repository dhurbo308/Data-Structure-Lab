/*#include<iostream>
using namespace std;

class Stack{
private:
    int top;
    int *arr;
    int m;
public :
    Stack(int n){
    top=-1;
    m=n;
    arr=new int[n];
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
        if(top<=0)
        {
            return true;
        }
        else
        {
         return false;
        }
    }


    void push(int data)
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
    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty."<<endl;
        }
        else{
            top--;
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

};
int main()
{
    Stack s(3);
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.pop();
    s.pop();
    //s.display();
    return 0;
}*/
//stack using template
/*#include<iostream>
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
        if(top<=0)
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

};

struct Student{
int id;
string name;
double cgpa;
};
int main()
{
    int n=10;
    Stack<string> s(n);
    s.push("mane");
    s.push("ksh");
    s.push("lsjkdfu");
    s.display();
    //s.pop();
    //s.pop();
    //s.pop();
    //s.display();
    return 0;
}*/
//using structure dynamic data type
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
        if(top<=0)
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

};

struct Student{
int id;
string name;
double cgpa;
};
int main()
{

Student s1={100,"DR",3.8};
Student s2={200,"gh",3.8};
Stack<Student> St(2);
St.push(s1);
St.push(s2);
Student s3=St.pop();
cout<<s3.id<<" "<<s3.name<<" "<<s3.cgpa<<endl;//show the poping value
    return 0;
}

