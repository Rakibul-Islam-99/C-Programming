#include<bits/stdc++.h>
using namespace std;
void My_swap(int *a, int *b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
int main()
{
    int a,b;
    cin>>a>>b;
    My_swap(&a,&b);
    cout<<a<<" "<<b<<endl;


    return 0;
}