#include <iostream>

using namespace std;

class EquilateralTriangle{
    float l;
    float area;
    float perimeter;
public:
    void setL(float a){
        l = a;
    }

    friend void printProperties(EquilateralTriangle);
};

void printProperties(EquilateralTriangle triangle){
    cout << "Area: " << 0.5 * triangle.l * triangle.l << endl; // 0.5 not 1/2 because 1/2 = 0, 1/2.0 = 0.5
    cout << "Perimeter: " << 3 * triangle.l << endl;
};

int main()
{

    EquilateralTriangle triangle;
    triangle.setL(5);
    printProperties(triangle);

    return 0;
}