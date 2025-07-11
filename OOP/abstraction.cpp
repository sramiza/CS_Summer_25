#include <iostream>

using namespace std;

class MobilePhone{
public:
    virtual void makeCall() = 0;
    virtual void sendMessage() = 0;
    virtual void browseInternet() = 0;
};

class Apple: public MobilePhone {
public:
    virtual void makeCall() {
        cout << "iPhone is making a Facetime call.\n";
    }
    virtual void sendMessage() {
        cout << "iPhone is sending an iMessage.\n";
    }
    virtual void browseInternet() {
        cout << "iPhone is browsing Safari.\n";
    }
};

class Samsung: public MobilePhone {
public:
    virtual void makeCall() {
        cout << "Samsung is making a Zoom call.\n";
    }
    virtual void sendMessage() {
        cout << "Samsung is sending a WhatsApp message.\n";
    }
    virtual void browseInternet() {
        cout << "Samsung is browsing Chrome.\n";
    }
};

int main(){

    Samsung s25Ultra;
    s25Ultra.browseInternet();
    Apple iPhone16promax;
    iPhone16promax.makeCall();

    return 0;
}