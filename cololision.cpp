#include <iostream>
using  namespace  std;
class Base1{
public:
    Base1()
    {
        cout<<"Base1 constructor called"<<endl;
    }

    void base1()
    {
        cout<<"base1()---> method called"<<endl;
    }
    void collision()
    {
        cout<<"base1()---> collision called"<<endl;
    }

};
class Base2{
public:
    Base2()
    {
        cout<<"Base2 constructor called"<<endl;
    }
    void base2()
    {
        cout<<"base2()---> method called"<<endl;
    }
    void collision()
    {
        cout<<"base2()---> collision called"<<endl;
    }

};
class Base3{
public:
    Base3()
    {
        cout<<"Base3 constructor called"<<endl;
    }

public:
    void base3()
    {
        cout<<"base3()---> method called"<<endl;
    }
};

class Child:public Base2,public Base1,public Base3{

public:
    void print()
    {
        Base1::collision();
        Base2::collision();

    }
};

int main() {
    Child c;
    c.base1();
    c.base2();
    c.base3();
    c.print();
    return 0;
}