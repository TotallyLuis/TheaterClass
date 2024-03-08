#include "Seat.h"
#include <string>
    using std::string;
#include <array>
    using std::array;




// constructors

//default constructor
Seat::Seat():assigned(false), occupant(""){

}

//parameterized constructor
Seat::Seat(bool assigned, const string &occupant):assigned(assigned), occupant(occupant){

}































