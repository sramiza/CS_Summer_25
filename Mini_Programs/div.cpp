#include <iostream>

using namespace std;

int main(){

    int i = 100;

    while(i<=500){
        if(i%3 == 0 && i%5 == 0){
            cout << i << " ";
            i++;
        }
        else {
            i++;
        }
    }

    cout << endl;

    return 0;
}