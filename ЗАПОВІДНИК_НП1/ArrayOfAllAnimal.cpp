#include "ArrayOfAllAnimal.h"

vector <Animal>& ArrayOfAnimal::AppendArrray()
{
	WorkWithFile workWithFile;
	string filename = "тварини4.txt";
	workWithFile.GetInfoFromFile( arrayOfAnimal);

	return arrayOfAnimal;
}

void ArrayOfAnimal::AllInRedBook()
{
	cout << endl;
	cout << "Надруковані усі види тварин записаних у Червону Книгу :\n ";
	for (vector<Animal>::iterator i = arrayOfAnimal.begin(); i != arrayOfAnimal.end(); i++) {
		if ((*i).listedInRedBook == "так") {
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
