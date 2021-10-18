#pragma once
#include"SameCommandsForGroups.h"
#include"Animals.h"
#include <vector>
#include "Repository.h"
#include <iostream>
using namespace std;

class Reptile : public Repository  <Animal> {
	vector <Animal> arrayOfReptile;
public:
	void AddReptile(Animal& reptile);
	void PrintReptile();
	string WriteReptileToFile();
};