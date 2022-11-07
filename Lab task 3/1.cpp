
#include<bits/stdc++.h>
using namespace std;

/*1 6 7 9
2 4 8 5
3 1 9 4*/
int main()
{
    int Matrix_1[3][4] = {{1,6,7,9},{2,4,8,5},{3,1,9,4}};


    //for transpose
    cout << "\nTranspose Matrix: \n";
    int Trans_Mat[10][10];

    int trow = 3; //transpose row
    int tcol = 4; //transpose column

    for(int i=0; i<trow; i++){
        for(int j=0; j<tcol; j++){
            Trans_Mat[j][i] = Matrix_1[i][j];
        }
    }

    for(int i=0; i<tcol; i++){
        for(int j=0; j<trow; j++){
            cout << Trans_Mat[i][j] << " ";
        }
        cout << "\n";
    }

    cout<<endl;
}

