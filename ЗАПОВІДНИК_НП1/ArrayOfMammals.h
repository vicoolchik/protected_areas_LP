#pragma once
#include"SameCommandsForGroups.h"
#include"Animals.h"
#include <vector>
#include "Repository.h"
#include <iostream>
using namespace std;

class Mammal : public Repository  <Animal> {
	vector <Animal> arrayOfMammal;
public:
	void AddMammal(Animal& mammal);
	void PrintMammal();
	string WriteMammalToFile();
};
