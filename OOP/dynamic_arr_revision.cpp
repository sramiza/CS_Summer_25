#include <iostream>

using namespace std;

int main(){

    int arr[5] = {2, 4, 6, 8, 10};

    int size;
    cout << "Enter Array Size: ";
    cin >> size;

    int *newArr = new int[size];

    for (int i = 0; i < size; i++){
        cout << "newArr[" << i << "]: ";
        cin >> newArr[i];
    }

    cout << "Output: " << endl;
    for (int i = 0; i < size; i++){
        cout << "newArr[" << i << "]: " << newArr[i] << endl;
    }

    delete[] newArr;
    newArr = NULL;

    return 0;
}