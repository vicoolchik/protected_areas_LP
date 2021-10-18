#include "ArrayOfMammals.h"


void Mammal::AddMammal(Animal& mammal)
{
	arrayOfMammal.push_back(mammal);
}

void Mammal::PrintMammal()
{
	Command command;
	string str="ссавц≥в : \n";
	command.PrintGroup(this->arrayOfMammal,str);
}

string Mammal::WriteMammalToFile()
{
	Command command;
	string str = "”с≥ види ссавц≥в:\n";
	return command.GroupWriteToFile(arrayOfMammal, str);
}