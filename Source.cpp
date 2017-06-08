#pragma once
#include "Osoba.h"
#include "Student.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<Student*> GrupaA;

	int init = 123456789;

	// Generiranje studenata.
	for (int i = 0; i < 5; i++) {

		Student* student = new Student(to_string(init + i));
		GrupaA.push_back(student);
	}

	// Ispis OIB-a i radnog statusa svakog studenta.
	for (int i = 0; i < 5; i++) {
		cout << "OIB: " << GrupaA[i]->OIB << ", radni status: ";
		GrupaA[i]->radniStatus();
	}

	/*
		d) Nejasno definirano.
	*/

	return 0;
}