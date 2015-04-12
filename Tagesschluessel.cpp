#include "Tagesschluessel.h"

Tagesschluessel::Tagesschluessel(){}
Tagesschluessel::Tagesschluessel(int enigmaType){
	switch (enigmaType){
	case 3: initM3();
		break;
	case 4: initM4();
		break;
	default: initM3();
	};
}
Tagesschluessel::~Tagesschluessel(){}

// Creates a Tagesschluessel for a M3-Enigma
void Tagesschluessel::initM3(){
	srand((unsigned)time(NULL));		// initialize random seed
}

// Creates a Tagesschluessel for a M4-Enigma
void Tagesschluessel::initM4(){}

void Tagesschluessel::printUkw(){}

void Tagesschluessel::printWalzenlage(){}

void Tagesschluessel::printRingstellung(){}

void Tagesschluessel::printSteckverbindungen(){}

// Converts a given character to the number of the character at the alphabet (A=a=1)
int Tagesschluessel::charToInt(char character){
	int number = character;
	if ((number > 64) && (number < 91)){
		number = number - 64;
	}
	else if ((number > 96) && (number < 123)){
		number = number - 96;
	}
	else {
		number = 0;
	}
	return number;
}

// Converts a number X to the lower case character at the x position in the alphabet
char Tagesschluessel::intToLowerChar(int number){
	char character = 0;
	if (number < 27 && number > 0){
		character = number + 96;
	}
	return character;
}

// Converts a number X to the upper case character at the x position in the alphabet
char Tagesschluessel::intToUpperChar(int number){
	char character = 0;
	if (number < 27 && number > 0){
		character = number + 64;
	}
	return character;
}

// Converts a integer to Roman numeral (only up to 10)
string Tagesschluessel::intToRoman(int number){
	string romanNumeral;
	switch (number){
	case 1: romanNumeral = "I";
		break;
	case 2: romanNumeral = "II";
		break;
	case 3: romanNumeral = "III";
		break;
	case 4: romanNumeral = "IV";
		break;
	case 5: romanNumeral = "V";
		break;
	case 6: romanNumeral = "VI";
		break;
	case 7: romanNumeral = "VII";
		break;
	case 8: romanNumeral = "VIII";
		break;
	case 9: romanNumeral = "IX";
		break;
	case 10: romanNumeral = "X";
		break;
	default: romanNumeral = "";
	}
	return romanNumeral;
}


