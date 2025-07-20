#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class Students {
    int count;

public:
    Students(int c) {
        this->count = c;
    }

    void Count() {
        int limit = (count > 10) ? 10 : count;

        for (int i = 0; i < limit; i++) {
            cout << "Print... " << i << endl;
        }

        if (count > 10)
            throw string("No space");
    }
};

int main() {
    try {
        Students s(14);
        s.Count();
    }
    catch (string& e) {
        cout << "Exception = " << e << endl;
    }
    return 0;
}


