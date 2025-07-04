#include <iostream>

using namespace std;

void printNumber(int* ptr){
    cout << *ptr << endl;
}
void printChar(char* ptr){
    cout << *ptr << endl;
}
void print(void* ptr, char type){
    switch (type)
    {
    case 'i':
        cout << *(int *)ptr << endl;
        break;
    case 'c':
        cout << *(char *)ptr << endl;
        break;

    default:
        break;
    }
}

//why not just use templates?
template<typename T>
void print(T* ptr){
    cout << *ptr << endl;
}

int main(){

    int n = 3;
    char letter = 'r';

    printNumber(&n);
    printChar(&letter);

    print(&n, 'i');

    print(&n);

    return 0;
}