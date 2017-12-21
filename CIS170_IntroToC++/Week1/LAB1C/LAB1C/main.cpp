// ---------------------------------------------------------------
// Programming Assignment:	LAB1C
// Developer:			Renee Thomas
// Date Written:		1/12/14
// Purpose:			Payroll Program 
// ---------------------------------------------------------------

// add libraries
#include <iostream>
#include <iomanip>
 
using namespace std;

// add main function

void main() 
{
// assign contants
	const double TAX = 0.18;
	const double RETIREMENT = 0.10;
	const double SSECURITY = 0.06;
	const double EMPLOYEECUT = 0.07;

// assign variables
	double weeklySales, grossPay, taxes, socialSecurity, retirement, totalDeductions, takeHomePay;

// get weekly sales amount from user
	cout<< "Input Weekly Sales Amount: $";
	
// put user input of weekly sales amount into varable "weeklySales"
	cin>> weeklySales;

// calculations
	grossPay = weeklySales * EMPLOYEECUT;
	taxes = grossPay * TAX;
	socialSecurity = grossPay * SSECURITY;
	retirement = grossPay * RETIREMENT;
	totalDeductions = taxes + socialSecurity + retirement;
	takeHomePay = grossPay - totalDeductions;


// outputs
	cout<<fixed<<showpoint<<setprecision(2); // use to make two floating points
	

	cout<<"\nTotal Sales: " << setw(12) << "$" << weeklySales << endl;
	cout<<"Gross pay (7%): " << setw(10) << "$" << grossPay << endl;
	cout<<"Federal tax paid: " << setw(9) << "$" << taxes << endl;
	cout<<"Social security paid: " << setw(5) << "$" << socialSecurity << endl;
	cout<<"Retirement contribution: " << setw(2) << "$" << retirement << endl;
	cout<<"Total deductions: " << setw(9) << "$" << totalDeductions << endl;
	cout<<"\nTake home pay: " << setw(11) << "$" << takeHomePay << endl << endl << endl << endl;

// use the system pause to make the conslole output "Press any key to continue"	
	system("pause");
}