#include<bits/stdc++.h>
using namespace std;
int my_min(int s, int t)
{ 
    if(s<t) return s;
    else return t;
}
int my_max(int s, int t)
{ 
    if(s<t) return t;
    else return s;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int min=my_min(a,b);
    int max=my_max(a,b);
    cout<<"min:"<<min<<"\n"<<"max:"<<max<<endl;

    return 0;
}