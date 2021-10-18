#pragma once
#include"SameCommandsForGroups.h"
#include"Animals.h"
#include <vector>
#include <iostream>
using namespace std;

class Bird {
	vector <Animal> arrayOfBird;
public:
	void AddBird(Animal& bird);
	void PrintBird();
	string WriteBirdToFile();
};