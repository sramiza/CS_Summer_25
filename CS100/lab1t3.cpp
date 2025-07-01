#include <iostream>

using namespace std;

int main(){

int x, y;

cout << "Enter x = ";
cin >> x;
cout << "Enter y = ";
cin >> y;


x = y - x;
y = y - x;
x = y + x;

cout << "x = " << x << endl;
cout << "y = " << y << endl;


return 0;
}