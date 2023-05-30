// Object declarations
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
  
  
  Student karim;// declare object
  karim.roll=105;
  karim.cls=10;
  karim.section='B';
  char nm2[100]="Karim Uddin Dofader";
  strcpy(karim.name,nm2);

   cout<<karim.name<<endl;
  
    return 0;
}