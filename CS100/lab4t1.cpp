# include <iostream>
# include <string>

using namespace std;

int main(){

string str;
cout << "Input: ";
getline(cin, str);

int len = 0;
int k = 0;


for (int i = str.length() - 1; i >0; i--){
    if (str[i] == 32){
        continue;
    } else {
        k = i;
        break;
    }
}

for (int j = k; j >= 0 ; j--){
    if (str[j] != 32){
        len++;
        continue;
    } else break;
}


cout << "Length of last word: " << len << endl;

return 0;
}

//"two spaces  "