#pragma once
#include"SameCommandsForGroups.h"
#include"Animals.h"
#include <vector>
#include <iostream>
using namespace std;

class Reptile {
	vector <Animal> arrayOfReptile;
public:
	void AddReptile(Animal& reptile);
	void PrintReptile();
	string WriteReptileToFile();
};