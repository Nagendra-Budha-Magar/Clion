#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    static string collegeName; // Static member declaration



    void display() {
        cout << "Name: " << name << ", Roll No: " << rollNo
            << ", College: " << collegeName << endl;
    }
};

string  Student::collegeName = "Radiant";

int main() {
    Student niraj, golu, Ashish;

    // Initializing student data
    niraj.rollNo = 1;
    niraj.name = "Niraj";
    niraj.collegeName = "testing";


    golu.rollNo = 2;
    golu.name = "Golu";

    Ashish.rollNo = 3;
    Ashish.name = "Ashish";
    Ashish.collegeName = "Radiant College";


    // Displaying student details
    niraj.display();
    golu.display();
    Ashish.display();
    return 0;
}