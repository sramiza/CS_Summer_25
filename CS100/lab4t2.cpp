# include <iostream>
# include <string>

using namespace std;

int main(){

string str1, str2;
cout << "Enter str1: ";
getline(cin, str1);
cout << "Enter str2: ";
getline(cin, str2);

bool found = false;

for (int i=0; i<str1.length()-str2.length(); i++){
    bool match = true;
    for (int j=0; j<str2.length(); j++){
        if (str1[i+j] != str2[j]){
            match = false;
            break;
        }
        
    }
    if (match == true){
        cout << str2 << " is not a substring of " << str1 << endl;
        found = true;
        break;
    }

}

    if (found == false){
        cout << str2 << " is a substring of " << str1 << endl;
    }

return 0;
}

// str1 = "deadpapool"
// str2 = "pool"


// str2[0] == str1[4]
// str2[1] != str1[5]

// str2[0] == str1[6]
// str2[1] == str1[7]
// str2[2] == str1[8]
// str2[3] == str1[9]