#include "Animals.h"

Animal::Animal(string group ,string species, string listedInRedBook)
{
	this->group = group;
	this->species = species;
	this->listedInRedBook = listedInRedBook;
}


string Animal::ShowInfo()
{
	return  "Царство тварини - " + group + " , " + " вид тварини - "+ species+" , чи занесена до червоної книги - "+ listedInRedBook ;
}



string Animal::TextWriteToFile() {
	return group + ", " + species + ", " + listedInRedBook + ";\n";
}

Animal& Animal::operator=(const Animal& animal)
{
	if (this == &animal) {
		return *this;
	}
	this->group = animal.group;
	this->species = animal.species;
	this->listedInRedBook = animal.listedInRedBook;
	return *this;
}

bool Animal::operator==(const Animal& animal)
{

	if (this->group == animal.group && this->species == animal.species && this->listedInRedBook == animal.listedInRedBook) return true;
	return false;
}

bool Animal::operator!=(const Animal& animal) {
	return !((*this) == animal);
}

ostream& Animal::operator<<(ostream& out)
{
	return out << (this)->ShowInfo();
}

ostream& operator<<(ostream& out, Animal& animal)
{
	return animal << out;
}

istream& operator>>(istream& in, Animal& animal)
{
	string species1;
	string listedInRedBook1;
	string group1; 

	in >> group1 >> species1 >> listedInRedBook1;

	animal = Animal(group1, species1, listedInRedBook1);

	return in;
}