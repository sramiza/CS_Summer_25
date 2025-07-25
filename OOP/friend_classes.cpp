#include <iostream>

using namespace std;

class EquilateralTriangle{
    float length;
    float area;
    float perimeter;
public:
    void setLength(float a){
        length = a;
    }

    friend class Calculate;
};

class Calculate{
public:
    void perimeter(EquilateralTriangle& t){
        t.perimeter = t.length * 3;
    }
    void area(EquilateralTriangle& t){
        t.area = sqrt(3)/4.0 * t.length * t.length;
    }
    void printResults(EquilateralTriangle& t){
        cout << "Area: " << t.area << endl;
        cout << "Perimeter: " << t.perimeter << endl;
    }
};

int main(){

    EquilateralTriangle triangle;
    triangle.setLength(5);
    Calculate triangle1;
    triangle1.perimeter(triangle);
    triangle1.area(triangle);
    triangle1.printResults(triangle);

    return 0;
}