#include "ArrayOfAllAnimal.h"

vector <Animal>& ArrayOfAnimal::AppendArrray()
{
	WorkWithFile workWithFile;
	string filename = "�������4.txt";
	workWithFile.GetInfoFromFile( arrayOfAnimal);

	return arrayOfAnimal;
}

void ArrayOfAnimal::AllInRedBook()
{
	cout << endl;
	cout << "���������� �� ���� ������ ��������� � ������� ����� :\n ";
	for (vector<Animal>::iterator i = arrayOfAnimal.begin(); i != arrayOfAnimal.end(); i++) {
		if ((*i).listedInRedBook == "���") {
			cout << (*i).ShowInfo() << endl;
		}
	}
}

void ArrayOfAnimal::AddToArray(Animal& animal)
{
	arrayOfAnimal.push_back(animal);
}

Animal& ArrayOfAnimal::operator[](int& idx)
{
	return arrayOfAnimal[idx];
}
