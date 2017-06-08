#include "Osoba.h"



Osoba::Osoba()
{
}

Osoba::Osoba(string oib)
{
	OIB = oib;
}


Osoba::~Osoba()
{
}

void Osoba::radniStatus()
{
	cout << "Osoba nema radni status!" << endl;
}
