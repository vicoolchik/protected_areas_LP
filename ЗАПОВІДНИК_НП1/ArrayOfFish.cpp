#include "ArrayOfFish.h"


void Fish::AddFish(Animal& fish)
{
	arrayOfFish.push_back(fish);
}

void Fish::PrintFish()
{

	string str = "риб : \n";
	PrintGroup(arrayOfFish,str);
}


string Fish::WriteFishToFile()
{

	string str = "”с≥ види риб:\n";
	return (arrayOfFish, str);
}