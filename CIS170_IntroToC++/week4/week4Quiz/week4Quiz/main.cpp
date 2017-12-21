# include<iostream>
# include<string>

using namespace std;
void name();

int main()
{
	name();

	cout<<"Welcome to the world of C++!"<<endl;


	cin.ignore(2);
	return 0;
}

void name()
{
	string name;
	cout<< "What is your name? ";
	getline(cin, name);

	cout<< "\nHi "<<name<<", ";
}