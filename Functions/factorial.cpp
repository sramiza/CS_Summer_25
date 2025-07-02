#include <iostream>

using namespace std;

int factorial(int num){
    if (num == 0 || num == 1){
        return 1;
    }
    else
        return num * factorial(num - 1);
}

int main(){

    int number;

    cout << "Factorial Calculator.\n";
    cout << "Enter a number: ";
    cin >> number;

    if (number < 0){
        cout << "Factorial is undefined for negative numbers.\n";
    }
    else cout << number << "!= " << factorial(number) << endl;

    return 0;
}