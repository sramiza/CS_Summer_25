#include <iostream>

using namespace std;

// 2,3,5,7,11,13,17,19,23,29

bool isPrime(int num){

    if (num<=1)
        return false;

    if (num == 2 || num == 3 ){
        return true;
    }

    for (int i = 5; i <= num * num; i++){
        if(num%i == 0){
            return false;
        }
    }

    return true;
}

int main(){

    int number;
    cout << "Enter a number: ";
    cin >> number;

    (isPrime(number)) ? cout << number << " is Prime,\n" : cout << number << " is not Prime.\n";

    return 0;
}