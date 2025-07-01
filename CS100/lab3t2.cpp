#include <iostream>

using namespace std;

int main(){

int date1;
int date2;

int d1, m1, y1;
int d2, m2, y2;

cout << "Enter Date 1 (DD/MM/YYYY): ";
cin >> d1;
cin.ignore();
cin >> m1;
cin.ignore();
cin >> y1;
cin.ignore();

cout << "Enter Date 2 (DD/MM/YYYY): ";
cin >> d2;
cin.ignore();
cin >> m2;
cin.ignore();
cin >> y2;
cin.ignore();

if (y1>y2) {
    cout << d2 << "/" << m2 << "/" << y2 << " is earlier than " << d1 << "/" << m1 << "/" << y1 << endl;
}
else if (y2>y1) {
    cout << d1 << "/" << m1 << "/" << y1 << " is earlier than " << d2 << "/" << m2 << "/" << y2 << endl;
}
else if (m1>m2){
    cout << d2 << "/" << m2 << "/" << y2 << " is earlier than " << d1 << "/" << m1 << "/" << y1 << endl;
}
else if (m2>m1){
    cout << d1 << "/" << m1 << "/" << y1 << " is earlier than " << d2 << "/" << m2 << "/" << y2 << endl;
}
else if (d1>d2){
    cout << d2 << "/" << m2 << "/" << y2 << " is earlier than " << d1 << "/" << m1 << "/" << y1 << endl;
}
else if (d2>d1){
    cout << d1 << "/" << m1 << "/" << y1 << " is earlier than " << d2 << "/" << m2 << "/" << y2 << endl;
}
else {
    cout << "Both dates are the same\n";
}


return 0;
}