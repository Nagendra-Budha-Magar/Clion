#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Person {
public:
    string name;
    int p_No;
    string address;
    string email;

    Person() {
        cout<< "Parent called"<<endl;
    }
};

class Student : public Person {
public:
    int Roll_No;
    string course;

};

class Teacher : public Person {
public:
    float salary;  // using double insted of float
};

int main() {
    Student s;
    s.Roll_No = 5;
    s.course = "Btech.ed.IT";

    cout<<"Student Rollno = "<<s.Roll_No<<endl;
    cout<<"Student Course = "<<s.course<<endl;

    Teacher t;
    t.salary = (float)9000007;
    cout<<fixed<<setprecision(0);  //manipulator that convert the number
    cout<<"Teacher Salary = "<<t.salary<<endl;



    return 0;
}