#include<iostream>

using namespace std;

int main(){
	
	int total=0;
	int i;

	cout<<"All the even numbers from 1 - 10 are listed below:\n" << endl;

	for (i = 2; i<=10; i= i+2)
	{
		total = total + i;
		
		cout<<i<< endl;
	}

	cout << "\nThe total of the even numbers is: " << total << endl;

 	cin.ignore(2);

}