#include<iostream>
#include<string>
using namespace std;

class Employee {
private:
  int Id;
  string name;
  float salary;

public:
  void setDetails() {
    cout << "Enter employee id: "<<endl;
    cin>>Id;
    cout << "Enter employee name: "<<endl;
    cin>>name;
    cout << "Enter employee salary: "<<endl;
    cin>>salary;

  };
  void displayDetails() {
    cout<<"Id = "<<Id<<endl;
    cout<<"Name = "<<name<<endl;
    cout<<"salary = "<<salary<<endl;
  }
};

int main() {
  int n;
  Employee e[n];

  cout <<"How many employee do you want to store"<<endl;
  cin >> n;
  for (int i = 0; i <= n; i++) {
    e[i].setDetails();
  }

  for (int i = 0; i < n; i++) {
    e[i].displayDetails();
  }
  return 0;
}
