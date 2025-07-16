#include<iostream>
#include<string>
using namespace std;

class Connection {
public:
    virtual void connect()=0;
    virtual void query()=0;
    virtual void disconnect()=0;
};

class oracle:Connection {
public:
    void connect() {
        cout<<"connect"<<endl;
    }

    void query() {
        cout<<"query"<<endl;
    }

    void disconnect() {
        cout<<"disconnect"<<endl;
    }
};

int main() {
    oracle oc;
    oc.connect();
    oc.query();
    oc.disconnect();

    return 0;
}