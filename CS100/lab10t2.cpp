#include <iostream>
using namespace std;

void printArray(int arr[4][4]){
    for (int i=0; i < 4; i++){
        for (int j=0; j < 4; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}


int main(){
int grid[4][4];
int num;

// initialise grid
for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
        grid[i][j] = 0;
    }    
}

cout << "Enter Grid: " << endl;
for(int i=0; i<4; i++){
    cin >> num;
    grid[0][i] = num;
}
for(int i=0; i<4; i++){
    cin >> num;
    grid[1][i] = num;
}
for(int i=0; i<4; i++){
    cin >> num;
    grid[2][i] = num;
}
for(int i=0; i<4; i++){
    cin >> num;
    grid[3][i] = num;
}

printArray(grid);

return 0;
}
