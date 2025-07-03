#include <iostream>

using namespace std;

template<typename T>
void Swap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){

    int a = 4, b = 6;
    cout << "INTEGERS:" << endl;
    cout << "a: " << a << " b: " << b << endl;
    Swap(a, b);
    cout << "a: " << a << " b: " << b << endl;

    cout << "\nCHARACTERS:" << endl;
    char c = 'a', d = 'b';
    cout << "c: " << c << " d: " << d << endl;
    Swap(c, d);
    cout << "c: " << c << " d: " << d << endl;

    cout << "\nFLOATS:" << endl;
    float e = 4.0, f = 3.8;
    cout << "e: " << e << " f: " << f << endl;
    Swap(e, f);
    cout << "e: " << e << " f: " << f << endl;
    
    return 0;
}