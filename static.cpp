#include <iostream>
#include <string>
using namespace std;

void Fun() {
     static int x = 0;  // it initailize x once in a lifetime of a program
    cout<<x<<endl;
    x++;
} // for function

class A {
public:
    int x;

    void inc() {
        x++;
    }
};

int main() {
    Fun();
    Fun();

    A obj;
    A obj2;obj.x = 0;
    obj2.x = 2;
    obj.inc();
    cout<<obj.x<<endl;
    cout<<obj2.x<<endl;
    obj.inc();
    cout<<obj.x<<endl;
    cout<<obj2.x<<endl;
    cout<<obj.x<<endl;
    cout<<obj2.x<<endl;


    return 0;
}