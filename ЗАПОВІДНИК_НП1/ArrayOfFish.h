#pragma once
#include"SameCommandsForGroups.h"
#include"Animals.h"
#include <vector>
#include <iostream>
using namespace std;

class Fish {
	vector <Animal> arrayOfFish;
public:
	void AddFish(Animal& fish);
	void PrintFish();
	string WriteFishToFile();
};