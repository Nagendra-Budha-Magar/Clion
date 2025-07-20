#include<iostream>
using namespace std;
template<typename T>

class Variable {
    T first;
    T second;
    T sum;

public:
    Variable( T f, T s) : first(f), second(s), sum(f+s) {}

    T getFirst() {
        return first;
    }
    T getSecond() {
        return second;
    }

    T getSum() {
        return sum;
    }

};

int main() {
    Variable<int> intVar(6,4);
    cout<<intVar.getFirst()<<endl;
    cout<<intVar.getSecond()<<endl;
    cout<<"Sum for int : "<<intVar.getSum()<<endl;

    Variable<float> floatVar(5.5f,4.5f);
    cout<<floatVar.getFirst()<<endl;
    cout<<floatVar.getSecond()<<endl;
    cout<<"Sum for float : "<<floatVar.getSum()<<endl;

    return 0;
}