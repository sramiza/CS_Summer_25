#include <iostream>
#include <string>

using namespace std;

// int RomanSymboltoVal(char c){

//     char letter = c;
//     // if (c == 'I')

// };

int RomanNumeraltoInt(string str){

    int number = 0;
    int sum = 0;
    for (int i = 0; i < str.length(); i++){
        char c = str[i];
        char d = str[i+1];
        if (c == 'I' && (d == 'V' || d == 'X')){
            sum -= 1;
        } 
        else if (c == 'I' && !(d == 'V' || d == 'X')){
            sum += 1;
        }
        else if (c == 'X' && (d == 'L' || d == 'C')){
            sum -= 10;
        }
        else if (c == 'X' && !(d == 'L' || d == 'C')){
            sum += 10;
        }
        else if (c == 'C' && (d == 'D' || d == 'M')){
            sum -= 100;
        }
        else if (c == 'C' && !(d == 'D' || d == 'M')){
            sum += 100;
        }
        else if (c == 'V'){
            sum += 5;
        }
        else if (c == 'L'){
            sum += 50;
        }
        else if (c == 'D'){
            sum += 500;
        }
        else if (c == 'M'){
            sum += 1000;
        }
    }

    return sum;

}

int main(){

string str;
cout << "Enter roman numeral: ";
cin >> str;

int output = RomanNumeraltoInt(str);
cout << "Output: " << output << endl;

return 0;
}