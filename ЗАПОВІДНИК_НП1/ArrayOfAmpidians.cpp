#include "ArrayOfAmpidians.h"

void Ampidian::AddAmpidian(Animal& ampidian)
{
	arrayOfAmpidian.push_back(ampidian);
}

void Ampidian::PrintAmpidian()
{
	string str = "анфібій : \n";
	PrintGroup(arrayOfAmpidian,str);
}

string Ampidian::WriteAmpidianToFile()
{
;
	string str = "Усі види анфібій:\n";
	return GroupWriteToFile(arrayOfAmpidian, str);
}
