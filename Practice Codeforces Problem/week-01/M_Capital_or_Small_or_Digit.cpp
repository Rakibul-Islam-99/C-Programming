#include<bits/stdc++.h>
using namespace std;
int main()
{
  char x;
  scanf("%c",&x);
  if(x>='a' && x<='z')
  {
    printf("ALPHA\n");
    printf("IS SMALL\n");
  }
  else if(x>='A' && x<='Z')
  {
    printf("ALPHA\n");
    printf("IS CAPITAL\n");

  }
  else{
    printf("IS DIGIT\n");
  }

  

    return 0;
}