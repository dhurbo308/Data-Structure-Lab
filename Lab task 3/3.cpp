
#include<bits/stdc++.h>
using namespace std;

struct Student{
    int uId;
    int credit;
    float cgpa;
};

int main()
{
    struct Student s[10];
    int i, n = 0;
    bool isUsed[10] = {0};

    cout << "\n--------------------------------------------------\n";

    for(i = 0; i<10; i++){
        cout<< "Please enter the id of serial no of " << (i+1) << " student: "<< endl << endl;
        cout<< "Enter Student ID: ";
        cin>>n;

        if(n>= 0 || n<=10){
            if(isUsed[n] == false){

                s[n].uId = n;
                isUsed[n] = true;
                cout<< "Enter Completed Credits: " ;
                cin>> s[n].credit;
                cout<< "Enter CGPA: ";
                cin>> s[n].cgpa;
            }
            else{
                cout<< "Student ID already taken: "<<endl;
                i--;
            }
        }

        else{
            cout<< "Invalid! Valid ID from 0 to 10"<<endl;
            i--;
        }
    }

    cout<< "Students who have CGPA more than 3.75: "<<endl;

    for(int i=0; i<10; i++){
        if(s[i].cgpa> 3.75){
            cout<< "Student ID: "<< s[i].uId<<endl;
        }
    }

    cout<< "Students who have completed more than 50 credits: "<<endl;

    for(int i=0; i<10; i++){
        if(s[i].credit> 50){
            cout<< "Student ID: "<< s[i].uId<<endl;
        }
    }

 return 0;
}

