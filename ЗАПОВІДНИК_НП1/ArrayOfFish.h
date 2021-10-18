#pragma once
#include"SameCommandsForGroups.h"
#include"Animals.h"
#include <vector>
#include "Repository.h"
#include <iostream>
using namespace std;

class Fish: public Repository <Animal>{
	vector <Animal> arrayOfFish;
public:
	void AddFish(Animal& fish);
	void PrintFish();
	string WriteFishToFile();
};