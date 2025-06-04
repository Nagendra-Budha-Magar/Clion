#include <iostream>
using namespace std;

class Student {
public:
    static string name;
    Student() {
        cout<< "This is constructor "<< endl;
    }
    ~Student() {
        cout<< "This is destructor "<< endl;
    }
};
 string Student::name = "Ashish";
int main() {
    Student s;
    Student::name = "kushal";
    Student::name = "nabin";
    Student::name = "King";
    cout<<s.name<<endl;
    return 0;
}