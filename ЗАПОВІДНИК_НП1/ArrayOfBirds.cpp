#include "ArrayOfBirds.h"


void Bird::AddBird(Animal& bird)
{
	arrayOfBird.push_back( bird);
}

void Bird::PrintBird()
{
	Command command;
	string str = "������ : \n";
	command.PrintGroup(arrayOfBird,str);
}

string Bird::WriteBirdToFile()
{
	Command command;
	string str = "�� ���� ������:\n";
	return command.GroupWriteToFile(arrayOfBird, str);
}