#include "ArrayOfReptiles.h"


void Reptile::AddReptile(Animal& reptile)
{
	arrayOfReptile.push_back(reptile);
}

void Reptile::PrintReptile()
{
	string str = "������� : \n";
	PrintGroup(arrayOfReptile,str);
}

string Reptile::WriteReptileToFile()
{

	string str = "�� ���� �������:\n";
	return GroupWriteToFile(arrayOfReptile, str);
}