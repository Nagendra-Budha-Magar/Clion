#include <iostream>
#include<string>
using namespace std;

class Student{
//private:
    string name;
    int rollNo;

public:
    Student (string n, int r){
        this->name=n;
        this->rollNo=r;
    }

    friend ostream& operator<<(ostream& COUT, const Student& St); // only necessary in private variable
};

ostream& operator<<(ostream& COUT, const Student& St){// COUT ko thau ma j ni rakhna payo
    COUT<<"Name = "<<St.name<<endl;
    COUT<<"ROllno = "<<St.rollNo<<endl;
    return COUT;
}

int main() {
    Student s("Ashish",4);
    cout<<s<<endl;
    return 0;
}