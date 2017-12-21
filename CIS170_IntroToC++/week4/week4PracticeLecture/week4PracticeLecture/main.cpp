#include <iostream>
#include <cctype>
using namespace std;

// function prototypes
int readPhoneNumber(char &d1, char &d2, char &d3, char &d4, char &d5,
        char &d6, char &d7, char &d8);

void main()
{
    char d1, d2, d3, d4, d5, d6, d7, d8;
    int  checkValue=0;

    do
    {
        checkValue = readPhoneNumber(d1, d2, d3, d4, d5, d6, d7, d8);
		 //Call function to read in phone number. The function returns -1 if no hyphen
		//returns -2 if number begins with a 0, returns -3 if number begins with 555
        if(checkValue == -5) break;
        
        switch(checkValue)
        {
            case -1:
                cout << "ERROR - Hyphen is not in the correct position\n\n";
                break;
            case -2:
                cout << "ERROR - Phone number cannot begin with 0\n\n";
                break;
            case -3:
                cout << "ERROR - Phone number cannot begin with 555\n\n";
                break;

            default:
                    cout << "Phone Number Dialed: " << d1 << d2 << d3 << d4
        << d5 << d6 << d7 << d8 << endl << endl;
        }

    } while (true);
}
 
int readPhoneNumber(char &d1, char &d2, char &d3, char &d4, char &d5,
        char &d6, char &d7, char &d8)
{
    int ret;

    cout << "Enter a phone number (Q to quit): ";
    cin >> d1; 
    if(d1 == 'Q') return -5; 
    cin >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8;
    
    if (d4 != '-')
        return -1;
    if (d1 == '0')
        return -2;
    if (d1 == '5' && d2 == '5' && d3 == '5')
        return -3;
    return 0;
}
 





