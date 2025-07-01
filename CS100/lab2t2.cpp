#include <iostream>

using namespace std;

int main(){

int input;
int twenties, tens, fives, ones;

cout << "Enter a dollar amount: ";
cin >> input;

twenties = input/20;
input -= twenties*20;
tens = input/10;
input -= tens*10;
fives = input/5;
input -= fives*5;
ones = input/1;
input -= ones*1;

cout << "$20 bills: " << twenties << endl;
cout << "$10 bills: " << tens << endl;
cout << "$5 bills: " << fives << endl;
cout << "$1 bills: " << ones << endl;


return 0;
}