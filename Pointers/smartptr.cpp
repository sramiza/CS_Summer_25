#include <iostream>
#include <memory>

using namespace std;

int main(){

    int c = 13;
    int *ptr = &c;

    unique_ptr<int> uPtr1 = make_unique<int>(42);
    cout << uPtr1 << endl;
    unique_ptr<int> uPtr2 = std::move(uPtr1); // for some reason the compiler prefers std:: specified
    cout << uPtr2 << endl;
    // cout << *uPtr1 << endl; // this now gives seg fault because the memory us pointing to null '0x0'

    return 0;
}

// g++ -std=c++14 smartptr.cpp -o smartptr
// ./smartptr