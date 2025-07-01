#include <iostream>

using namespace std;

int main(){

    int num;
    int digits = 0;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 0){
        cout << "You have entered 0.\n";
    }
    else{
        while (num!=0){
            num /= 10;
            digits++;
        }
    cout << "The number you entered has " << digits << " digits.\n";
    }

    

    return 0;
}