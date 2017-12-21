#include <iostream> 
#include <string> 
#include <iomanip> 
#include <fstream>// add to use fstream class 

using namespace std; 

// main fuction 
int main() 
{ 
	int num;
int sum = 0;

for (int i = 0; i<5; i++)
{
    cout<< "enter a number: ";
    cin>> num;
    
    sum += num;
}

cout<< "The sum of the numbers you entered was: "<< sum<< endl;

	system("pause"); 
	return 0; 
}