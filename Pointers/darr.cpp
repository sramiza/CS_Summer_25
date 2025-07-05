#include <iostream>

using namespace std;

int main(){

    int myArr[5] = {12,31,54,42,12};

    int size;
    cout << "Enter the desired size of your array: ";
    cin >> size;

    // slightly more abstract syntax compared to arr[size]
    int *newArr = new int[size];

    // to remember:
    // int* in place of int
    // myArr the same
    // no [size] on the left side
    // new int[size] in place of {0,1,2,3,4}

    for (int i = 0; i < size; i++){
        cout << "newArr[" << i << "]: ";
        cin >> newArr[i];
    }

    cout << "\nOutput: \n";

    for (int i = 0; i < size; i++)
    {
        cout << "newArr[" << i << "] = " << newArr[i] << endl;
    }

    delete[] newArr;
    newArr = NULL;

    return 0;
}