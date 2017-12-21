#include <iostream>
#include <string>

using namespace std;

const int ARRAY_SIZE = 9;

void inputPlanetNames(string []);
void outputPlanetNames(const string []);

int main()
{
string planets[ARRAY_SIZE];

outputPlanetNames(planets); // Display array values before population
inputPlanetNames(planets); // Populate string array
outputPlanetNames(planets); // Display array values after population
cin.ignore(2);
return 0;
}

void inputPlanetNames(string planetsIn[])
{
planetsIn[0] = "Mercury";
planetsIn[1] = "Venus";
planetsIn[2] = "Earth";
planetsIn[3] = "Mars";
planetsIn[4] = "Jupiter";
planetsIn[5] = "Saturn";
planetsIn[6] = "Uranus";
planetsIn[7] = "Neptune";
planetsIn[8] = "Pluto";
}

void outputPlanetNames(const string planetsOut[])
{
cout << "The planets are " << endl;

for(int i = 0; i < ARRAY_SIZE; i++)
{
cout << "[" << planetsOut[i] << "]" << endl;
}

cout << "Completed output." << endl << endl;
}
