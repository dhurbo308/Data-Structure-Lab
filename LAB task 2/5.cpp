#include <bits/stdc++.h>
using namespace std;
int main()
 {
    int  count,visited[10];


    int arr[]={8,4,6,1,6,9,6,1,9,8} ;


    cout<<endl;
    for(int i=0; i<10; i++)
    {
        if(visited[i] == 1)
        continue;
        count = 0;
        for(int j=0; j<10; j++){
        if(arr[i] == arr[j]){

        visited[j] = 1;
        count++;
            }
        }
        cout << arr[i] << " occurs = " << count << " times"<<endl;
    }

    return 0;
}

