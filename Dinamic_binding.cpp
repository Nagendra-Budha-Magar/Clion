#include<iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout<<"base display"<<endl;
    }
};
class Derived : public Base {
public:
    void display() override {
        cout<<"derived display"<<endl;
    }
};

int main() {
    Base* b = new Derived();  // have virtual so it point to derived display
    b->display(); // runtime

    return 0;
}