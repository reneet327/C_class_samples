//******************************************************
// ATM.h file
//******************************************************


#include <string>
#include <iostream>
using namespace std;

class ATM {
private:
string name;
string AcctNum;
double bal;
double changeBal;
public:
ATM(string nm, string Acct, double bal); //Constructor 
ATM(); //default constructor
~ATM(); //Destructor
void setname(string nm);
string getname();
void setAcctNum(string Acct);
string getAcctNum();
void setbal(double bal);
double getbal();
void about();
void AcctInfo(string nm, string acct);
void ATMmenu();
void statement();
void ATMChoice(int choice);
};