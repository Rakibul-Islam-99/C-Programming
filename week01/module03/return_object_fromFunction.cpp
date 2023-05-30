#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(int r,int c, char s, char *n)
        {
            roll=r;
            cls=c;
            section=s;
            strcpy(name,n);
        }

};

Student fun()
{
    char name[100]="Rahim Ullah Futfutani";
    Student rahim(29,12,'A',name);
    return rahim;
}
Student fun2()
{
    char name[100]="Habibur Basa Limon";
    Student h(39,9,'D',name);
    return h;
}

int main()
{
  Student rahim= fun();
  cout<<rahim.roll<<endl;
  cout<<rahim.cls<<endl;
  cout<<rahim.section<<endl;
  cout<<rahim.name<<endl;

  Student h= fun2();
  cout<<h.roll<<endl;
  cout<<h.cls<<endl;
  cout<<h.section<<endl;
  cout<<h.name<<endl;

    return 0;
  
}