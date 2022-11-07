#include<bits/stdc++.h>
using namespace std;

void odd(int start_N,int end_N)
{
    for(int i=start_N; i<=end_N; i++)
    {
        if(i%2!=0)
        {
            cout<<i<<" ";
        }
    }
}

 int main()
 {
    int start_N,end_N;

    cout<<"Enter starting value :";
    cin>>start_N;

    cout<<"Enter ending vlaue :";
    cin>>end_N;

    cout<<"Odd numbers are between the range :";
    odd(start_N,end_N);

     return 0;
 }
