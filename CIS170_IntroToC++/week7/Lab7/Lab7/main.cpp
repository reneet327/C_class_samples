// ---------------------------------------------------------------
// Programming Assignment:	LAB07
// Developer:			Renee Thomas
// Date Written:		2/23/14
// Purpose:			Read and Write to files (Names List)
// ---------------------------------------------------------------


#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

// inititialize my functions
void menu();
void writeNameList();
void printNameList();

const char delimiter = ',';

//******************************

// main fuction
int main()
{
cout << "Welcome to the Names Database" << endl;
menu();//only need to call menu() since all other functions are called in this function
system("pause");
return 0;
}

//******************************
// create menu function for add, print, or exit
void menu()
{
char choice;
// do loop so that everything runs though at least 1x and keep running until choice e for end.
do{
// create menu
cout << "(A)dd name" << endl;
cout << "(P)rint name list"<< endl;
cout << "(E)xit" << endl;
cout << "Enter choice: ";
cin >> choice;
cin.ignore();
cout << endl;

// use switch statement to process menu answer
switch(toupper(choice))
{
// write the entries to a file
case 'A': writeNameList(); break;
// call the entries to program to write out to screen
case 'P': printNameList(); break;
// stop program
case 'E': cout << "Good-Bye" << endl; break;
// not a real choice
default: cout << "Invalid entry" << endl; break;
}//swtich
cout << endl;
}while(choice != 'e' || choice != 'E');
}// end menu()

//******************************
// create function to write entries to file
void writeNameList()
{
ofstream outMyStream("names.txt", ios ::app); //create object to write entries to file that append to current file
if(outMyStream.is_open())
{
// initialize string variables
string name = "";
string stAddr = "";
string city = "";
string state = "";
string zip = "";
char again = 'y';


do{
// get info from user
cout << "Enter name: ";
getline(cin, name);
cout << "Enter street address: ";
getline(cin, stAddr);
cout << "Enter City: ";
getline(cin, city);
cout << "Enter state: ";
getline(cin, state);
cout << "Enter zip code: ";
getline(cin, zip);

// write to the file creating csv file with delimiter
outMyStream << name << delimiter;
outMyStream << stAddr << delimiter;
outMyStream << city << delimiter;
outMyStream << state << delimiter;
outMyStream << zip << delimiter;

cout << "Enter another name? (Y or N) ";// enter another name?
cin >> again;
cin.ignore();
cout << endl;
}while (again == 'y' || again == 'Y');// keep looping while user types y
outMyStream.close();// close file!
}
else
cout << "File not opened" << endl;// if file not found, let user know
}



void printNameList()
{
	ifstream inMyStream("names.txt");// create object to get names from file

	if(inMyStream.is_open())// check to see if file is open
	{
		// initialize variables to make code pretty and easier to read
		string recBreaks = "";
		string titleFlourish = "";

		titleFlourish.assign(20, '*'); //This is the character used to flourish around the title
		recBreaks.assign(20, '-'); //This is the character between record displays
		
		int itemCount = 1;
		int fieldNum = 1;
	
		cout<< titleFlourish<<endl;// output pretty stuff and title
		cout << " Names List " << endl;
		cout<< titleFlourish<<endl<<endl;

		string buffer;//create bufffer variable as string

		// read through records in file stopping at each ","
		getline (inMyStream, buffer, ',');

		while(!inMyStream.eof()) // loop through file while there are more entries
		{
			// could have used switch statement... but wrote this first.

			if(fieldNum==1)
			{
				cout << recBreaks << endl;
				cout << "item # " << itemCount << endl;
				cout << "name: " << buffer << endl;
				fieldNum++;
			}
			else if(fieldNum==2)
				{
					cout << "Street Address: " << buffer << endl;
					fieldNum++;
				}
					else if(fieldNum==3)
					{
						cout << "City: " << buffer << endl;
						fieldNum++;
					}
						else if(fieldNum==4)
						{
							cout << "State: " << buffer << endl;
							fieldNum++;
						}
					
			else
			{
				cout << "Zip Code:" << buffer << endl;
				fieldNum=1;
				itemCount++;
			}
			getline (inMyStream, buffer, ',');
		}//  end while
		cout << recBreaks << endl;
		inMyStream.close();

	}
	else
	cout << "Error: could not open file" << endl;
	
}// end function