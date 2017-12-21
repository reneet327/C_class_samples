#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;


void menu();
void writeSalesInvoice();
void printSalesReceipt();

const char delimiter = ',';
int main()
{
cout << "Welcome to the Sales Program" << endl;
menu();
system("pause");
return 0;
}
void menu()
{
char choice;
do{
cout << "(A)dd item" << endl;
cout << "(P)rint receipt"<< endl;
cout << "(E)xit" << endl;
cout << "Enter choice: ";
cin >> choice;
cin.ignore();
cout << endl;
switch(toupper(choice))
{
case 'A': writeSalesInvoice(); break;
case 'P': printSalesReceipt(); break;
case 'E': cout << "Good-Bye" << endl; break;
default: cout << "Invalid entry" << endl; break;
}//swtich
cout << endl;
}while(choice != 'e' && choice != 'E');
}
void writeSalesInvoice()
{
ofstream outMyStream("sales.txt");
if(outMyStream.is_open())
{
string item = "";
//string price = "";
double price;
char again = 'y';
do{
// get info
cout << "Enter item: ";
getline(cin, item);
cout << "Enter price $";
//getline(cin, price);
cin >> price;
// write to the file
outMyStream << item << delimiter;
outMyStream << price<<delimiter;

cout << "Enter another item? (Y or N) ";
cin >> again;
cin.ignore();
cout << endl;
}while (again == 'y' || again == 'Y');
outMyStream.close();
}
else
cout << "File not opened" << endl;
}
void printSalesReceipt()
{
ifstream inMyStream("sales.txt");
if(inMyStream.is_open())
{
	string recBreaks = "";
	recBreaks.assign(20, '-'); //This is the character between record displays
	int itemCount = 1;
	int fieldNum = 1;
cout << " Sales Receipt " << endl;
// read the first record
string buffer;
getline (inMyStream, buffer, ',');
while(!inMyStream.eof())
{


	if(fieldNum==1)
	{
	cout << recBreaks << endl;
	cout << "item # " << itemCount << endl;
		cout << "Item: " << buffer << endl;
		fieldNum++;
	}
	else
	{
			cout << "Price $" << buffer << endl;
		fieldNum=1;
		itemCount++;
	}

getline (inMyStream, buffer, ',');
}// while
cout << recBreaks << endl;
inMyStream.close();
}// if
else
cout << "Error: could not open file" << endl;
}
