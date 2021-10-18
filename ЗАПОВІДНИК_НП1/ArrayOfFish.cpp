#include "ArrayOfFish.h"


void Fish::AddFish(Animal& fish)
{
	arrayOfFish.push_back(fish);
}

void Fish::PrintFish()
{
	Command command;
	string str = "��� : \n";
	command.PrintGroup(arrayOfFish,str);
}


string Fish::WriteFishToFile()
{
	Command command;
	string str = "�� ���� ���:\n";
	return command.GroupWriteToFile(arrayOfFish, str);
}