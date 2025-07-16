#include<iostream>
using namespace std;

class Number {
public:
    int n;

    Number(int set_n) {
        this->n = set_n;
    }

    Number operator+(const Number &numb) {
        return Number(this->n + numb.n);
    }
};

int main() {
    Number a(5);
    Number b(6);
    Number c = a+b;

    cout<<"c = "<<c.n<<endl;

    return 0;
}