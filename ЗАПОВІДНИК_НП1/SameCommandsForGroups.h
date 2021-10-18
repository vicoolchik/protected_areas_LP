#pragma once
#ifndef COMMAND
#define COMMAND
#include"WorkWithFile.h"
#include "Animals.h"
#include"ArrayOfAllAnimal.h"
#include"ArrayOfAmpidians.h"
#include"ArrayOfBirds.h"
#include"ArrayOfFish.h"
#include"ArrayOfMammals.h"
#include"ArrayOfReptiles.h"
#include"EmployeeMenu.h"
#include"Error.h"

#include <iostream>
#include <vector>
using namespace std;

class Command {
private:
public:
	void PrintAnimalListedInRedBook();
	void PrintInfoAboutAnimalForIndex();
	void AppendGroup();
	void MainPrintGroup();
	void SafeAddAnimal(int groupSelectedByUser, string newspecies, string boolrare);
	void EndOfWork();
	string AnimalWriteToFile();
	Animal& AnimalForIndex(int& index);
	void AddAnimal2();

	bool EqualAnimal();

};
#endif // !COMMAND