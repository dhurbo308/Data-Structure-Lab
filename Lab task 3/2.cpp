#include <bits/stdc++.h>
using namespace std;

//function for encoding
void encode(string str, int j){

    int temp;

    for(int i=j; i<str.size(); i=i+j+1){
        temp = str[i];
        str[i] = (char)(temp + j);
    }
    cout << "\n--------------------------------------------------\n";
    cout << "\nConverted String: " << str;
}



int main()
{
    cout << "\n--------------------------------------------------\n";

    int j;
    string str;

    cout<< "Sample String(s): ";
    getline(cin,str);

    cout<< "Sample Integer(j): ";
    cin >> j;

    cout << "\nSample Integer: " << j;

    encode(str, j);



    return 0;
}

