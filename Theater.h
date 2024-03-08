//1. include guard
#ifndef THEATER_H
#define THEATER_H

//2. library inclsuions
#include <string>
    using std::string;
#include <array>
    using std::array;

//declare class seat
class Seat;

//3. declare class theater
class Theater
{
    //4. declare member variables
    private:
    int theaterNumber;

    //outer array does rows, inner array does columns
    array<array<Seat,12>, 15> seatingChart;//2d array
    std::string currentMovie;
    int capacity;

    public:  

    //5.constructors
    Theater();
    explicit Theater(int theaterNumber, std::string currentMovie);

    //6. Setters and getters
    //getters do not return parameters
    int getTheaterNumber();
    std::string getCurrentMovie();
    //stters are void and do not return anything
    void setCurrentMovie(std::string newMovie);

    //7.member functions
    void assignSeat(int row, int col);
    void releaseSeat(int row, int col);
    bool isSeatAvailible(int row, int col);


};





#endif
