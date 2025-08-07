#include <iostream>

using namespace std;

class Student{
public:
    string name;
    int age;
    string gender;

    virtual void Study() = 0; // pure virtual function mandates an implementation in the derived classes
                              // simple virtual functions makes implementation optional
                              // a pure virtual function makes the base class an abstract class which we can't instantiate
    
    virtual ~Student() {}     
};

class ProgrammingStudent : public Student{
    void Study(){
        cout << "Practice programming\n";
    }
};

class MusicStudent : public Student{
    void Study(){
        cout << "Practice music composition\n";
    }
};

class ArtsStudent : public Student{
    void Study(){
        cout << "Practice drawing\n";
    }
};

int main(){

    Student *students[3];
    students[0] = new ProgrammingStudent;
    students[1] = new MusicStudent;
    students[2] = new ArtsStudent;
    

    for (int i = 0; i < 3; i++){
        students[i]->Study();
    }
    
    for (int i = 0; i < 3; i++) {
        delete students[i];
    }

        return 0;
}