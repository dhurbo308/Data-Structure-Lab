#include<iostream>
using namespace std;
int main()
{
     int a[10]={10,20,30,40,50,60,70,80,90,100};

     cout<<"Your element are :";
     for(int i=0;i<10;i++)
     {
         cout<<a[i]<<" ";
     }
     cout<<endl;
     cout<<"Reversed element are :";
     for(int i=9;i>=0;i--)
     {
         cout<<a[i]<<" ";
     }
    return 0;
}
