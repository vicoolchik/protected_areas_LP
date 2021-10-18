#include "ArrayOfReptiles.h"


void Reptile::AddReptile(Animal& reptile)
{
	arrayOfReptile.push_back(reptile);
}

void Reptile::PrintReptile()
{
	Command command;
	string str = "������� : \n";
	command.PrintGroup(arrayOfReptile,str);
}

string Reptile::WriteReptileToFile()
{
	Command command;
	string str = "�� ���� �������:\n";
	return command.GroupWriteToFile(arrayOfReptile, str);
}