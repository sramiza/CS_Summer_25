#include <iostream>

using namespace std;

int main(){

    int n = 3;
    cout << n << endl;
    // n is an int variable holding the value 3

    int *ptr = &n;
    cout << ptr << endl;
    // ptr is a pointer to an integer holding the address of the variable n

    *ptr = 9;
    cout << *ptr << endl;
    // ptr is still a pointer to an integer holding the address of the variable n
    // but the value of the integer at the address of the variable n has been modified to 9
    // i.e. the value of the int variable n has been modified

    // a pointer can only hold an address e.g. ptr = 0x16fbb7198: ok
    //                                         ptr = 9:           not ok
    //                                         ptr = &n:          ok
    //                                         ptr = n:           not ok

    cout << n << endl;

    return 0;
}