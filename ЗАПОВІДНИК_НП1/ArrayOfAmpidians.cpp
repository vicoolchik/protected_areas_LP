#include "ArrayOfAmpidians.h"

void Ampidian::AddAmpidian(Animal& ampidian)
{
	arrayOfAmpidian.push_back(ampidian);
}

void Ampidian::PrintAmpidian()
{
	string str = "������ : \n";
	PrintGroup(arrayOfAmpidian,str);
}

string Ampidian::WriteAmpidianToFile()
{
;
	string str = "�� ���� ������:\n";
	return GroupWriteToFile(arrayOfAmpidian, str);
}
