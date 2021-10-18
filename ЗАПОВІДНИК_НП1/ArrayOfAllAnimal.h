#pragma once
#ifndef ARRAY
#define ARRAY
#include "Animals.h"
#include "WorkWithFile.h"
#include<vector>
class ArrayOfAnimal {
private:
	vector <Animal> arrayOfAnimal;
public:
	vector <Animal>& AppendArrray();
	void AllInRedBook();
	void AddToArray(Animal& animal);
	Animal& operator[](int& idx);
};

#endif // !ARRAY
