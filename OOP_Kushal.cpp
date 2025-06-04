#include<iostream>
using namespace std;

class Kushal {
private:
    int KushalId;
public:
    Kushal(int kush) {  //THis is constructer
        KushalId = kush;
        cout << "Kushal is King " << endl;
    }
};

int main() {
    Kushal king(1);
    return 0;
}