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
    Person *hablu= new Person(name,166.2,25);//creat dynamic object
    cout<<hablu->name<<endl;
    cout<<hablu->height<<endl;
    cout<<hablu->age<<endl;
  

    return 0;
}