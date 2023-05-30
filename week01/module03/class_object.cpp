#include<bits/stdc++.h>
using namespace std;
class Student
{
  public:
      char name[100];
      int roll;
      int cls;
      char section;

};

int main()
{
  Student rahim;
  rahim.roll=101;
  rahim.cls=9;
  rahim.section='A';
  char nm[100]="Rahim Ahsan Akondo";
  strcpy(rahim.name,nm);
  
  Student karim;
  karim.roll=105;
  karim.cls=10;
  karim.section='B';
  char nm2[100]="Karim Uddin Dofader";
  strcpy(karim.name,nm2);

   cout<<rahim.name<<endl;
   cout<<karim.name<<endl;
   cout<<rahim.section<<endl;

  

    return 0;
}