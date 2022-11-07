#include<bits/stdc++.h>
using namespace std;
int k=0;
int main()
{
 int array_1[5]={1,2,3,4,5};
 int array_2[6]={1,2,9,6,7,8};
 int array_3[5];

 for(int i=0; i<5; i++)
 {
     for(int j=0;j<6;j++)
     {
     if(array_1[i]==array_2[j])
     {
         array_3[k]=array_1[i];
         k++;
     }
     }
 }
 cout<<"Common element of two array :";
 for(int i=0;i<k;i++)
 {
     cout<<array_3[i]<<" ";
 }
    return 0;
}


