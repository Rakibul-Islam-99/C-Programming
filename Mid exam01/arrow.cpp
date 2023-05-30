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
        Student(int r,int c,char s,char*n)
        {
            roll=r;
            cls=c;
            section=s;
            strcpy(name,n);

        }
};

int main()
{
    char name[100]="Kalimuddin Dofadar";
   Student *kalim=new Student(29,12,'D',name);
  
   cout<<kalim->name<<endl;//use (->) sign
   cout<<kalim->roll<<endl;
   cout<<kalim->cls<<endl;
 cout<<kalim->section<<endl;

    return 0;
}