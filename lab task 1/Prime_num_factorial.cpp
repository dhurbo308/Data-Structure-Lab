#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
  int flag=1;
for(int i=2; i<n;i++)
{
    if(n%i==0){
        flag=0;
        break;
    }
}
return flag;
}

void factorial(int n){
int result=1;
for(int i=n;i>=1;i--){
    result=result*i;
}
cout<<result;
}


int main()
{
    int n=5;
    if(isPrime(n))
    {
      factorial(n);
    }
    else
    {
        cout<<"Not a prime number";
    }

    return 0;
}
