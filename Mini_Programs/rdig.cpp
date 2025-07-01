# include <iostream>

using namespace std;

int main(){

    int num, rnum = 0;
    cout << "Enter a number to reverse: ";
    cin >> num;

    while (num != 0){
        int digit = num % 10;
        rnum = rnum * 10 + digit;
        num /= 10;
    }

    cout << "The reversed number is: " << rnum << endl;

    return 0;
}

// int main(){

//     int num, numdup;
//     cout << "Enter a number to reverse: ";
//     cin >> num;
//     int digits = 0;

//     numdup = num;

//     while(num != 0){
//         num /= 10;
//         digits++;
//     }

//     num = numdup;
//     numdup = 0;
//     int multiplier = digits;

//     int i = 1;

//     while (multiplier > 1){
//         i *= 10;
//         multiplier--;
//     }

//     while (digits > 0)
//     {
//         int digit = num % 10;
//         digits--;
//         num /= 10;
//         numdup += digit * i;
//         i /= 10;
//     }

//     cout << "The reversed number is: " << numdup << endl;

//     return 0;
// }