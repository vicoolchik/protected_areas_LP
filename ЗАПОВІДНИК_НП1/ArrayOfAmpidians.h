#pragma once
#include"SameCommandsForGroups.h"
#include"Animals.h"
#include <vector>
#include <iostream>
using namespace std;

class Ampidian {
	vector <Animal> arrayOfAmpidian;
public:
	void AddAmpidian(Animal &apidian);
	void PrintAmpidian();
	string WriteAmpidianToFile();

};

