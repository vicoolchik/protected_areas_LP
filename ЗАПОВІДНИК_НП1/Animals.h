#pragma once
#ifndef ANIMAL_H
#define ANIMAL_H

#include<iostream>
#include <string>
using namespace std;

class Animal {
private:
public:
	string species;
	string listedInRedBook;
	string group;
	Animal(string group=" " ,string species = " ", string listedInRedBook = " ");
	string ShowInfo();
	string TextWriteToFile();
	Animal& operator=(const Animal& animal);
	ostream& operator<<(ostream& out);
	friend ostream& operator<<(ostream& out, Animal& person);
	friend istream& operator>>(istream& in, Animal& animal);
	bool operator==(const Animal& animal);
	bool operator!=(const Animal& animal);
};


#endif // !ANIMAL_H