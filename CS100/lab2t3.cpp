#include <iostream>

using namespace std;

int main(){

int loan;
float interest;
float monthly;
float balance;

cout << "Enter amount of loan: ";
cin >> loan;
cout << "Enter monthly interest rate: ";
cin >> interest;
cout << "Enter monthly payment: ";
cin >> monthly;

balance = (loan * (1 + interest/100)) - monthly;

cout << "Balance remaining after first payment: " << balance << endl;

balance = balance * (1 + interest/100) - monthly;

cout << "Balance remaining after second payment: " << balance << endl;

return 0;
}