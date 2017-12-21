#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>// add to use fstream class
using namespace std;




// main fuction
int main()
{	
	char delimiter = ','; // needed for csv file type
	string item = "";
	double price = 0;
	char ans = 'y';
	// initialize object to create text file to write user input to
		ofstream intoFile("textFile.txt");
	do
	{
		// get input from user
		cout << "Enter item: ";
		getline(cin, item);// place user input into item
		cout << "Enter price $";
		cin >> price;// place user input into price
		cout<<"Enter another item? (Y or N) ";
		cin>> ans;// place user input into ans
		cin.ignore();// get rid of extra return after ans
		cout<<endl;
	 
		
	
		if (intoFile.is_open())// check to see if text file is open, if it is, write the user input to the file using the delimiter
		{
			// write to the file
			intoFile << item << delimiter;
			intoFile << price<<delimiter;
			
		}
		else
			cout<<"can't find file"<<endl;// this is if the file can't be found (I thought the program makes the file if one wasn't there...)
	}
	while(ans == 'y' || ans == 'Y');//if the user typs a y then the code loops to get more user input and appends it into the file.
	// if the user types an n then the file gets closed and the code continues
	intoFile.close();

	

	// initialize file to grab info from file to output to program
	ifstream outOfFile("textFile.txt");

	if(outOfFile.is_open())// if the file is open run the following code
	{
		string buffer;
		int fieldNum = 1;
		int itemCount = 1;

		cout << " Sales Receipt " << endl;
		

		getline (outOfFile, buffer, ',');// get the first entry in the file and stop at the comma
		while(!outOfFile.eof())// go through the text file until you reach the end of the file and execute the following code
		{


			if(fieldNum==1)// Since there are only 2 parts to each item entry, we check to see if we are in position one or two
				// if it's position one then execute the following code.
			{
				cout << "item # " << itemCount << endl;
				cout << "Item: " << buffer << endl;
				fieldNum++;// makes fieldNum equal to two (no longer one), so it moves to the else section below
			}
			else
			{
				cout << "Price $" << buffer << endl<<endl;
				fieldNum=1;//puts the fieldNum back to 1 so that we move to the first string before the "," of the next item
				itemCount++;// updates the count of how many different items there are in the list
			}

		getline (outOfFile, buffer, ',');// gets the next string section before the "," in the buffer
		}// end while
	
	outOfFile.close(); // close file after loop ends
	}// end if
	else
	cout << "Error: could not open file" << endl;// in case the file can't be found output error to user



	system("pause");
	return 0;
}

