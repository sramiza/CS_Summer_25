#include <string>
#include <iostream>

using namespace std;

int main(){

string input;
int output = 0;

cout << "Enter a 4-digit number: ";
cin >> input;

output = (input[3] - 48) * 1000;
output += (input[2] - 48) * 100;
output += (input[1] - 48) * 10;
output += (input[0] - 48);

cout << "The reversed number is: " << output << endl;

return 0;
}