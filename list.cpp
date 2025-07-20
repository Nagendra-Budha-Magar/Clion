#include<iostream>
#include<list>
using namespace std;

class Sports {
public:
    list<int> participant;

    void players() {
        participant.push_back(1);
        participant.push_back(2);
        participant.push_back(3);
    }
    void display() {
        for (const int& i : participant) {
            cout<<"-"<<i<<endl;
        }
    }
};

int main() {
    list<string>Games; // Alternative: list<string>Games = {"a", "b", "c"}
    Games.push_back("Footbal");
    Games.push_back("Cricket");
    Games.push_back("Volleyball");

    for (const string& game : Games) { //for (type variable : container)
        cout<<"-"<<game<<endl;
    }

    Sports s;
    s.players();
    s.display();

    return 0;
}