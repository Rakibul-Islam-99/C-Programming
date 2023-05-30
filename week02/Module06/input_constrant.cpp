#include<bits/stdc++.h>
using namespace std;
void fun(int a[],int n)
{
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
            swap(a[i],a[j]);
        }
       }
       cout<<a[i]<<" ";
    }

}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    fun(ar,n);
    cout<<endl;
    
    string s("Hello World!",4);
    cout<<s<<endl;
  

    return 0;
}