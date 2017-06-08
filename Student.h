#pragma once
#include "Osoba.h"
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class Student :	public Osoba
{
public:
	Student();
	Student(string oib);
	~Student();
	string nazivStudija;
	string smjer;
	int semestar;
	void radniStatus() override;
};

