#include <iostream>
#include <string>

using namespace std;

#ifndef FIGURA_H
#define FIGURA_H

class Figura {

public:
	int typ_;
	string nazwa_;
	virtual float oblicz_pole() const = 0;
	Figura(int typ, string nazwa);

};

#endif