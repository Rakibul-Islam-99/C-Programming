#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    char name[100];
    float height;
    int age;
    Person(char *n,float h,int a)// create constructor
    {
        height=h; 
        age=a;
        strcpy(name,n);
    }

};
int main()
{
    char name[100]="Habib Hossain Hablu";
    Person *person1= new Person(name,166.23,29);//creat dynamic object
   
    char name2[100]="Junayed hossain Gablu";
    Person *person2= new Person(name2,157.45,27);//creat dynamic object
  if(person1->age>person2->age)
  {
    cout<<person1->name<<endl;
  }
  else{
    cout<<person2->name<<endl;
  }
  
    return 0;
}