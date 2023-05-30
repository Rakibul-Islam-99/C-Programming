
#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;
    
    Student(int r,int c,char s,char *n)//Create constructor
    {
        roll=r;
        cls=c;
        section=s;
        strcpy(name,n);

    }
};

int main()
{
    Student rahim(29,11,'A',"Rahim Uddin Hawladar");// here rahim is an object
    cout<<rahim.name;

    return 0;
}