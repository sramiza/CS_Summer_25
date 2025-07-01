#include <iostream>

using namespace std;

void print_array ( int arr [10][10], int n ) {
// print a 2D array of size (nxn)
for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
        cout << arr[i][j] << " ";
    }
    cout << endl;
}

}

void magic_square ( int arr [10][10] , int n ) {

    int row = n / 2;
    int col = n - 1;
    arr[row][col] = 1;
    for ( int i = 2; i <= n * n ; i ++) {
        row -= 1;
        col += 1;
        if (row==-1 && col ==n){
            row = 0;
            col = n-2;
        }
        else if (row == -1 && col != n){
            row = n-1;
        }
        else if (row != -1 && col == n){
            col = 0;
        }
        if (arr[row][col] != 0){
            col -= 2;
            row += 1;
        }
        arr[row][col] = i;
    }

}

int main () {

int n ;

cout << "Enter size of magic square : " ;
cin >> n ;

// user can enter any odd number where n < 10
int arr[10][10];

for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
        arr[i][j] = 0;
    }
}

magic_square (arr, n);
print_array (arr, n);

return 0;
}