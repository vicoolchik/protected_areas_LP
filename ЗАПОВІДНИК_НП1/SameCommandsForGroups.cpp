#include "SameCommandsForGroups.h"

Mammal mammal1;
Bird bird1;
Fish fish1;
Reptile reptile1;
Ampidian ampidian1;
ArrayOfAnimal arrayOfAnimal;
//string filename = "тварини3.txt";

void Command::PrintGroup(vector<Animal>& array,string str)
{
	cout << endl;
	cout << "Надруковані усі види "<<str;
	for (vector<Animal>::iterator i=array.begin();i!=array.end();i++) {
		cout << (*i).ShowInfo() << endl;
	}
}



void Command::AppendGroup()
{

	vector<Animal>& this_array=arrayOfAnimal.AppendArrray();
	//AddAnimal2();
	for (vector<Animal>::iterator i = this_array.begin(); i != this_array.end(); i++) {

		bool t = (*i).group == "ссавець";
		if ((*i).group == "ссавець") { mammal1.AddMammal(*i); };
		if ((*i).group == "амфібія") { ampidian1.AddAmpidian(*i); };
		if ((*i).group == "птах") { bird1.AddBird(*i); };
		if ((*i).group == "рептилія") { reptile1.AddReptile(*i); };
		if ((*i).group == "риба") { fish1.AddFish(*i); };
	}

}

void Command::MainPrintGroup()
{
	cout << "Cписок усіх тварин : " << endl;
	ampidian1.PrintAmpidian();
	bird1.PrintBird();
	fish1.PrintFish();
	mammal1.PrintMammal();
	reptile1.PrintReptile();
	//cout << endl;
}





void Command::SafeAddAnimal(int groupSelectedByUser, string newspecies, string boolrare)
{
	Animal animal("", newspecies, boolrare);
	try {
		switch (groupSelectedByUser)
		{
		case 1:
			animal.group = "ссавець";
			mammal1.AddMammal(animal);
			break;
		case 2:
			animal.group = "амфібії";
			ampidian1.AddAmpidian(animal);
			break;
		case 3:
			animal.group = "птах";
			bird1.AddBird(animal);
			break;
		case 4:
			animal.group = "рептилії";
			reptile1.AddReptile(animal);
			break;
		case 5:
			animal.group = "риба";
			fish1.AddFish(animal);
			break;
		case 0:
			break;
		default:
			throw Error(ErrorCode::WrongCommand);
			break;
		}
	}
	catch (Error& error) { cout << "Помилка " << error.ToString() << endl; }
	catch(...){}
}

void Command::PrintAnimalListedInRedBook()
{
	arrayOfAnimal.AllInRedBook();
}

void Command::EndOfWork()
{
	WorkWithFile file;
	file.WriteInfoToFile();

}



string Command::GroupWriteToFile(vector<Animal>& array, string str) {
	string line;
	vector<Animal>& this_array = array;
	line += str;
	for (vector<Animal>::iterator i = this_array.begin(); i != this_array.end(); i++) {
		line += (*i).TextWriteToFile();
	}
	return line;
}

string Command::AnimalWriteToFile()
{
	string line;
	line += mammal1.WriteMammalToFile() + ampidian1.WriteAmpidianToFile() + bird1.WriteBirdToFile() + reptile1.WriteReptileToFile() + fish1.WriteFishToFile();
	return line;
}

Animal& Command::AnimalForIndex(int& index)
{
	return arrayOfAnimal[index];
}

bool Command::EqualAnimal()
{
	int index1;
	int index2;
	cout << "Ведіть індекс тварини  :";
	cin >> index1;
	cout << "Ведіть індекс тварини з якою бажаєте порівняти :";
	cin >> index2;
	return(AnimalForIndex(index1) == AnimalForIndex(index2));

}

void Command::AddAnimal2()
{
	Animal animal;
	cin >> animal;
	arrayOfAnimal.AddToArray(animal);
}

void Command::PrintInfoAboutAnimalForIndex() {
	int index;
	cout << "Ведіть індекс тварини :";
	cin >> index;

	cout << AnimalForIndex(index);
}


