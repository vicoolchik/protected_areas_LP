#include "ArrayOfBirds.h"


void Bird::AddBird(Animal& bird)
{
	arrayOfBird.push_back( bird);
}

void Bird::PrintBird()
{

	string str = "������ : \n";
	PrintGroup(arrayOfBird,str);
}

string Bird::WriteBirdToFile()
{

	string str = "�� ���� ������:\n";
	return GroupWriteToFile(arrayOfBird, str);
}