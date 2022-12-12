#include<iostream>
using namespace std;

int binary_Search(int *a,int n,int data)
{
    int mid,low,high;
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==data)
        {
            return data;
        }
        if(a[mid]<data)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}

int main()
{
    int a[]={11,12,13,14,15,16,17,18};
    int n=8,m=17;
    int result=binary_Search(a,n,m);
    cout<<result<<" was found "<<endl;


    return 0;
}
