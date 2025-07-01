# include <iostream>
using namespace std;

float BMI(float weight, float height){
    float bmi = weight / (height * height);
    return bmi;
}

int main(){

    float weight, height;
    cout << "Enter Weight(kg): ";
    cin >> weight;
    cout << "Enter Height(m): ";
    cin >> height;

    float bmi = BMI(weight, height);
    cout << "BMI: " << bmi << endl;

    if (bmi < 18.5){
        cout << "Underweight.\n";
    }
    else if (bmi >= 18.5 && bmi <= 24.9){
        cout << "Normal weight.\n";
    }
    else {
        cout << "Overweight.\n";
    }

    return 0;
}