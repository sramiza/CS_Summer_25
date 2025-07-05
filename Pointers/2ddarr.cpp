#include <iostream>

using namespace std;

int main(){

    int rows, cols;
    cout << "Rows: ";
    cin >> rows;
    cout << "Columns: ";
    cin >> cols;

    int **table = new int *[rows];

    for (int i = 0; i < rows; i++){
        table[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++){
        delete[] table[i];
    }

    delete[] table;
    table = NULL;

    return 0;
}