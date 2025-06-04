#include<iostream>
using namespace std;
class employee {
private:
    int id;
    string employeeName;

public:
    void setEmployeeId(int i) {
        id = i;
    }

    int getEmployeeId() {
        return id;
    }

    void setEmployeeName(string s) {
        employeeName = s;
    }
    string getEmployeeName() {
        return employeeName;
    }
};

int main() {
    int Id;

    employee emp;
    cout<<"Enter a employee Id"<<endl;
    cin>>Id;

    string Name;
    cout<<"Enter a Employee Name"<<endl;
    cin>>Name;

    emp.setEmployeeId(Id);
    emp.setEmployeeName(Name);

    cout<< "Id = "<<emp.getEmployeeId()<<endl;
    cout<<"Name = "<<emp.getEmployeeName()<<endl;

    return 0;
}