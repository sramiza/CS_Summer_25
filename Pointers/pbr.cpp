#include <iostream>

using namespace std;

void getMinMax(int arr[], int size, int* min, int* max){
    for (int i = 1; i < size; i++){
        if(arr[i] < *min){
            *min = arr[i];
        }
        if(arr[i] > *max){
            *max = arr[i];
        }
    }
}

int main(){

    int numbersArr[5] = {10, 7, 14, 72, -42};

    int min = numbersArr[0];
    int max = numbersArr[0];

    // passing by reference passes the address of the variables min and max
    // since the function takes in pointers to the 2 variables, we pass their addresses
    // this helps change the values in place
    getMinMax(numbersArr, 5, &min, &max);

    cout << "Min value: " << min << endl; // option + arrowup
    cout << "Max value: " << max << endl;

    return 0;
}