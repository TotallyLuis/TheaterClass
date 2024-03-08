#include "Theater.h"
#include <string>
    using std::string;
#include <array>
    using std::array;





    // constructors
    Theater::Theater(){

    }
    Theater::Theater(int theaterNumber, string currentMovie){

    }

    // Setters and getters
    int Theater::getTheaterNumber(){
        return theaterNumber;
    }
    string Theater::getCurrentMovie(){
        return currentMovie;
    
    }
    void Theater::setCurrentMovie(string newMovie){
        currentMovie = newMovie;
    }

    // member functions
    void Theater::assignSeat(int row, int col){
        Seat seatToAssign = seatingChart[row-1][col-1]//indexes start at zero so we minus 1
        seatToAssign.assignToGuest();
    }
    void Theater::releaseSeat(int row, int col){
        Seat seatToAssign = seatingChart[row-1][col-1]//indexes start at zero so we minus 1
        seatToAssign.release();
    }
    bool Theater::isSeatAvailible(int row, int col){
        Seat seatToAssign = seatingChart[row-1][col-1]//indexes start at zero so we minus 1
        seatToAssign.isAssigned();
    }










