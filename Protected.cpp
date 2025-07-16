#include<iostream>
#include<string>
using namespace std;

class Root {
private:
    int privateVariable;

public:
    int publicVariable;

protected:
    int protectedVariable;

public:
    int getProtectedVariable(){
        return protectedVariable;

    }

// public:
//     int takePrivateVariable() {
//         return privateVariable;
//     }
};

class Steam : public Root {
public:
    void setProtectedVariable(int x) {
        protectedVariable = x;
    }

// public:
//     void placePrivateVariable(int a) {
//         privateVariable = a;
//     }
};
int main() {
    Steam s;
    s.setProtectedVariable(10);
    cout<<"protected Variable"<<s.getProtectedVariable()<<endl;

    // s.placePrivateVariable(7);
    // cout<<"private Variable"<<s.takePrivateVariable()<<endl;
    return 0;
}