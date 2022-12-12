#include<bits/stdc++.h>
using namespace std;

void selection_short(int *arr,int n)
{
    int indexOfMin,temp;

    for(int i=0;i<n-1;i++)
    {
      indexOfMin=i;
      for(int j=i+1; j<n;j++)
      {
          if(arr[j]<arr[indexOfMin])
          {
              indexOfMin=j;
          }
      }
      temp=arr[i];
      arr[i]=arr[indexOfMin];
      arr[indexOfMin]=temp;
    }
}




void PrintArray(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={8,0,7,1,3};
    int n=5;
    PrintArray(arr,n);
    selection_short(arr,n);
    PrintArray(arr,n);
 return 0;
}
