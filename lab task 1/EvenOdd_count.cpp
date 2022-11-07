
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[10]={12 ,32 ,43, 1 ,54 ,53 ,15, 64, 3 ,13};

   int even_count=0;
    for(int i=0; i<10;i++)
    {
       if(arr[i]%2==0)
       {
        even_count++;
       }
    }
  cout<<even_count<<" even numbers"<<endl;

  int odd_count=0;
  for(int i=0; i<10;i++)
  {
      if(arr[i]%2!=0)
      {
          odd_count++;
      }
  }
  cout<<odd_count<<" odd numbers"<<endl;
    return 0;
}
