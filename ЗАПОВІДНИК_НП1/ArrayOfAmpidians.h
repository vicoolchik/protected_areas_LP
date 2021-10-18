#pragma once
#include"SameCommandsForGroups.h"
#include"Animals.h"
#include "Repository.h"
#include <vector>
#include <iostream>
using namespace std;

class Ampidian : public Repository  <Animal> {
	vector <Animal> arrayOfAmpidian;
public:
	void AddAmpidian(Animal &apidian);
	void PrintAmpidian();
	string WriteAmpidianToFile();

};

