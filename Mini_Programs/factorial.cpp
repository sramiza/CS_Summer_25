#include <iostream>

using namespace std;

int main(){

    int number, result;

    cout << "FACTORIAL CALCULATOR\n";
    cout << "Enter a number: ";
    cin >> number;
    result = number;

    for (int i = number - 1; i > 0; i--)
    {
        result *= i;
    }

    cout << number << "! = " << result << endl;

    return 0;
}