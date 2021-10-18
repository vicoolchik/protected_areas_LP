#include "EmployeeMenu.h"

Command command;

void EmployeeMemu::Menu() {
	char userInput;
	command.AppendGroup();
	do {
		ShowMenu();
		cin >> userInput;
		safeUserInput(userInput);
		if (userInput == '0') {
			break;
		}
	} while (userInput != '0');
}


void EmployeeMemu::ShowMenu()
{
	cout <<endl<< "³����, �� ������ � ���� ���������� �������\n";
	cout << "������� ����� : " << endl;
	cout << "1) ������ �� ������ ����� ��� ������ ;\n";
	cout << "2) ����������� ������ ��� ����� ������ �� �� ���� ������ ;\n";
	cout << "0) ����� � ���� ;\n";
}

void EmployeeMemu::safeUserInput(char userInput)
{
	try{
		UserInput(userInput);
	}
	catch (Error& error) { cout <<endl<< "������� - " << error.ToString() << endl; }
	catch (...) {}
}

void EmployeeMemu::UserInput(char userInput)
{
	switch (userInput)
	{
	case '1':
		AddAnimal();
		break;
	case '2':
		PrintListOfAllAnimals();
		cout << endl;
		break;
	case '0':
		command.EndOfWork();
		break;
	default:
		throw Error(ErrorCode::WrongCommand);
		break;
	}
}

void EmployeeMemu::PrintListOfAllAnimals(){
	command.MainPrintGroup();
}

void EmployeeMemu::AddAnimal()
{
	int groupSelectedByUser;
	string newspecies;
	string boolrare;
	do {
		cout <<endl<< "������ �� ��� � ��������� ���� �� ������ ������ ������� : "<<endl;
		cout << "0) ���� ������ ����������� �� ��������� ���� ;" << endl;
		ShowListOfGroupOfAnimal();
		cin >> groupSelectedByUser;
		if (groupSelectedByUser == 0) break;
		
		cout << "������ ��� ���� ������� :" << endl;
		cin >> newspecies;
		cout << "�� ��������� �� ������� ����� (���/�):" << endl;
		cin >> boolrare;
		command.SafeAddAnimal(groupSelectedByUser, newspecies, boolrare);
		

	} while (groupSelectedByUser != 0);
}



void EmployeeMemu::ShowListOfGroupOfAnimal()
{
	cout << "1) ������ ;" << endl;
	cout << "2) ����᳿ ;" << endl;
	cout << "3) ����� ;" << endl;
	cout << "4) �����볿 ;" << endl;
	cout << "5) ���� ; " << endl;

}




