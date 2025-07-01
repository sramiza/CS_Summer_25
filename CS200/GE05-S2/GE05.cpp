#include <iostream>
#include <string>

using namespace std;

class Pet
{
    //FILL IN ATTRIBUTES

public:

    Pet() //DEFAULT
    {
    }

    Pet() //FILL IN PARAMETERS
    {
    }

    void setPet() //FILL IN PARAMETERS
    {
    }

    void displayPet()
    {
    }

    int getPetID() 
    {
    }

    string getName()
    {
    }

    string getSpecies()
    {
    }

    int calculateAgeInDays(int bornDate, int currentDate) 
    {
    }

};

class PetAdoptionCenter
{
    static const int CAPACITY = 100;
    Pet pets[CAPACITY];
    int currentCount = 0;
public:
    bool addPet(const Pet &newPet)
    {
    }

    bool removePetByID() //FILL IN PARAMETERS 
    {
    }

    Pet* searchPetByID() //FILL IN PARAMETERS
    {
    }
    void displayPets() //FILL IN PARAMETERS
    {
    }

};

int testPet(){
    int score = 0;

    // Test case 1: Default constructor test
    Pet Pet1;
    cout << "Testing Default Constructor" << endl;
    if (Pet1.getName() == "N/A" && Pet1.getSpecies() == "N/A" && Pet1.getPetID() == -1) {
        score += 10;
        cout << "\tTest case 1 passed." << endl;
    }
    else 
        cout << "\tTest case 1 failed." << endl;


    // Test case 2: Parameterized constructor test
    Pet pet2("Buddy", "Dog", 101);
    cout << "Testing Parameterized Constructor" << endl;
    if (pet2.getName() == "Buddy" && pet2.getSpecies() == "Dog" && pet2.getPetID() == 101) {
        score += 10;
        cout << "\tTest case 2 passed." << endl;
    }
    else
        cout << "\tTest case 2 failed." << endl;


    // Test case 3: Combined test (Constructor + Setters + Getters)
    cout << "Testing  Constructor, Setters & Getters combined" << endl;
    Pet pet3("Mittens", "Cat", 102);
    pet3.setPet("Goldie", "Fish", 103);
    if (pet3.getName() == "Goldie" && pet3.getSpecies() == "Fish" && pet3.getPetID() == 103) {
        score += 10;
        cout << "\tTest case 3 passed." << endl;
    }
    else
        cout << "\tTest case 3 failed." << endl;


    // Test case 4: Calculate age in days 
    cout << "Testing calculateAgeInDays function: \n";
    int days1 = pet3.calculateAgeInDays(220101, 230101);
    if (days1 == 365)
    {
        cout << "\tTest Case 4 Passed: Age in days is " << days1 << endl;
        score += 10;
    }
    else
    {
        cout << "\tTest Case 4 Failed: Expected 365, but got " << days1 << endl;
    }

    int days2 = pet2.calculateAgeInDays(211215, 231001);
    if (days2 == 656)
    {
        cout << "\tTest Case 5 Passed: Age in days is " << days2 << endl;
        score += 10;
    }
    else
    {
        cout << "\tTest Case 5 Failed: Expected 655, but got " << days2 << endl;
    }

    return score;
}

int testPetAdoptionCenter(){
    int score = 0;
    PetAdoptionCenter shelter;

    cout << "Populating Shelter.\n";
    Pet pet1("Buddy", "Dog", 101);
    Pet pet2("Mittens", "Cat", 102);
    Pet pet3("Goldie", "Fish", 103);
    shelter.addPet(pet1);
    shelter.addPet(pet2);
    shelter.addPet(pet3);

    cout << "Testing search for a recently added pet with ID 102:\n";
    Pet* foundPet = shelter.searchPetByID(102);
    if (foundPet != nullptr && foundPet->getName() == "Mittens")
    {
        cout << "\tTest case 6 passed. Found Pet with ID 102: \n";
        score += 10;
        foundPet->displayPet();
    }
    else
        cout << "\tTest case 6 failed. Pet with ID 102 not found.\n" << endl;

    cout << "Testing search for non-existant pet:\n";
    Pet* foundPet2 = shelter.searchPetByID(120);
    if (foundPet2 == nullptr)
    {
        cout << "\tTest case 7. Non-existant pet test passed. \n";
        score += 10;
    }
    else
        cout << "\tTest case 7. Non-existant pet test failed.\n" << endl;

    cout << "Testing setPet() functionality: \n";
    foundPet->setPet("Ash", "Cat", 102);
    cout << "After update: ";
    foundPet->displayPet();
    if (foundPet->getName() == "Ash")
    {
        cout << "\tTest case 8 passed. Successful setter update \n";
        score += 10;
    }

    cout << "Testing remove functionality: \n";
    if (shelter.removePetByID(102))
    {
        cout << "\tTest case 9 passed. Pet with ID 102 removal returned true" << endl;
        score += 10;
    }
    else
    {
        cout << "\tTest case 9 failed. Failed to remove Pet with ID 102." << endl;
    }

    if (!shelter.removePetByID(110))
    {
        cout << "\tTest case 10 passed. Non-existant removal returned false" << endl;
        score += 10;
    }
    else
    {
        cout << "\tTest case 10 failed. Non-existant remove failed." << endl;
    }

    foundPet = shelter.searchPetByID(102);
    if (foundPet == nullptr)
    {
        cout << "\tTest case 11 passed. Pet with ID 102 is no longer in the shelter" << endl;
        score += 10;
    }
    else
        cout << "\tTest case 11 failed. Error: Pet with ID 102 was found after supposed removal." << endl;
        
        
    return score;
}

int main()
{
    int score = 0;
    int total = 0;

    cout << "Testing Pet class functionality" << endl;
    score = testPet();
    cout << score << "/50" << endl;
    total += score;

    cout << "\nTesting PetAdoptionCenter class functionality" << endl;
    score = testPetAdoptionCenter();
    cout << score << "/60" << endl;
    total += score;

    cout << "\nTotal score is " << total << "/110\n\n";

    return 0;
}