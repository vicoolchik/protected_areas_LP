#include "ArrayOfMammals.h"


void Mammal::AddMammal(Animal& mammal)
{
	arrayOfMammal.push_back(mammal);
}

void Mammal::PrintMammal()
{

	string str="������� : \n";
	PrintGroup(this->arrayOfMammal,str);
}

string Mammal::WriteMammalToFile()
{

	string str = "�� ���� �������:\n";
	return GroupWriteToFile(arrayOfMammal, str);
}