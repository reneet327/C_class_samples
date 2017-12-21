#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
const int TOTAL = 5;

int main(){
// output intro to program
	cout << "***************************************" << endl;
	cout << "Diver Scoring Program"<< endl;
	cout << "Instructions: Enter Diver's name, city, judges scores and difficulty."<< endl;
	cout << "To add additional divers type Y, when finished, type N"<< endl;
	cout << "***************************************"<< endl;

	string name; 
	string city;
	string sent = "";
	int numDivers = 0;
	double allAverage = 0;

	do
	{
		// get diver's name and city
		cout<< "\n\n\nEnter Diver's Name: ";
		getline(cin, name);
		cout<< "Enter Diver's City: ";
		getline(cin, city);

		
		// intialize Judge scores variables
		int num = 0;
		int sum = 0;
		int high = -1;
		int low = 101;
		int i=0;

		// ask for judges scores in nested loop
			
			// get judges scores
			do
			{
				
				cout << "Enter the score given by judge " << i + 1 << ": ";
				cin >> num;
					
					// make sure user input is in correct range
					while(num<0 || num>10)
					{
						cout<<"Please enter a number between 0 and 10"<<endl;
						cout << "Enter the score given by judge " << i + 1 << ": ";
					cin >> num;
					}

				

			// test if num is the highest
			if (num > high)
			high = num;
			// test if num is the lowest
			if (num < low)
			low = num;
			sum += num;

			i++;

			}
			while (i<TOTAL);

				// get level of difficulty

			double difLevel;	
				cout << "\nEnter level of difficulty: ";
				cin >> difLevel;
					
				// make sure user input is in correct range
					while(difLevel<1 || difLevel>1.67)
					{
						cout<<"Please enter a number between 1 and 1.67"<<endl;
						cout << "Enter level of difficulty: ";
						cin >> difLevel;
					}
							
			
		// calculate scores
		cout << setprecision(2) << fixed; //Display values 2 decimal places
				
		int hiLo = high + low;
		int subTotal = sum - hiLo;
		int average = subTotal/3;
		double final = average * difLevel;


		
		// output diver's details
		cout<< "\n\nDiver: "<< name << ", " << "City: "<< city<< endl;
		cout<< "Overall score was: "<< final<< endl<<endl;

		numDivers++;
		allAverage += final;

		cin.ignore();
              cout<< "Type \"y\" to add another diver, or \"n\" to get final totals and end program: ";
              getline(cin,sent);
             
             
       }
       while (sent == "y" || sent == "Y");

	cout<<"\n\nNumber of divers participating: "<< numDivers<< endl;
	cout<< "Average score of all divers: "<< allAverage <<endl;


cin.ignore(2);

}

