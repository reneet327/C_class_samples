//******************************************************
// ATM.cpp file
//******************************************************
#include "menuBuilder.h"
using namespace std;

ATM::ATM(string nm, string Acct, double b){ //Constructor 
name = nm;
AcctNum=Acct;
bal = b;
}
ATM::ATM(){ //Constructor 
name = "Student Name";
AcctNum="5551212";
bal = 400.00;
}
ATM::~ATM(){}//Destructor
void ATM::setname(string nm){
name = nm;
}
string ATM::getname(){
return name;
}
void ATM::setAcctNum(string Acct){
AcctNum =  Acct;
}
string ATM::getAcctNum(){
return AcctNum;
}
void ATM::setbal(double bal)
{
	bal = bal;
}
double ATM::getbal()
{
	return bal;
}

void ATM::about(){
	cout<<"Devry Bank, established 2011"<<endl;
	cout<<"(123) 456-7890"<<endl;
	cout<<"12345 1st St."<<endl;
	cout<<"Someplace, NJ 12345"<<endl;
}
void acctInfo(string nm, string acct)
{
cout<<"Name on Account: "<<nm<<"\tAccount Number: "<<acct<<endl;
}
void ATM::ATMmenu()
{
cout << endl;
cout << " ATM Menu " << endl << endl;
cout << "1. Check balance " << endl;
cout << "2. Make witherawl" << endl;
cout << "3. Make deposit" << endl;
cout << "4. View account information" << endl;
cout << "5. View statement" << endl;
cout << "6. View bank information" << endl;
cout << "7. Exit" << endl;
cout << " Enter Choice: ";

}
void ATM::statement(){
	cout << "01/01/11 - McDonald\'s - $6.27"<<endl;
	cout << "01/15/11 - Kwik Trip - $34.93"<<endl;
	cout << "02/28/11 - Target - $124.21"<<endl;
}

void ATM::ATMChoice(int choice)
{
	
switch(choice)
{
case 1: cout << "Current balance is: "<<bal << endl;
break;

case 2: cout << "How much would you like to withdraw?: ";
cin >> changeBal;
if ( changeBal < bal)
{
	bal -= changeBal;
	cout << "Your new balance is: $" << bal <<endl;
}
else
{
	cout<<"Insuficient Funds"<<endl;
}
break;

case 3: cout << "How much would you like to deposit? ";
cin >> changeBal;
bal += changeBal;
cout << "Your new balance is: $ " << bal <<endl;
break;

case 4: 
	acctInfo(name, AcctNum);
break;

case 5: 
	statement();
break;

case 6:
	about();
break;
case 7: cout << "Thank you for banking at Devry Bank.  Good-Bye" << endl; break;
default:
cout << "invalid choice" << endl; break;
}// switch
}