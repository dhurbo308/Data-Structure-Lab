#include<bits/stdc++.h>
using namespace std;

/*void bubble_short(int *arr,int n)
{
    int temp;
    for(int i=0;i<n-1;i++)//number of pass
    {
        for(int j=0;j<n-1-i;j++)//number of comparisons
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}*/


void bubble_shortAdapted(int *arr,int n)
{
    int temp;
    int isShorted=0;
    for(int i=0;i<n-1;i++)//number of pass
    {
        cout<<"Working for pass"<<i+1<<endl;
        isShorted=1;
        for(int j=0;j<n-1-i;j++)//number of comparisons
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isShorted=0;
            }
        }
        if(isShorted)
        {
            return;
        }
    }
}


void Print_array(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int arr[]={12,3,4,1,6,5};
    //int arr[]={1,2,3,4,5,6};
    int n=6;
    Print_array(arr,n);//before shorting the arry
    bubble_shortAdapted(arr,n);//shorting function
    Print_array(arr,n);//after shorting the arry

    return 0;
}
