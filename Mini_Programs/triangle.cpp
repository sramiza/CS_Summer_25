#include <iostream>

using namespace std;

int main(){

    int height, width;

    cout << "Enter Height: ";
    cin >> height;
    // cout << "Enter Width: ";
    // cin >> width;

    // Right-Angled Triangle
    cout << "Right-Angled Triangle\n";
    for (int i = 1; i <= height; i++)
    {
        for (int j = i; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nInverted Right-Angled Triangle\n";
    // Inverted Right-Angled Triangle
    for (int i = height; i >= 0; i--){
        for (int j = i; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }

    // Right-Angled Triangle (Right Started)
    cout << "Right-Angled Triangle (Right Sided)\n";
    for (int i = 1; i <= height; i++)
    {
        for (int k = height - i; k > 0; k--){
            cout << " ";
        }
        for (int j = i; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }

    // Inverted Right-Angled Triangle
    cout << "\nInverted Right-Angled Triangle (Right Sided)\n";
    for (int i = height; i >= 0; i--){
        for (int k = height - i; k > 0; k--){
            cout << " ";
        }
        for (int j = i; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}