#include<iostream>
#include<string>
using namespace std;

class Chess {
public:
    Chess() {
        cout<<"chess is mind game"<<endl;
    }

    Chess(int Tactical) {
        cout<<"Chess is a tactical game"<<endl;
    }

    Chess(int Strategies, int creativity) {
        cout<<"Chess is a strategy and creativity game"<<endl;
    }
};

class Player : public Chess {
public:
    Player() {
        cout<<"Player play chess"<<endl;
    }

    Player(int queen) : Player() {
        cout<<"Queen is important piece of chess"<<endl;
    }

    Player(int queen, int pawn) : Player (queen) {
        cout<<"Pawn play a vital role"<<endl;
    }

    Player(int queen, int pawn, int king) : Chess(1) {
        cout<<"king does not matter"<<endl;
    }

    Player(int queen, int pawn, int king, int rook) : Chess(1,2) {
        cout<<"The Roooooooooooooooooooook"<<endl;
    }
};

int main() {
    Player n (1,2);
    Player p (7,9,10);
    Player r(4,7,9,10);
    return 0;
}