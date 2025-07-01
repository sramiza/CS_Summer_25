#include <iostream>

using namespace std;

int main(){

    int hostnum, guestnum;
    cout << "Enter Host Number: ";
    cin >> hostnum;

    system("clear");

    int i = 0;
    bool guess = false;
    while (i < 3 && guess == false)
    {
        cout << "Enter Your Guess Number: ";
        cin >> guestnum;
        i++;
        if (guestnum == hostnum)
        {
            guess = true;
            cout << "Correct!\n";
        }
        else {
            if (i<3){
                cout << "Incorrect. Try Again.\n";
            }
            else cout << "All tries used! The number was: " << hostnum << endl;
        }
    }

    return 0;
}