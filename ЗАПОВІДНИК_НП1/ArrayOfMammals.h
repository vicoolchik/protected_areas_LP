#pragma once
#include"SameCommandsForGroups.h"
#include"Animals.h"
#include <vector>
#include <iostream>
using namespace std;

class Mammal {
	vector <Animal> arrayOfMammal;
public:
	void AddMammal(Animal& mammal);
	void PrintMammal();
	string WriteMammalToFile();
};
