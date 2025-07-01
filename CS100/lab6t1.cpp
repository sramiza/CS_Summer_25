#include <iostream>
#include <string>

using namespace std;

int main(){

string str1, str2;
int key;

cout << "Message (plain text): ";
getline(cin, str1);

cout << "Key: ";
cin >> key;

for(int i=0; i<str1.length(); i++){
    char ch = str1[i];
    if (ch >= 65 && ch <= 90){
        ch += key;
        if (ch < 65){
            ch += 26;
        } else if (ch > 90){
            ch -= 26;
        }
    }
    else if(ch >= 97 && ch <= 122){
        ch += key;
        if (ch < 97){
            ch += 26;
        } else if (ch > 122){
            ch -= 26;
        }
    }
    str1[i] = ch;
}

cout << str1 << endl;

return 0;
}