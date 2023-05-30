#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;
    // constructor call
    Student(int r,int c,char s,char *n)
    {
        roll=r;
        cls=c;
        section=s;
        strcpy(name,n);

    }
};

int main()
{
    Student rahim(29,11,'A',"Rahim Uddin Hawladar");
    Student Karim(119,12,'d',"Karim Uddin ");
    Student Afif(12,9,'B',"Afif hossain Uddin Hawladar");
    cout<< Afif.name<<endl;
    cout<<rahim.name;

  

    return 0;
}