#include <iostream>
using namespace std;
int main()
{
    int array_1[3][3],array_2[3][3],array_3[3][3],sum[3][3];
    int i,j;

    cout<<"Enter element of first matrix :"<<endl;
    for(i=0;i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter element array_1["<<i<<j<<"] :";
            cin>>array_1[i][j];
        }
    }

    cout<<"Enter element of second matrix :"<<endl;
    for(i=0;i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter element array_2["<<i<<j<<"] :";
            cin>>array_2[i][j];
        }
    }

    cout<<"Enter element of third matrix :"<<endl;
    for(i=0;i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter element array_3["<<i<<j<<"] :";
            cin>>array_3[i][j];
            sum[i][j]=array_1[i][j]+array_2[i][j]+array_3[i][j];
        }
    }

    cout<<"Sum of three matrix : "<<endl;
    for(i=0;i<3; i++)
    {
        for(j=0;j<3;j++)
        {

           cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
