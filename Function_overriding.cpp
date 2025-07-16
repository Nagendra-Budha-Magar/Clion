#include<iostream>
#include<string>
using namespace std;

class Base {
    public:
    virtual void print() {
        cout<<"Base "<<endl;
    }
};

class Child : public Base {
    public:
    void print () {
        cout<<"Child overriding call"<<endl;
    }
};

int main () {
    Child c;1111111111111111111111111wwwwwwwwwwwwwwwwwwwwwwwwwwwwwww
    c.print();
    return 0;
}