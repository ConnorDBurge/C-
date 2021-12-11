#include <iostream>

using namespace std;

class Book
{
public:
    string title; // class variables
    string author;
    int pages;

    Book() // default constructor
    {
        title = "no title";
        author = "no author";
        pages = 0;
    }

    Book(string aTitle, string aAuthor, int aPages) // constructor
    {
        title = aTitle; // instance variables
        author = aAuthor;
        pages = aPages;
    }
}; // must add semi colon

class Student
{
public:
    string name;
    string major;
    double gpa;

    Student(string aName, string aMajor, double aGpa)
    {
        name = aName; // instance variables
        major = aMajor;
        gpa = aGpa;
    }

    // instance methods (funcitions)
    bool onHonorRole()
    {
        return gpa >= 3.5;
    }
}; // must add semi colon

class Movie
{
private:
    string rating;

public:
    string title;
    string director;

    Movie(string aTitle, string aDirector, string aRating)
    {
        title = aTitle; // instance variables
        director = aDirector;
        setRating(aRating);
    }

    void setRating(string aRating)
    {
        if (aRating == "G" || aRating == "PG-13" || aRating == "R")
        {
            rating = aRating;
        }
        else
        {
            rating = "NR";
        }
    }

    string getRating() { return rating; }
};

int main()
{
    Book book1("Hello World", "Connor Burge", 500);
    Book book2; // uses default constructor
    cout << book1.title << ": " << book1.author << endl;
    cout << book2.title << ": " << book2.author << endl;

    Student connor("Connor Burge", "Computer Science", 4.0);
    cout << connor.onHonorRole() << endl;

    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    cout << avengers.getRating();
}