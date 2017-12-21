// ---------------------------------------------------------------
// Programming Assignment:	LAB5A
// Developer:			Renee Thomas
// Date Written:		2/8/14
// Purpose:			Arrays - Average Score
// ---------------------------------------------------------------



# include <iostream>
# include <iomanip>
# include <string>
# include <cctype> 

using namespace std;

void inputData(string playerName[], int playerScore[], int &numPlayers); // initiate inputData
void displayPlayerData(string playerName[], int playerScore[],int &numPlayers); // initiate displayPlayerData
int CalculateAverageScore(int playerScore[],int &numPlayers, int &totalScores, double &average);// initiate CalculateAverageScore
void DisplayBelowAverage(string playerName[], int playerScore[],int &numPlayers, int totalScores, double &average); // initiate DisplayBelowAverage


// main function
int main()
{
	// declare variables and arrays in main
	string playerName[100];
	int playerScore[100];
	int numPlayers = 0;
	int totalScores = 0;
	double average = 0.0;
	

	// call functions
	inputData(playerName, playerScore, numPlayers);
	displayPlayerData(playerName, playerScore, numPlayers);
	CalculateAverageScore(playerScore, numPlayers, totalScores, average);
	DisplayBelowAverage(playerName, playerScore, numPlayers, totalScores, average);
		
	cin.ignore();
	return 0;

}
// create inputData function
void inputData(string playerName[], int playerScore[], int &numPlayers)
{
	for (int i = 0; i<100; i++)
	{
		// get player name
		cout<<"Enter player Name (Press Q to quit): ";
		getline(cin,playerName[i]);// store user input into playerName array
			
		// check to see if user chose Q or added another player
		if(playerName[i] == "Q" || playerName[i] == "q")
		{
			break;	// if user clicked Q, break from loop to get final info								
		}else{
		
			// get score for playerName 
			cout<<"Enter score for "<<playerName[i]<<": ";
			cin>>playerScore[i];// store player score in array
			numPlayers ++; // add 1 to numPlayers
			cin.ignore(); // clear the que
		}// end if statement

	}// end for loop

}// end inputData function

// create displayPlayerData function
void displayPlayerData(string playerName[], int playerScore[],int &numPlayers)
{
	// output player name and player score titles
	cout<<setw(20)<<left<<"\nPlayer Name"<<setw(5)<<right<< "Player Score"<<endl;

	// iterate through all of the players
	for (int i = 0; i<numPlayers;i++)
		{
		
		// output all of the player names and scores in arrays
		cout<<setw(20)<<left<<playerName[i]<<setw(5)<<right<< playerScore[i]<<endl;
		
		}
}

// create CalculateAverageScore
int CalculateAverageScore(int playerScore[],int &numPlayers, int &totalScores, double &average)
{
	// iterate through all the players
	for(int i=0; i<numPlayers; i++)
	{
		totalScores += playerScore[i];// add all of the scores together
	}	
		average = totalScores/numPlayers;// get average

		return average;

}

// create DisplayBelowAverage function
void DisplayBelowAverage(string playerName[], int playerScore[],int &numPlayers, int totalScores, double &average)
{
cout<<"\nThere were "<<numPlayers<<" players with a total score of: "<<totalScores<<endl; // output the number of players and the total scores
cout<<fixed;
	cout<<"The average total score was: "<<setprecision(2)<<average<<endl; // output the average score overall

	cout<<"\nPlayers that scored below the average score:"<<endl; 

	cout<<setw(20)<<left<<"Player Name"<<setw(5)<<right<< "Player Score"<<endl;

	// iterate through all of the players
	for (int i = 0; i< numPlayers;i++)
		{
			if(playerScore[i] < average)// look for all of the players with a score below the average score
			{
			cout<<setw(20)<<left<<playerName[i]<<setw(5)<<right<< playerScore[i]<<endl; // output all players with below average scores
			}
		}

}

			