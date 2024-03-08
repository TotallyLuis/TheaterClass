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
//setters and getters
bool Seat::isAssigned()const{
    return assigned;
}
std::string Seat::getOccupant()const{
    return occupant;
}
void Seat::assign(const string &name){
    assigned = true;
    occupant = name;
}
void seat::release(){
    assigned = false;
    occupant = "";
}
std::string Seat::to_string()const{
    string result = "Seat: ";
    if(assigned){
        result += "Assigned to " + occupant;
    }
    else{
        result += "Available";
    }
    return result;
}




























