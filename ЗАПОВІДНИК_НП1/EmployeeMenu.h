#pragma once
#include <iostream>
#include"WorkWithFile.h"
#include "SameCommandsForGroups.h"
using namespace std;

class EmployeeMemu{
public:

	void Menu();
private:
	void ShowMenu();
	void safeUserInput(char userInput);
	void UserInput(char userInput);
	void PrintListOfAllAnimals();
	void AddAnimal();

	void ShowListOfGroupOfAnimal();
};