#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  //Sorting 
  sort(a,a+n);// choto theke boro
  //sort(a,a+n,greater<int>());//boro theke choto sorting


  for(int i=0;i<n;i++)
  {
    cout<<a[i]<< " ";
  }

    return 0;
}