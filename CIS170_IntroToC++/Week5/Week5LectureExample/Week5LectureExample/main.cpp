#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

const double PI= 3.14159;
const int SIZE = 7;

//Function prototypes
double getRadius();
double returnVolume(double rad);

void DisplayTemperatures(const string dayNames[],
    const double temps[], int sz);
double CalculateAverageTemperature(const double temps[], int sz);
void DisplayBelowAverage(const string dayNames[],
    const double temps[], int sz, double averageTemp);

int main()
{

	double avg = 0;
	string dayNames[ ] =
	{ "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
double temp[SIZE]={0.0}; //Declare array called temp, initialize all elements
for(int i=0;i<SIZE;i++)
	{
		cout<<"\nEnter the temperature of Alderaan on "<<dayNames[i]<<":";
		cin>>temp[i];
	}


cout<<"The temperatures are: \n";
 DisplayTemperatures(dayNames, temp, SIZE);
 avg = CalculateAverageTemperature(temp, SIZE);
 cout<<"The average temperature is: "<<avg;
DisplayBelowAverage(dayNames, temp, SIZE, avg);
cout<<endl<<endl;

double radius = getRadius();

	double volume =returnVolume(radius);
	cout<<fixed;
    cout << "The volume is "<<setprecision(2)<<volume<<endl;
	cout<<"the radius is "<<radius;
	
	cin.ignore(2);
	return 0;

}

double returnVolume(double radius)
{
	return 4/3*PI*radius*radius*radius;

}


double getRadius()
{
	double rad=-1;
while(rad<0 || rad>4000) 
	{
	cout << "Please enter the radius must be between 0 and 4000: ";
	cin>>rad;
	}
return rad;
}


void DisplayTemperatures(const string dayNames[],
    const double temps[], int sz)
{
    cout << setw(10) << left << "\n  Day" 
            << setw(5) << right << "Temp" << endl;
    for(int i = 0; i < sz; i++)
        cout << setw(10) << left << dayNames[i] 
            << setw(5) << right << temps[i] << endl;
}

double CalculateAverageTemperature(const double temps[], int sz)
{
    int i;
    double averageTemp, totalTemp=0;

    for(i = 0; i < sz; i++)
	{
        totalTemp += temps[i];
	}
    averageTemp = totalTemp / sz;
    
    cout << "\nAverage Temperature: " << averageTemp << endl << endl;

    return averageTemp;
}

void DisplayBelowAverage(const string dayNames[],
    const double temps[], int sz, double averageTemp)
{
    cout << "Temperatures below the average\n";
    cout << setw(10) << left << "  Day" 
            << setw(5) << right << "Temp" << endl;
    for(int i = 0; i < sz; i++)
	{
        if(temps[i] < averageTemp)
		{
            cout << setw(10) << left << dayNames[i] 
                << setw(5) << right << temps[i] << endl;
		}
	}
}
