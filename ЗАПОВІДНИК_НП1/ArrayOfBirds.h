#pragma once
#include"SameCommandsForGroups.h"
#include"Animals.h"
#include "Repository.h"
#include <vector>
#include <iostream>
using namespace std;

class Bird : public Repository <Animal> {
	vector <Animal> arrayOfBird;
public:
	void AddBird(Animal& bird);
	void PrintBird();
	string WriteBirdToFile();
};