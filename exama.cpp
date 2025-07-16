#include<iostream>
using namespace std;

class bmi {
private:
    double Bmi;
    double weight;
    double height;

public:
    void scan_input() {
        cout<<"Enter your weight"<<endl;
        cin>>weight;
        cout<<"Enter your height"<<endl;
        cin>>height;
    }

    void process_input() {
        Bmi=weight/(height*height);
    }

    void display_output() {
        cout<<"Your body mass index is "<<Bmi<<endl;
    }

    void run() {
        scan_input();
        process_input();
        display_output();
    }
};

int main() {
    bmi b;
    b.run();

    return 0;
}