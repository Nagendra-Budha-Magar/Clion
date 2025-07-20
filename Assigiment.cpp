#include<iostream>
using namespace std;

class Division { // It is already in private by default
    int a;
    int b;
    int c;

public: // have to make public to access it
    Division(int a, int B, int c) { // Yo constructor ho
        this->a = a; //we add this keyboad because member variable & parameter are same
        b = B;
        this->c = c;
    }

    // this method divide the integer & print the sum value
    void divide() {
        if (b != 0 and a != 0) { //only run when user didnot insert zero. we can also add logical and like (&&)
            c = a / b;
            cout<< "Sum = "<< c<< endl; //  this print the sum value
        }else {
            throw string("Not dividable by 0"); // if if statement does not execute than this line run
        }
    }
};

int main() {
    int first, second, sum;
    cout<<"Insert first number"<<endl; // asking for first number
    cin>>first;  // store number in first that are provided by user
    cout<<"Insert second number"<<endl; // for second number
    cin>>second; // store number
    try { // try to perform division
        Division d(first, second,sum); // creating division object
        d.divide(); // calls the divide member function
    }
    catch (string& e) { // handle exception thrown during division
        cout<<"Exception catch :" << e << endl;
    }
    return 0;
}