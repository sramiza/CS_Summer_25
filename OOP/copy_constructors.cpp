#include <iostream>

using namespace std;

class Book{
public:
    string name;
    string author;
    int ratingsCount;
    float *ratings;

    // default constructor
    Book(){
        name = "N/A";
        author = "N/A";
        ratingsCount = 0;
        ratings = nullptr;
    }

    Book(string Name, string Author, int RatingsCount){
        name = Name;
        author = Author;
        ratingsCount = RatingsCount;
        ratings = new float[ratingsCount];
        for (int i = 0; i < RatingsCount; i++)
        {
            ratings[i] = 4 + i / 10.0;
        }
    }

    ~Book(){
        delete[] ratings;
        ratings = nullptr;
    }

    //copy constructor: custom required because of use of pointers/dynamic array
    Book(const Book& original){
        name = original.name;
        author = original.author;
        ratingsCount = original.ratingsCount;
        ratings = new float[ratingsCount];
        for (int i = 0; i < ratingsCount; i++){
            ratings[i] = original.ratings[i];
        }
    }
};

void printDetails(Book& book){
    cout << "Book Name: " << book.name << endl;
    cout << "Book Author: " << book.author << endl;
    cout << "Book Ratings:- " << endl;
    for (int i = 0; i < book.ratingsCount; i++){
        cout << "Rating " << i + 1 << ": " << book.ratings[i] << endl;
    }
}

int main(){

    Book book1("Atomic Habits", "James Clear", 3);
    Book book2("Game of Thrones", "George R. R. Martin", 5);
    Book book3(book1);

    printDetails(book1);
    printDetails(book3);

    return 0;
}