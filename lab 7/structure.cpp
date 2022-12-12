/*#include<bits/stdc++.h>
using namespace std;
struct Student{
int id;
string name;
double cgpa;
};

int main()
{
    Student s[2];
    for(int i=0;i<2;i++)
    {
        cin>>s[i].id>>s[i].name>>s[i].cgpa;
    }
    for(int i=0;i<2;i++)
    {
        cout<<s[i].id<<" "<<s[i].name<<" "<<s[i].cgpa<<endl;
    }
   /* Student s1={1,"Dr",3.7};
    cout<<s1.id<<s1.name<<s1.cgpa<<endl;
    return 0;
}*/
//this problem using class
#include<bits/stdc++.h>
using namespace std;
class Student{
private :
    int id;
    string name;
    double cgpa;
public :
    Student(int id,string name,double cgpa)
    {
        this->id=id;
        this->name=name;
        this->cgpa=cgpa;
    }
    int getId()
    {
        return this->id;
    }
    string getName()
    {
        return this->name;
    }
    double getCgpa()
    {
        return this->cgpa;
    }


};
int main()
{
    Student *s1=new Student(100,"DR",3.8);
    cout<<s1->getId()<<" "<<s1->getName()<<" "<<s1->getCgpa()<<endl;

    return 0;
}
