#include <iostream>

using namespace std;

int main(){

    int year, month;
    bool valid = true;
    cout << "NO. OF DAYS IN A MONTH\n";
    cout << "Enter Year and Month: ";
    cin >> year >> month;

    // (year % 4 == 0 && year % 100 == 0 || year % 400 == 0)

    switch (month)
    {
    case 2:
        (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? cout << "29" : cout << "28";
        break;
    case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12:
        cout << "31";
        break;
    case 4 : case 6 : case 9 : case 11:
        cout << "30";
        break;
    default:
        valid = false;
        break;
    }

    (valid) ? cout << " days\n" : cout << "Invalid month.\n";

    return 0;
}