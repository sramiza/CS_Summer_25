#include <iostream>

using namespace std;

int main(){

int num;
int sum = 1;
cout << "Enter num: ";
cin >> num;

int i = 2;
while(sum<num){
    sum += i;
    i++;
}

if (sum == num){
    cout << num << " is a triangular number\n";
}
else {
    cout << num << " is NOT a triangular number\n";
}

return 0;
}

// 1,3,6,10,15,21,28,36,45,55,66,78,91,105,