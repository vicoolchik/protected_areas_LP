#include "ArrayOfMammals.h"


void Mammal::AddMammal(Animal& mammal)
{
	arrayOfMammal.push_back(mammal);
}

void Mammal::PrintMammal()
{
	Command command;
	string str="������� : \n";
	command.PrintGroup(this->arrayOfMammal,str);
}

string Mammal::WriteMammalToFile()
{
	Command command;
	string str = "�� ���� �������:\n";
	return command.GroupWriteToFile(arrayOfMammal, str);
}