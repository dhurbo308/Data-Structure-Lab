/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[10]={8,4,6,1,6,9,6,1,9,8};
    int n,count=0;
    cout<<"Input a number to search :";
    cin>>n;
    for(int i=0;i<10;i++)
    {
        if(A[i]==n)
        {
            count++;
        }
    }
    cout<<"The number occurs "<<count<<" time in the array";

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

void S_function(int A[],int m,int n)
{
    int count=0;
    for(int i=0;i<m;i++)
    {
        if(A[i]==n)
        {
            count++;
        }
    }
    cout<<"The number occures "<<count<<" time in the array";

}
int main()
{
    int A[10]={8,4,6,1,6,9,6,1,9,8};
    int n;
    cout<<"Input a number to search :";
    cin>>n;
    S_function(A,10,n);
    return 0;
}
















































