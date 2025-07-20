#include<iostream>
#include<string>
#include<exception> // built in exception classes
using namespace std;

// Note that base exception is already provided by standard library header "exception" by default
class InvalidAgeException : public exception {
    int Invalidage;  // for storing age
    string error; // for storing error
public:
    InvalidAgeException(const string& e, int a) { // e is pass by reference and a is pass by value
        error = e;
        Invalidage = a;
    }
    const char* what() const noexcept override { // it is for override what() method that are provided in exception.
        return error.c_str(); // .c_str() convert a string to c style string(character in array)
    }
    int getinvalidAge() {
        return Invalidage; //return value from invalidage
    }

};

int main() {
    int age;
    cout << "Enter your age"<<endl;
    cin >> age;
    try {
        if (age < 0 || age > 150 )   // runs only if age less than 0 or more than 150
            throw InvalidAgeException("Age must between 0 to 150", age); //throw error and also store why
        cout<< "Your age is = " << age << endl;
    }
    catch (InvalidAgeException& e) {
        cout << e.what() << endl; // what() return the error message
        cout << e.getinvalidAge()<< " is not valid age"<<endl;
    }
    return 0;
}