#include <iostream>

using namespace std;

float Power(float base, int exponent){
    float power = 1;
    if (exponent > 0){
        for (int i = 1; i <= exponent; i++){
            power *= base;
        }
    }
    else if (exponent < 0){
        for (int i = 1; i <= -exponent; i++){
            power *= base;
        }
        power = 1 / power;
    }
    else
        return 1;
    return power;
}

    int main()
{

    float num1, num2;
    char operation;
    cout << "Enter Expression (eg. 5^2): ";
    cin >> num1 >> operation >> num2;

    cout << "Result: ";
    // +,-,/,*,%,^

    switch (operation)
    {
    case '+': cout << num1 + num2; break;
    case '-': cout << num1 - num2; break;
    case '*': cout << num1 * num2; break;
    case '/': 
        if (num2 == 0){
            cout << "Invalid: Division by Zero.";
        return;}
        else cout << num1 / num2;
    break;
    case '%': 
        if (num2 == 0){
        cout << "Invalid: Division by Zero.";
        return;}
        else cout << int(num1) % int(num2); 
    break;
    case '^':
        float power = Power(num1, int(num2));
        cout << power;
        break;
    default:
        cout << "Invalid Operator.\n";
    }

    cout << endl;

    return 0;
}