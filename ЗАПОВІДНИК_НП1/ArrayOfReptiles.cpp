#include "ArrayOfReptiles.h"


void Reptile::AddReptile(Animal& reptile)
{
	arrayOfReptile.push_back(reptile);
}

void Reptile::PrintReptile()
{
	string str = "рептилій : \n";
	PrintGroup(arrayOfReptile,str);
}

string Reptile::WriteReptileToFile()
{

	string str = "Усі види рептилій:\n";
	return GroupWriteToFile(arrayOfReptile, str);
}