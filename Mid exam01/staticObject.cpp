#include<bits/stdc++.h>
using namespace std;
class StaObject {
public:
    StaObject() {
      cout<<"Constructor called"<<endl;
    }
    
    void displayMsg() {
        cout << "I am a static object!" <<endl;
    }
};

StaObject& getStaObject() {
    static StaObject obj;  // Static object declaration
    return obj;
}

int main() {
    StaObject& staObj = getStaObject();
    staObj.displayMsg();

    return 0;
}
