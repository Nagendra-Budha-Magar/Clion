#include<iostream>
using namespace std;

class Base {
public:
    void display() {
        cout<<"base display"<<endl;
    }
};
class Derived : public Base {
public:
    void display() {
        cout<<"derived display"<<endl;
    }
};

int main() {
    Derived d;
    Base b = d;  // object slicing occur here only copy base part
    b.display();

    Base* b1 = new Derived();
    b1->display(); // dont have virtual so it still display the Base

    return 0;
}