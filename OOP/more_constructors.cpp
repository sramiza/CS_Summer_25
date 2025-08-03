#include <iostream>

using namespace std;

class Student{
public:
    string name;
    string city;
    int sat;

    //default constructor
    Student(){
        name = "NA";
        city = "NA";
        sat = 0;
    }

    //parameterized constructor
    Student(string Name, string City, int SAT){
        name = Name;
        city = City;
        sat = SAT;
    }

    //member initialiser list constructor
    // Student(string Name, string City, int SAT) : name(Name), city(City), sat(SAT){};

    //NOTE: we can only define one type of constructor at a time
    //member initialiser lists are more efficient

};

void printStudentDetails(Student student){
    cout << "Student Name: " << student.name << endl;
    cout << "Student City: " << student.city << endl;
    cout << "Student SAT: " << student.sat << endl;
}

int main(){

    Student ramiz("Ramiz", "Islamabad", 1540);
    printStudentDetails(ramiz);

    return 0;
}