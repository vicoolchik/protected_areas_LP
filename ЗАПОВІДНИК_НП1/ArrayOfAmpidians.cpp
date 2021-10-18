#include "ArrayOfAmpidians.h"

void Ampidian::AddAmpidian(Animal& ampidian)
{
	arrayOfAmpidian.push_back(ampidian);
}

void Ampidian::PrintAmpidian()
{
	Command command;
	string str = "анфібій : \n";
	command.PrintGroup(arrayOfAmpidian,str);
}

string Ampidian::WriteAmpidianToFile()
{
	Command command;
	string str = "Усі види анфібій:\n";
	return command.GroupWriteToFile(arrayOfAmpidian, str);
}
