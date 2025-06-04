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
};

int main() {
    Kush s(7);
    return 0;
}