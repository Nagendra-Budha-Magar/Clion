#include <iostream>
#include <string>
using namespace std;

class parent {
    private:
    int privateVariable;

    protected:
    string protectedVariable;

    public:
    int publicVariable;


    void showVariable() {
        cout<<"PrivateVariable = "<<privateVariable<<endl;
        cout<<"ProtectedVariable = " << protectedVariable << endl;
        cout <<"protVariable = "<< publicVariable << endl;
    }
};

class child : public parent {
  public:
    void setProtectedVariable(string value) {
        protectedVariable = value;
        showVariable();
    }
    string getProtectedVariable() {
        return protectedVariable;
    }

};
class child2 : public child {
    public:
    void setProtectedVariable(string value) {
        protectedVariable = value;
        showVariable();
    }
    string getProtectedVariable() {
        return protectedVariable;
    }
};

class child3 : public child2 {
public:
    void setProtectedVariable(string value) {
        protectedVariable = value;
        showVariable();
    }
};

int main() {
    parent p;
    p.showVariable();

    child2 c;
    c.setProtectedVariable("Hello");
    cout << c.getProtectedVariable() << endl;

    child3 d;
    d.showVariable();
    return 0;
}