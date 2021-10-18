#include "ArrayOfBirds.h"


void Bird::AddBird(Animal& bird)
{
	arrayOfBird.push_back( bird);
}

void Bird::PrintBird()
{
	Command command;
	string str = "птах≥в : \n";
	command.PrintGroup(arrayOfBird,str);
}

string Bird::WriteBirdToFile()
{
	Command command;
	string str = "”с≥ види птах≥в:\n";
	return command.GroupWriteToFile(arrayOfBird, str);
}