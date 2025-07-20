#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<string> Sports = {"Chess", "Running", "Badminton"};
    /* It also can be done by:
     * Sports.push_back("Chess");
     * Sports.push_back("Running");
     * Sports.push_back("Badminton");
    */

    for (const string& sport : Sports) {
        cout<<"-"<<sport<<endl;
    }
    return 0;
}