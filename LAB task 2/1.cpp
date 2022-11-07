#include<bits/stdc++.h>
using namespace std;
int j=0;
int main()
{
    int array_1[5]={10,20,30,40,50};
    int array_2[8]={1,2,3,4,5,6,7,8};
    int arr_merge[13];

    for(int i=0;i<5;i++)
    {
        arr_merge[j]=array_1[i];
        j++;
    }

    for(int i=0;i<8;i++)
    {
        arr_merge[j]=array_2[i];
     j++;
    }
    for(int i=12;i>=0;i--)
    {
        cout<<arr_merge[i]<<" ";
    }
    return 0;
}
