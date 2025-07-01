# include <iostream>
# include <string>

using namespace std;

int main(){

string str1, str2;
// cout << "Enter str1: ";
// getline(cin, str1);
// cout << "Enter str2: ";
// getline(cin, str2);

str1 = "axbycz";
str2 = "abc";

bool match = true;
int k = 0;

for (int i = 0; i<str2.length(); i++){
    bool found = false;
    for (int j = k; j<str1.length(); j++){
        if(str2[i] != str1[j]){
            k++;
            continue;
        } else {
            found = true;
            k++;
            break;
        }
    }
    if (found){
        continue;
    } else match = false;
}

if (!match){
    cout << str2 << " is NOT a sub-sequence of " << str1 << endl;
} else cout << str2 << " is a sub-sequence of " << str1 << endl;;

return 0;
}

// // str1: acdpe 
//       j: 01234    
// // str2: ape
//       i: 012