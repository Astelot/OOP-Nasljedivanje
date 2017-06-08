#pragma once
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class Osoba
{
public:
	Osoba();
	Osoba(string oib);
	~Osoba();
	string OIB;
	string prezime;
	string ime;
	virtual void radniStatus();
};

