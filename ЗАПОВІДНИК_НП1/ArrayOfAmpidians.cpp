#include "ArrayOfAmpidians.h"

void Ampidian::AddAmpidian(Animal& ampidian)
{
	arrayOfAmpidian.push_back(ampidian);
}

void Ampidian::PrintAmpidian()
{
	Command command;
	string str = "������ : \n";
	command.PrintGroup(arrayOfAmpidian,str);
}

string Ampidian::WriteAmpidianToFile()
{
	Command command;
	string str = "�� ���� ������:\n";
	return command.GroupWriteToFile(arrayOfAmpidian, str);
}
