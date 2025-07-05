#include <iostream>

using namespace std;

int main(){

    int odds[5] = {1, 3, 5, 7, 9};
    cout << odds << endl;
    // turns out the name of an array is a ptr to the first element stored in that array
    // verification:
    cout << &odds[0] << endl;
    // double checking:
    cout << *odds << endl;
    // similarly, the following syntax is used as dereferencing for the address of a particular element of the array:
    cout << odds[0] << endl;
    // therefore, the 2 aforementioned syntax are equivalent "odds[0]" == "*odds"
    cout << *(odds+2) << endl;
    // so, to print the value of the third element of the array, we use odds[2] instead of *(odds+2)

    
    return 0;
}