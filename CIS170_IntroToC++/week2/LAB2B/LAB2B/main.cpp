// ---------------------------------------------------------------
// Programming Assignment:	LAB2B
// Developer:			Renee Thomas
// Date Written:		1/14/14
// Purpose:			Shipping Charges 
// ---------------------------------------------------------------

// add libraries
#include <iostream>
#include <iomanip>
 
using namespace std;

// add main function

void main() 
{
	//initialize variables as doubles

	double sales, shipping;

// Introduce program
	cout<< "**************************"<< endl;
	cout<< "Shipping Charge Calculator"<< endl;
	cout<< "**************************"<< endl<< endl;

// get sales from user

	cout << "Enter Total Sales Amount: $";
	cin >>sales;

//calculate shipping charges

	if (sales >= 5000)
	{
		shipping = 20.00;

	}
	else if ((sales >= 1000) && (sales < 5000))
	{
		shipping = 15.00;
	}
	else if ((sales >= 500) && (sales < 1000))
	{
		shipping = 10.00;
	}
	else if ((sales >= 250) && (sales < 500))
	{
		shipping = 8.00;
	}
	else if ((sales > 0) && (sales < 250))
	{
		shipping = 5.00;
	}
	else
	{
		shipping = 0;
	}

	cout<<fixed<<showpoint<<setprecision(2); // use to make two floating points

	if (shipping != 0)
	{
	cout<<"\n\nTotal Sales: $" <<sales << endl;
	cout<<"Shipping Charges: $" <<shipping<< endl;
	}
	else
	{
	cout<<"Error incorrect input"<<endl;
	}
   //add cin.ignore(2); to stop the console widow from closing
   cin.ignore(2);
}