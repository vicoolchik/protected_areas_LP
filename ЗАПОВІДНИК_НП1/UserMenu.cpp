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
	cout <<  "Вітаємо, ви увійшли в меню заповідника «Ґорґани»\n";
	cout << "Виберіть опцію : " << endl;
	cout << "0) Вийти з меню ;\n";
	cout << "1) Переглянути усі види екскурсій;\n";
	cout << "2) Видрукувати список усіх царст тварин та всі види тварин ;\n";
	cout << "3) Усі види тварин записані у Червону Книгу\n";
	cout << "4) Видрукувати тварину із списку за індексом ;\n";
	cout << "5) Порівняти двох тварину із  списку ? \n";
}

void UserMemu::safeUserInput(char userInput)
{
	try {
		UserInput(userInput);
	}
	catch (Error& error) { cout << endl << "Помилка - " << error.ToString() << endl; }
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
			cout << endl << "0) Повернутися до головного меню ;\n";
			cout << "1) Види екскурсій ;\n";
			cout << "2) Прайс-лист ;\n";
			cout << "3) Калькулятор ціни ;\n";
			//сout << "4) Усі тварини занесені до Червоної Книги ;\n";
			cin >> userInput;
			if (userInput == 1) {
				cout << endl << "1) Піша екскурсіяж;\n" << "2) Онлайн екскурсія;\n" << "3) Сафарі;\n";
			}
			if (userInput == 2) {
				cout << endl << "Для дітей віком до 12 років знижка 50% ;\n" << "1) Піша екскурсіяж - 200 грн ;\n" << "2) Онлайн екскурсія - 50 грн ;\n" << "3) Сафарі - 800 грн ;\n";
			}
			if (userInput == 3) {
				cout << endl << "Виберіть одну із запропонованих екскурсій :\n";
				cin >> excursion;
				cout << "Ведіть кількість дорослих :\n";
				cin >> numberOfAdult;
				cout << "Ведіть кількість дітей :\n";
				cin >> numberOfChildren;
				cout << endl << "Вартість екскурсії = " << PriceCalculator(numberOfAdult, numberOfChildren, excursion) << endl << endl;
			}

			if ((userInput != 1)&& (userInput != 2)&& (userInput != 3) && (userInput != 0)) {
				throw Error(ErrorCode::WrongCommand);
			}

		}
		catch (Error& error) { cout << endl << "Помилка - " << error.ToString() << endl; }
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
			cout << "Тварини еквівалентні\n";
		}
		else cout << "Тварини не еквівалентні\n";
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
	cout << "1) Ссавці ;" << endl;
	cout << "2) Амфібії ;" << endl;
	cout << "3) Птахи ;" << endl;
	cout << "4) Рептилії ;" << endl;
	cout << "5) Риби ; " << endl;

}

