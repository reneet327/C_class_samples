// ---------------------------------------------------------------
// Programming Assignment:	LAB06
// Developer:			Renee Thomas
// Date Written:		2/18/14
// Purpose:			Object Oriented Programming – ATM machine
// ---------------------------------------------------------------

//******************************************************
// ATMMain.cpp file
//******************************************************
#include "menuBuilder.h"
#include <iostream>
#include <iomanip>
using namespace std;

void  main(void){

int choice = 0;
ATM ob1("Renee Thomas","12345678",500.00);

while(choice != 7)
{
ob1.ATMmenu();
cin >> choice;
ob1.ATMChoice(choice);
}
system("pause");
}