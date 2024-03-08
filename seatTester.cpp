#include "Seat.h"
#include <string>
    using std::string;
#include <array>
    using std::array;
#include <iostream>
    using std::cout;
    using std::endl;
    using std::cin;

int main(){
    Seat defaultSeat = Seat();
    seat seat1 = Seat(true, "John Doe");
    seat seat2 = Seat(true, "Jane Doe");
    seat seat3 = Seat(false, "");
 
 //setters and getters
    string expectedName1 = "John Doe";
    string actualNameS1 = seat1.getOccupant();

    bool s1NameTest = expectedName1 == actualNameS1;

    cout << "Seat 1 name test: " << (s1NameTest ? "Passed" : "Failed") << endl;









    return 0;
}
