#include<iostream>
#include<stdexcept>
#include<string>
using namespace std;
int main() {
    int i;
    string s;
    cout<<"Enter a integeer"<<endl;
    cin>>i;
    cin.ignore(); // it is necessary for continouing the program(it ignores the newline)
    cout<<"Enter a string"<<endl;
    getline(cin,s); // it read the line to new line
    try {
        if (i<0) // if integer is negetive than this if run.
            // here invalidargument is standard exception class from stdexcept
            throw invalid_argument("Negative integer");
        if (s.empty()) // if string is empty this if run
            throw runtime_error("Empty string"); // here runtimeerror also from stdescept library. can also  use string.
        cout<<"Integer is : "<<i<<endl;
        cout<<"String is : "<<s<<endl;
    }
    catch (invalid_argument& e) {
        cout<<"Exception caught: "<<e.what()<<endl;
    }
    catch (const runtime_error& e) {
        cout<<"Exception : "<<e.what()<<endl;
    }
    return 0;
}
/*
 *Note: This program have 1 problem, if user give both negative and empty in string than the try block only run
 * one time which means integer and skipped the string part.
 * Also this can be solved through separate try block with each problem but I think the question asked for
 * multiple choice block so i write this code ind=sted of another one.
 * May be i didnt understand question or i dont know how to apply logic here.
 */