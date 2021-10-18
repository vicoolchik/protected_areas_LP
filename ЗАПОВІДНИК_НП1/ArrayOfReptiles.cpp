#include "ArrayOfReptiles.h"


void Reptile::AddReptile(Animal& reptile)
{
	arrayOfReptile.push_back(reptile);
}

void Reptile::PrintReptile()
{
	Command command;
	string str = "рептилій : \n";
	command.PrintGroup(arrayOfReptile,str);
}

string Reptile::WriteReptileToFile()
{
	Command command;
	string str = "Усі види рептилій:\n";
	return command.GroupWriteToFile(arrayOfReptile, str);
}