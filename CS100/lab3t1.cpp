#include <iostream>

using namespace std;

int main(){

int base, exponent;
int answer = 1;

cout << "Enter Base: ";
cin >> base;
cout << "Enter Exponent: ";
cin >> exponent;

while(exponent > 0){
    answer *= base;
    exponent--;
}

cout << "Answer = " << answer << endl;

return 0;
}