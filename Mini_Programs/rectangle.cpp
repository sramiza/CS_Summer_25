#include <iostream>

using namespace std;

int main(){

    int height, width;
    string symbol;

    cout << "Enter Height: ";
    cin >> height;
    cout << "Enter Width: ";
    cin >> width;
    cout << "Enter Symbol: ";
    cin >> symbol;


    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            cout << " " << symbol << " ";
        }
        cout << endl;
    }

        return 0;
}