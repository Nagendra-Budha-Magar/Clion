#include<iostream>
using namespace std;

class calculator {
public:
    int addFun(int a, int b) {
        return a + b;
    }

    float addFun(float a, float b) {
        return a + b;
    }

    int addFun(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    calculator c;

    int printInt = c.addFun(4,6);
    cout <<"int of two = "<<printInt<<endl;

    float printFloat = c.addFun(4.5f,6.5f);
    cout <<"float of two = "<<printFloat<<endl;

    int printInt2 = c.addFun(4,5,6);
    cout<<"Int of three ="<<printInt2<<endl;

    return 0;
}