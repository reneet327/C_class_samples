//******************************************************
// ATM.h file
//******************************************************


#include <string>
#include <iostream>
using namespace std;

class atm {
private:
string name;
string type;
double amount;

public:
atm(string name; string location; string type; double amount); //Constructor 
atm(); //default constructor
~atm(); //Destructor

void setName(string name);
string getName();
void setLocation(string location);
string getLocation();
void setAmount(double amount);
double getAmount();
void park();
void drive();
void driveMenu();
void driveatm(int choice);
};