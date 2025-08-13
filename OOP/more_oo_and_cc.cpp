#include <iostream>

using namespace std;

class Movie{
public:
    string name;
    string genre;
    float rating;
    int actorsCounter;
    string *Actors;

    Movie(string Name, string Genre, float Rating) : name(Name), genre(Genre), rating(Rating) {};

    Movie(){
        name = "N/A";
        genre = "N/A";
        rating = 0.0;
        actorsCounter = 0;
        Actors = new string[actorsCounter];
    }

    ~Movie(){
        delete[] Actors;
        Actors = nullptr;
    }

    //copy constructor for when we want to create a brand new object
    Movie(const Movie& original){
        name = original.name;
        genre = original.genre;
        rating = original.rating;

        actorsCounter = original.actorsCounter;
        
        Actors = new string[actorsCounter];
        for (int i = 0; i < actorsCounter; i++){
            Actors[i] = original.Actors[i];
        }
    }

    //operator overloading is used for when we want to copy an existing object to another existing object
    //if I just did Movie movie4 = movie2, it would call the copy constructor
    //by returning a reference, we're enabling chaining (movie4 = movie2 = movie1)
    Movie& operator=(const Movie& original){
        name = original.name;
        genre = original.genre;
        rating = original.rating;
        actorsCounter = original.actorsCounter;

        delete[] Actors;
        // Actors = nullptr; // here this is not necessary because we immediately re-assign the pointer Actors
                             // this step would be necessary in for example a destructor because we do not immediately re-assign the pointer to a new address
        Actors = new string[actorsCounter];
        for (int i = 0; i < actorsCounter; i++){
            Actors[i] = original.Actors[i];
        }

        return *this;
    }

    void addActor(string newActor){
        string *newActors = new string[actorsCounter + 1];
        for (int i = 0; i < actorsCounter; i++){
            newActors[i] = Actors[i];
        }

        newActors[actorsCounter] = newActor;

        delete[] Actors;
        Actors = newActors;
        actorsCounter++;
    }
};

void printMovieDetails(Movie& movie){
    cout << "\nMovie Details: \n";
    cout << "Movie Name: " << movie.name << endl;
    cout << "Movie Genre: " << movie.genre << endl;
    cout << "Movie Rating: " << movie.rating << endl;
    cout << "Number of Actors: " << movie.actorsCounter << endl;
    cout << "List of Actors: " << endl;
    for (int i = 0; i < movie.actorsCounter; i++){
        cout << i+1 << ". " << movie.Actors[i] << endl;
    }
}

int main(){

    Movie movie1("The Dark Knight", "Action", 9.8);
    Movie movie2("I am Legend", "Action/Horror", 9.1);
    Movie movie3;
    Movie movie4(movie1); // invokes copy constructor: new object created
    movie3 = movie2;      // invokes assignment operator: existing object assigned to

    printMovieDetails(movie1);
    printMovieDetails(movie2);
    printMovieDetails(movie3);
    printMovieDetails(movie4);

    return 0;
}