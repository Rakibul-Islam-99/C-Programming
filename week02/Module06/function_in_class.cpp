#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    string name;
    int age;
    int marks1;
    int marks2;
    person(string nm, int ag,int m1,int m2)
    {
        name=nm;
        age=ag;
        marks1=m1;
        marks2=m2;

    }
    void fun()
    {
        cout<<name<<" "<<age<<endl;
    }
    int total_marks()
    {
        return marks1+marks2;
    }

};
int main()
{
    person p("Rakibul Islam",23,85,97);
    // cout<<p.name<<" "<<p.age<<endl;
    p.fun();
    cout<<p.total_marks();
  

    return 0;
}