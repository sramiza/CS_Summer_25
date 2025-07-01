#include <iostream>
#include <string>

using namespace std;

// class Solution {
// public:
//     string gcdOfStrings(string str1, string str2) {
//         int max, min;
//         string result;

//         if (str1.length() > str2.length()){
//             max = str1.length();
//             min = str2.length();
//         }
//         else {
//             max = str2.length();
//             min = str2.length();
//         }
        
//         // Case 1: Incompatible Lengths
//         if (max % min != 0){
//             return "";
//         }

//         // Case 2: Incompatible Characters
//         for(int i = 0; i<min; i++){
//             if (str1[i] != str2[i]){
//                 return "";
//             }
//         }
        
//         // Case 3: Match Found
//         for(int i = 0; i<min; i++){
//             while( str1[i] == str2[i]){
//                 result += str1[i];
//             }
//         }

//         // Case 4: Match Found Within Smaller String

//     }



// };

string gcdOfStrings(string str1, string str2) {
    int max, min;
    string result;
    if (str1.length() > str2.length()){
        max = str1.length();
        min = str2.length();
    }
    else {
        max = str2.length();
        min = str1.length();
    }
    
    // Case 1: Incompatible Lengths
    if (max % min != 0){
        return "";
    }
    // Case 2: Incompatible Characters
    for(int i = 0; i<min; i++){
        if (str1[i] != str2[i]){
            return "";
        }
    }
    
    // Case 3: Match Found
    for(int i = 0; i<min; i++){
        if(str1[i] == str2[i]){
            result += str1[i];
        }
    }
    // Case 4: Match Found Within Smaller String
    // for (int i = 0; i = min/2; i++){
    //     result += str1[i];
    // }
    
    return result;
}

int main(){

string a, b, c;
a = "ABABAB";
b = "ABAB";
c = gcdOfStrings(a,b);
cout << c;

return 0;
}