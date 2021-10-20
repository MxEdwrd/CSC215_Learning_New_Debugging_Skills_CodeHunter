/*
	Author: Max Edward
	Email: maxedwar@uat.edu
	Assignment Name: UAT Professors & Guessing Game
*/

// Learning New C++ Debugging Skills - Code Hunter

// These bring in the iostream for console readout and the string object for the string variable.
#include <iostream>
#include <string>
 
using namespace std; // This defines the entire standard namespace so that objects from it may be used without calling for them. 
 
// Start of program.
int main()
{
	// Variables
	string textToAnalyze;
	//int foo = 0; // originally uncommented, did not serve any purpose in the program.
	int vowels = 0;
	int consonants = 0;
	int digits = 0;
	int spaces = 0;
	int lengthOfStringSubmittedForAnalysis = 0;
	int unknownCharacters = 0;
	int checkSum = 0;
	//int bar = 0; // originally uncommented, did not serve any purpose in the program. 
 
	// Message to user.
	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze:\n" << endl;
	getline(cin, textToAnalyze); // Gets what the user types and sends it to the textToAnalyze variable.
 
	for (int i = 0; i < textToAnalyze.length(); ++i) // For loop.
	{
		// Checks for vowels: a, e, i, o, u, and uppercase versions.
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			// Adds one to vowels variable. 
			++vowels; // originally --vowels;
		}
		// Checks for consonates: anything but a, e, i, o, u, and uppercase versions.
		else if ((textToAnalyze[i] >= 'a'&& textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A'&& textToAnalyze[i] <= 'Z'))
		{
			// Adds one to vowels variable.
			++consonants; // originally //++consonants;
		}
		// Checks for numbers: 0 through 9. 
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			// Adds one to the digits variable.
			++digits;
		}
		// Checks for spaces or nothing input.
		else if (textToAnalyze[i] == ' ')
		{
			// Adds one to the spaces variable.
			++spaces;
		}
		// Checks for anything that isn't a letter or number. For example, a period, comma, semicolon, etc.
		else
		{
			// Adds one to the unknown characters variable.
			++unknownCharacters;
		}
	}
 
	lengthOfStringSubmittedForAnalysis = textToAnalyze.length(); // Sets the length of the word or string of characters equal to the length of textToAnalyze from the cin function.
	checkSum = unknownCharacters + vowels + consonants + digits + spaces; // Sets the checkSum variable as the sum of all other variables in use.
 
	// Output for variable counter totals.
	cout << "\nVowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;
 
	// If checkSum is equal to the length of string submitted for analysis...
	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		// Output this.
		cout << "\nThis program self checking has found this Analysis to be valid." << endl;
	}
	// Otherwise, if checkSum does NOT equal the length of string submitted for analysis...
	else
	{
		// Output this.
		cout << "\nWARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}
 
	system("pause"); // Pause to prevent instant closure upon completion of program.
	return 0; // Ends program.
}