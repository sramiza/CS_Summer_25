#include <iostream>

using namespace std;

class Movie{
public:
    string name;
    string genre;
    float rating;

    Movie(string Name, string Genre, float Rating) : name(Name), genre(Genre), rating(Rating) {};

    Movie(){
        name = "N/A";
        genre = "N/A";
        rating = 0.0;
    }

    //copy constructor for when we want to create a brand new object
    Movie(const Movie& original){
        name = original.name;
        genre = original.genre;
        rating = original.rating;
    }

    //operator overloading is used for when we want to copy an existing object to another existing object
    //if I just did Movie movie4 = movie2, it would call the copy constructor
    //by returning a reference, we're enabling chaining (movie4 = movie2 = movie1)
    Movie& operator=(const Movie& original){
        name = original.name;
        genre = original.genre;
        rating = original.rating;

        return *this;
    }
};

void printMovieDetails(Movie& movie){
    cout << "\nMovie Details: \n";
    cout << "Movie Name: " << movie.name << endl;
    cout << "Movie Genre: " << movie.genre << endl;
    cout << "Movie Rating: " << movie.rating << endl;
}

int main(){

    Movie movie1("The Dark Knight", "Action", 9.8);
    Movie movie2("I am Legend", "Action/Horror", 9.1);
    Movie movie3;
    Movie movie4(movie1);
    movie3 = movie2;

    printMovieDetails(movie1);
    printMovieDetails(movie2);
    printMovieDetails(movie3);
    printMovieDetails(movie4);

    return 0;
}