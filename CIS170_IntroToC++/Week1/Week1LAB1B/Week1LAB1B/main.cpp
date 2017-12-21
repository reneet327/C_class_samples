// ---------------------------------------------------------------
// Programming Assignment:	LAB1B
// Developer:			Renee Thomas
// Date Written:		1/9/14
// Purpose:				Ticket Calculation Program 
// ---------------------------------------------------------------

// add libraries
#include <iostream>
 
using namespace std;

// add main function

void main() 
{
	//initialize variables as integers

	int childTkts, adultTkts, totalTkts;

	// add values to all the variables

	childTkts = 3;
	adultTkts = 2;

	// Calculate total tickets by adding childTkts and adultTkts
   totalTkts = childTkts + adultTkts;

   // output the total number of tickets to the console
   cout << totalTkts << endl;

   //add cin.ignore(2); to stop the console widow from closing
   cin.ignore(2);


}
