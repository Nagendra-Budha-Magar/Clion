#include<iostream>
using namespace std;

class Base {
public:
    int age;
    Base() {
        cout<<"constructor"<<endl;
    }

    Base (const Base& b) {
        age = b.age;
        cout<<"copy constructor"<<endl;
    }
};



int main() {
    Base b;
    b.age = 10;
    cout<<"b.age = "<<b.age<<endl;

    Base b2(b);
    cout<<"b2.age = "<<b2.age<<endl;

    return 0;
}