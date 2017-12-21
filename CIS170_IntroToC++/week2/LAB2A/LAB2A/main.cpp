// ---------------------------------------------------------------
// Programming Assignment:	LAB2A
// Developer:			Renee Thomas
// Date Written:		1/14/14
// Purpose:			Smallest Number Game 
// ---------------------------------------------------------------


#include<iostream>

using namespace std;

int main(){
// output intro to program
	cout << "***************************************" << endl;
	cout << "Welcome to the \"Smallest Number\" game!"<< endl;
	cout << "***************************************"<< endl<< endl<< endl;

// define varables
	int  num1, num2, smallest;

// get numbers from users and input into variables
	cout <<"Enter a number between 0 and 9(then press the enter key): ";
	cin>>num1;

	
	cout<<"\nEnter another number between 0 and 9(then press the enter key): ";
	cin>>num2;
	

// code calculations

	if (num1 == num2)
	{
		cout<< "\n \nBoth numbers are the same."<<endl;
	}
	else if (num1 < num2)
	{
		smallest = num1;
		cout<< "\n \nThe smallest number is " <<smallest<<"."<<endl;
	}
	else
	{
		smallest = num2;
		cout<< "\n \nThe smallest number is " <<smallest<<"."<<endl;
	}

 	cin.ignore(2);

}
