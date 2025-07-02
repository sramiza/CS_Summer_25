#include <iostream>

using namespace std;

void displayMenu(){
    cout << "*******MENU*******\n";
    cout << "Please Select an Option: \n";
    cout << "1. Check Balance\n";
    cout << "2. Withdraw\n";
    cout << "3. Transfer\n";
    cout << "4. Deposit\n";
    cout << "*******MENU*******\n";
}

bool user1login(string userid, string userpin){
    if (userid == "ayan" && userpin == "0000"){
        return true;
    }
    else return false;
}

bool user2login(string userid, string userpin){
    if (userid == "yumi" && userpin == "1234"){
        return true;
    }
    else return false;
}

int main(){

    string username, pin;
    string user1id = "ayan", user2id = "yumi";
    string user1pin = "0000", user2pin = "1234";
    int option, user1balance = 10000, user2balance = 0;
    string cont = "Y";
    double withdrawal, transfer, deposit;

    // cout << "Welcome to ATM\n";
    // cout << "Please enter your username: ";
    // cin >> username;
    // cout << "Please enter your pin: ";
    // cin >> pin;

    do{
    cout << "Welcome to ATM\n";
    cout << "Please enter your username: ";
    cin >> username;
    cout << "Please enter your pin: ";
    cin >> pin;
    if (user1login(username, pin)) {
        displayMenu();
        cout << "Option: ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Your current balance is: " << user1balance << endl;
            break;
        case 2:
            cout << "Withdrawal amount: ";
            cin >> withdrawal;
            if (withdrawal <= user1balance){
                cout << "Please collect your money.\nThank you for using our ATM.\n";
                user1balance -= withdrawal;
            } else
                cout << "Insufficient funds.\n";
            break;
        case 3:
            cout << "Transfer amount: ";
            cin >> transfer;
            if (transfer <= user1balance){
                user1balance -= transfer;
                user2balance += transfer;
                cout << transfer << " transferred to yumi.\nThank you for using our ATM.\n";
            }
            else
                cout << "Insufficient funds.\n";
            break;
        case 4:
            cout << "Deposit amount: ";
            cin >> deposit;
            user1balance += deposit;
            break;
        default:
            cout << "Incorrect Option\n";
            break;
        }
    }
    else if (user2login(username, pin)) {
        displayMenu();
        cout << "Option: ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Your current balance is: " << user2balance << endl;
            break;
        case 2:
            cout << "Withdrawal amount: ";
            cin >> withdrawal;
            if (withdrawal <= user2balance){
                cout << "Please collect your money.\nThank you for using our ATM.\n";
                user2balance -= withdrawal;
            } else
                cout << "Insufficient funds.\n";
            break;
        case 3:
            cout << "Transfer amount: ";
            cin >> transfer;
            if (transfer <= user2balance){
                user2balance -= transfer;
                user1balance += transfer;
            }
            else
                cout << "Insufficient funds.\n";
            break;
        case 4:
            cout << "Deposit amount: ";
            cin >> deposit;
            user2balance += deposit;
            break;
        default:
            cout << "Incorrect Option\n";
            break;
        }
    }
    else cout << "Incorrect username or pin.\n";

    cout << "Do you wish to continue? You will need to log in again. (Y/N): ";
    cin >> cont;
    } while (cont == "Y");

    return 0;
}