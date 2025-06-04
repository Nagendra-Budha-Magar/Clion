#include<iostream>
#include<string>
using namespace std;

class Kushal {
public:
    Kushal() {
        cout<<"Kushal is King"<<endl;
    }
};

class Kush : public Kushal {
public:
    Kush () {
        cout<<"kush is King"<<endl;
    }

    Kush (int k):Kush () {
        cout<<"kush is The king"<<endl;
    }

    Kush (int a, int b) : Kush (10) {
        cout<<"kush is The Kong"<<endl;
    }
};

int main() {
    Kush s(7,10);
    return 0;
}