#ifndef SCHLUESSELTAFEL_H
#define SCHLUESSELTAFEL_H

#include "Tagesschluessel.h"
#include <vector>

class Schluesseltafel{
public:
	Schluesseltafel();	// Default-Constructor
	Schluesseltafel(int enigmaType, int year, int month);	// Constructor with parameters
	~Schluesseltafel(); // Default-Destructor
private:
	int year;
	int month;
	int enigmaType;		// 1=I; 3=M3; 4=M4 Uboote;
	vector<Tagesschluessel*> schluesseliste;

};

#endif
