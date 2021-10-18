#pragma once

#include "SameCommandsForGroups.h"
#include"Animals.h"
#include <vector>
#include <iostream>
using namespace std;


class SpeciesRepository {

public:

	void Add(vector <Animal> arrayOfAnimal—ertainSpecies, Animal& animal)
	{
		arrayOfAnimal—ertainSpecies.push_back(animal);
	}


	void Print(vector <Animal> arrayOfAnimal—ertainSpecies, string str)
	{
		cout << endl;
		cout << "Õ‡‰ÛÍÓ‚‡Ì≥ ÛÒ≥ ‚Ë‰Ë " << str;
		for (vector<Animal>::iterator i = arrayOfAnimal—ertainSpecies.begin(); i != arrayOfAnimal—ertainSpecies.end(); i++) {
			cout << (*i).ShowInfo() << endl;
		}
	}

	string WriteToFile(vector <Animal> arrayOfAnimal—ertainSpecies, string str)
	{
		string line;
		line += str;
		for (vector<Animal>::iterator i = arrayOfAnimal—ertainSpecies.begin(); i != arrayOfAnimal—ertainSpecies.end(); i++) {
			line += (*i).TextWriteToFile();
		}
		return line;
	}
};
