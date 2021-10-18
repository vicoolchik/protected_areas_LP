#include "ArrayOfBirds.h"


void Bird::AddBird(Animal& bird)
{
	arrayOfBird.push_back( bird);
}

void Bird::PrintBird()
{

	string str = "птах≥в : \n";
	PrintGroup(arrayOfBird,str);
}

string Bird::WriteBirdToFile()
{

	string str = "”с≥ види птах≥в:\n";
	return GroupWriteToFile(arrayOfBird, str);
}