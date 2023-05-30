#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // dynamically allocating an integer memory
    int* p= new int;

    // storing a value at the memory pointed by p
    *p = 12;

    cout << "Value at memory pointed by p= " << *p;

    return 0;
}
