#include <iostream>
#include <string>

using namespace std;

int main(){

    string input, output;
    cout << "Enter a string to reverse: ";
    getline(cin, input);

    int slen = input.length();

    output = input;

    for (int i = 0; i < slen; i++){
        output[i] = input[(slen - 1) - i];
    }

    cout << "Reversed string: " << output << endl;

    return 0;
}
