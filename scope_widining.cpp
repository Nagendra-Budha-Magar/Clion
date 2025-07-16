#include<iostream>
#include<string>
using namespace std;

class Base {
private:
    int privateVariable;

    protected:
    int protectedVariable;

public:
    int publicVariable;

// public:
//     void setPrivateVariable(int x) {
//         privateVariable = x;
//     }

public:
    // void setPublicVariable(int a) {
    //     publicVariable = a;
    // }

    // public:
    //     void setPrivateVariable(int a) {
    //         privateVariable = a;
    //     }
    //
    // public:
    // int getProtectedVariable() {
    //     return protectedVariable;
    // }


};

class Derived : private Base {


public:
    void setProtectedVariable(int a) {
        protectedVariable = a;
    }

    int getProtectedVariable() {
        return protectedVariable;
    }
//
// // public:
// //     void setPublicVariable(int b) {
// //         publicVariable = b;
// //     }
//

};

// class Derived1 : protected Base {
// // public:
// //     void setPublicVariable(int a) {
// //         publicVariable = a;
// //     }
//
// public:
//     // int getPublicVariable() {
//     //     return publicVariable;
//     // }
// };
//
// class Derived2 : public Base {
// // public:
// //     void setPrivateVariable(int a) {
// //         privateVariable = a;
// //     }
//
//     // public:
//     // int getPrivateVariable() {
//     //     return privateVariable;
//     // }
//
//     public:
//         void setProtectedVariable(int a) {
//             protectedVariable = a;
//     }
//
//     public:
//         int getProtectedVariable() {
//             return protectedVariable;
//         }
// };

int main() {
    Derived d;
    d.setProtectedVariable(10);
    cout << d.getProtectedVariable() << endl;
    return 0;
}

































