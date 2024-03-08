#ifndef SEAT_H
#define SEAT_H
#include <string>
    using std::string;



class Seat{
    private:

    /*assigned (bool): A flag indicating whether the seat is currently assigned (true) or available (false).
    occupant (std::string): A string to store the name of the Member occupying the seat, or "Guest" if the seat is occupied by a non-member guest.*/
    bool assigned;
    string occupant;

    public:
    /*Constructors:

Default Constructor: Initialize assigned to false. occupant is initialized as an empty string.
Parameterized Constructor: Accepts assigned and occupant. Initializes the seat with assignment status, and occupant information.
Accessors (getters)

isAssigned(): Returns true if the seat is assigned, otherwise false.
getOccupant(): Returns the name of the occupant or "Guest" if the seat is assigned to a non-member guest.
Mutators (setters):

assign(const std::string& name): Marks the seat as assigned and sets the occupant to the provided name.
release(): Marks the seat as available and clears the occupant information.
Other functions:

to_string(): Used to get a string representation of the class. See the Display Specs file for example formatting.*/
 
 //contructors
    Seat();
    Seat(bool assigned, const string &occupant);
//getters
    bool isAssigned()const;
    string getOccupant()const;


//setters
void assign(const string &name);
void release();

}





















#endif