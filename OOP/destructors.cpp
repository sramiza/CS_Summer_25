#include <iostream>

using namespace std;

class Book{
public:
    string name;
    string author;
    int ratingsCount;
    float* ratings;

    // Book(string Name, string Author) : name(Name), author(Author) {};

    Book(){
        name = "N/A";
        author = "N/A";
        ratingsCount = 0;
        ratings = NULL;
    };

    Book(string Name, string Author){
        name = Name;
        author = Author;
        ratingsCount = 2;
        ratings = new float[ratingsCount];
        ratings[0] = 4.3;
        ratings[1] = 5.0;
    };

    ~Book(){
        delete[] ratings;
        ratings = NULL;
    };
};

int main(){
    Book book1("Atomic Habits", "James Clear");
    Book book2("Game of Thrones", "George R. R. Martin");
    Book book3;

    cout << "Book: " << book1.name << " by " << book1.author << endl;
    for (int i = 0; i < book1.ratingsCount; i++){
        cout << "Rating " << i + 1 << ": " << book1.ratings[i] << endl;
    }
    return 0;
}