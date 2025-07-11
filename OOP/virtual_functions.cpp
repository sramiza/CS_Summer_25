#include <iostream>

using namespace std;

class Instrument {
public:
    virtual void makeSound() = 0;
};

class Piano : public Instrument {
public:
    void makeSound(){
        cout << "*Piano Noises*" << endl;
    }
};

class Guitar : public Instrument {
public:
    void makeSound(){
        cout << "*Guitar Noises*" << endl;
    }
};

int main(){

    Instrument *instrument1 = new Piano;
    instrument1->makeSound();
    
    Instrument *instrument2 = new Guitar;
    instrument2->makeSound();


    return 0;
}