#include <iostream>

using namespace std;

int main(){

    string userpin = "0000", pin;
    int counter = 0;

    do{
        cout << "Enter Your Pin: ";
        cin >> pin;
        if(userpin.length() != pin.length()){
        counter++;
        cout << "Incorrect. The pin has " << userpin.length() << " digits. " << 3 - counter << " attempts left.\n";
        }
        else if (pin!=userpin){
            counter++;
            cout << "Incorrect. " << 3 - counter << " attempts left.\n";
        }
    } while (pin != userpin && counter < 3);

    if (counter < 3){
        cout << "Success.\n";
    }
    else
        cout << "All attempts used. Card blocked.\n";

    return 0;
}