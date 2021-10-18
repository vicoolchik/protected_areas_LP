#include "WorkWithFile.h"

Command command2;
string filename = "тварини4.txt";

void WorkWithFile::GetInfoFromFile(vector<Animal>& array)
{
	char text[5000];
	ifstream file(filename);
	if (!file.eof()) {
		if (!file.is_open()) {
			cout << "error" << endl;
		}
		else {
			while (!file.eof())
			{
				file.getline(text, 5000);
				if (file.eof()) { break; };
				AppendInfoIntoGroups(text, array);
				//cout << text << endl;
			}
			file.close();
		}
	}
}

void WorkWithFile::AppendInfoIntoGroups(string str, vector<Animal>& array)
{
	if (str[0]=='У') {}
	else {
		int index = str.find(",");
		int k = 0;
		string group = str.substr(k, index - k);
		k = index + 2;
		index = str.find(",", index + 1);
		string species = str.substr(k, index - k);
		k = index + 2;
		index = str.find(";", index + 1);
		string listedInRedBook = str.substr(k, index - k);
		Animal animal(group, species, listedInRedBook);
		array.push_back(animal);
	}
}

void WorkWithFile::WriteInfoToFile()
{
	string str;
	fstream file;
	file.open(filename, ofstream::out);
	if (!file.is_open()) {
		cout << "Error" << endl;
	}
	else {
		file << command2.AnimalWriteToFile();
	}
}
