#include <iostream>

using namespace std;

int HCF(int a, int b){

for (int i = 2; i <= b; i++){
    if (a%i==0 && b%i==0){
        return i;
    }
}

return 1;

}

int main(){

int a, b, hcf;

cout << "Enter the first number: ";
cin >> a;
cout << "Enter the second number: ";
cin >> b;

hcf = HCF(a, b);

if (hcf == 1){
    cout << "These numbers are coprimes.\n";
}
else {
    cout << "These numbers are NOT coprimes.\n";
}

return 0;
}