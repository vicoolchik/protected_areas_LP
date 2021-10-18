#include "ArrayOfMammals.h"


void Mammal::AddMammal(Animal& mammal)
{
	arrayOfMammal.push_back(mammal);
}

void Mammal::PrintMammal()
{

	string str="ссавц≥в : \n";
	PrintGroup(this->arrayOfMammal,str);
}

string Mammal::WriteMammalToFile()
{

	string str = "”с≥ види ссавц≥в:\n";
	return GroupWriteToFile(arrayOfMammal, str);
}