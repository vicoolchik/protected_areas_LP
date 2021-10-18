#include "UserMenu.h"

Command command1;

void UserMemu::Menu() {
	char userInput;
	command1.AppendGroup();
	do {
		ShowMenu();
		cin >> userInput;
		//cout << endl;
		if (userInput == '0') {
			break;
		}
		safeUserInput(userInput);
	} while (userInput != '0');
}


void UserMemu::ShowMenu()
{
	cout << endl ;
	cout <<  "³����, �� ������ � ���� ���������� �������\n";
	cout << "������� ����� : " << endl;
	cout << "0) ����� � ���� ;\n";
	cout << "1) ����������� �� ���� ��������;\n";
	cout << "2) ����������� ������ ��� ����� ������ �� �� ���� ������ ;\n";
	cout << "3) �� ���� ������ ������� � ������� �����\n";
	cout << "4) ����������� ������� �� ������ �� �������� ;\n";
	cout << "5) �������� ���� ������� ��  ������ ? \n";
}

void UserMemu::safeUserInput(char userInput)
{
	try {
		UserInput(userInput);
	}
	catch (Error& error) { cout << endl << "������� - " << error.ToString() << endl; }
	catch (...) {}
}


void UserMemu::Excursions()
{
	int userInput;
	int numberOfAdult;
	int numberOfChildren;
	int excursion;
	do {
		try {
			cout << endl << "0) ����������� �� ��������� ���� ;\n";
			cout << "1) ���� �������� ;\n";
			cout << "2) �����-���� ;\n";
			cout << "3) ����������� ���� ;\n";
			//�out << "4) �� ������� ������� �� ������� ����� ;\n";
			cin >> userInput;
			if (userInput == 1) {
				cout << endl << "1) ϳ�� ���������;\n" << "2) ������ ��������;\n" << "3) �����;\n";
			}
			if (userInput == 2) {
				cout << endl << "��� ���� ���� �� 12 ���� ������ 50% ;\n" << "1) ϳ�� ��������� - 200 ��� ;\n" << "2) ������ �������� - 50 ��� ;\n" << "3) ����� - 800 ��� ;\n";
			}
			if (userInput == 3) {
				cout << endl << "������� ���� �� �������������� �������� :\n";
				cin >> excursion;
				cout << "����� ������� �������� :\n";
				cin >> numberOfAdult;
				cout << "����� ������� ���� :\n";
				cin >> numberOfChildren;
				cout << endl << "������� ������� = " << PriceCalculator(numberOfAdult, numberOfChildren, excursion) << endl << endl;
			}

			if ((userInput != 1)&& (userInput != 2)&& (userInput != 3) && (userInput != 0)) {
				throw Error(ErrorCode::WrongCommand);
			}

		}
		catch (Error& error) { cout << endl << "������� - " << error.ToString() << endl; }
		catch (...) {};
	} while (userInput != 0);
}

double UserMemu::PriceCalculator(int numberOfAdult, int numberOfChildren, int excursion)
{
	if (excursion ==1) {
		return numberOfAdult * 200 + numberOfChildren * 100;
	}
	if (excursion == 2) {
		return numberOfAdult * 50 + numberOfChildren * 25;
	}
	if (excursion == 3) {
		return numberOfAdult * 800 + numberOfChildren * 400;
	}
}




void UserMemu::UserInput(char userInput)
{
	switch (userInput)
	{
	case '1':
		Excursions();
		break;
	case '2':
		PrintListOfAllAnimals();
		cout << endl;
		break;
	case'3':
		command1.PrintAnimalListedInRedBook();
		break;
	case'4':
		command1.PrintInfoAboutAnimalForIndex();
		break;
	case'5':
		if (command1.EqualAnimal()) {
			cout << "������� ����������\n";
		}
		else cout << "������� �� ����������\n";
		break;
	case '0':
		break;
	default:
		throw Error(ErrorCode::WrongCommand);
		break;
	}
}

void UserMemu::PrintListOfAllAnimals() {
	command1.MainPrintGroup();
}

void UserMemu::ShowListOfGroupOfAnimal()
{
	cout << "1) ������ ;" << endl;
	cout << "2) ����᳿ ;" << endl;
	cout << "3) ����� ;" << endl;
	cout << "4) �����볿 ;" << endl;
	cout << "5) ���� ; " << endl;

}

