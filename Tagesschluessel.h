#ifndef TAGESSCHLUESSEL_H
#define TAGESSCHLUESSEL_H

#include <string>
#include <time.h>

using namespace std;

class Tagesschluessel{
public:
	Tagesschluessel();					// Default-Constructor
	Tagesschluessel(int enigmaType);	// Constructor with parameters
	~Tagesschluessel();					// Default-Destructor
private:
	char ukw;					// Umkehrwalze
	int walzenlage[3];			// Walzenlage
	int ringstellung[3];		// Ringstellung
	char steckverbindungen[20];	// Steckverbindungen

	void initM3();		// Creates a Tagesschluessel for a M3-Enigma
	void initM4();		// Creates a Tagesschluessel for a M4-Enigma

	void printUkw();				
	void printWalzenlage();
	void printRingstellung();
	void printSteckverbindungen();

	int charToInt(char character);		// Converts a given character to the number of the character at the alphabet (A=a=1)
	char intToLowerChar(int number);	// Converts a number X to the lower case character at the x position in the alphabet
	char intToUpperChar(int number);	// Converts a number X to the upper case character at the x position in the alphabet
	string intToRoman(int number);		// Converts a integer to Roman numeral (only up to 10)
	
};

#endif
