#include "ArrayOfFish.h"


void Fish::AddFish(Animal& fish)
{
	arrayOfFish.push_back(fish);
}

void Fish::PrintFish()
{
	Command command;
	string str = "риб : \n";
	command.PrintGroup(arrayOfFish,str);
}


string Fish::WriteFishToFile()
{
	Command command;
	string str = "”с≥ види риб:\n";
	return command.GroupWriteToFile(arrayOfFish, str);
}