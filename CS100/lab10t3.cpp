#include <iostream>
using namespace std;

void perimeter(int grid[6][6]){
    int perimeter = 0;

    for(int i=1; i<5; i++){
        for(int j=1; j<5; j++){
            if (grid[i][j] == 1){
                if (grid[i+1][j] == 1){
                    perimeter -= 1;
                }
                if (grid[i][j+1] == 1){
                    perimeter -= 1;
                }
                if (grid[i-1][j] == 1){
                    perimeter -= 1;
                }
                if (grid[i][j-1] == 1){
                    perimeter -= 1;
                }
                perimeter += 4;
            }
        }
    }
    cout << "Perimeter: " << perimeter << endl;
}


int main(){
int grid[6][6];
string input;
int num;

// initialise grid
for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){
        grid[i][j] = 0;
    }
}

cout << "Enter Grid: " << endl;
for(int i=1; i<5; i++){
    cin >> input;
    for(int j=1; j<5; j++){
        if (input[j-1] == '0'){
            grid[i][j] = 0;
        } else grid[i][j] = 1;
    }
}

perimeter(grid);

return 0;
}
