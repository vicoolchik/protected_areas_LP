#include "ArrayOfFish.h"


void Fish::AddFish(Animal& fish)
{
	arrayOfFish.push_back(fish);
}

void Fish::PrintFish()
{

	string str = "��� : \n";
	PrintGroup(arrayOfFish,str);
}


string Fish::WriteFishToFile()
{

	string str = "�� ���� ���:\n";
	return (arrayOfFish, str);
}