#pragma once
#ifndef MENU_H
#define MENU_H
#include <iostream>
#include"WorkWithFile.h"
#include "SameCommandsForGroups.h"
using namespace std;

class UserMemu {
public:

	void Menu();
private:
	void ShowMenu();
	void safeUserInput(char userInput);
	void UserInput(char userInput);
	void PrintListOfAllAnimals();
	void ShowListOfGroupOfAnimal();
	void Excursions();
	double PriceCalculator(int numberOfAdult, int numberOfChildren, int excursion);

};


#endif // !MENU_H
