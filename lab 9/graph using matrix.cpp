/*#include<bits/stdc++.h>
using namespace std;


void PrintMatrix(int **p,int n){
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<<p[i][j]<<" ";
    }
    cout<<endl;
}
}
int main()
{
    int v,edge;
    cin>>v>>edge;
    //Dynamic memory allocation for matrix
    int **m=new int *[v];
    for(int i=0;i<v;i++)
    {
        m[i]=new int[v];
    }
    //int m[7][7];

    //Default value initialization
    for(int i=0;i<v; i++)
    {
        for(int j=0;j<v;j++)
        {
            m[i][j]=2;
        }
    }

    int u1,v1;
    for(int i=0;i<edge;i++)
    {
        cin>>u1>>v1;
        m[u1][v1]=1;//directed graph matrix
    }
    PrintMatrix(m,v);
    return 0;
}*/
/*7 10
0 2
1 0
1 3
2 4
3 0
3 4
4 5
4 6
5 2
6 3*/
//repeat code
#include<bits/stdc++.h>
using namespace std;
void PrintMatrix(int **a,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int vertex,edge;
    cin>>vertex>>edge;
    //Dynamic memory allocation
    int **M=new int*[vertex];
    for(int i=0;i<vertex;i++)
    {
        M[i]=new int[vertex];
    }
//initialization
for(int i=0;i<vertex;i++)
{
    for(int j=0;j<vertex;j++)
    {
        M[i][j]=0;
    }
}

int u,v;
for(int i=0;i<edge;i++)
{
    cin>>u>>v;
    M[u][v]=1;
}
  PrintMatrix(M,vertex);
    return 0;
}




























