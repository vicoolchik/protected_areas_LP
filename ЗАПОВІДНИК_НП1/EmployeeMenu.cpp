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
	cout <<endl<< "Вітаємо, ви увійшли в меню заповідника «Ґорґани»\n";
	cout << "Виберіть опцію : " << endl;
	cout << "1) Додати до списку новий вид тварин ;\n";
	cout << "2) Видрукувати список усіх царст тварин та всі види тварин ;\n";
	cout << "0) Вийти з меню ;\n";
}

void EmployeeMemu::safeUserInput(char userInput)
{
	try{
		UserInput(userInput);
	}
	catch (Error& error) { cout <<endl<< "Помилка - " << error.ToString() << endl; }
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
		cout <<endl<< "Оберіть до якої з навединих груп ви хочете додати тварину : "<<endl;
		cout << "0) Якщо хочете повернутися до головного меню ;" << endl;
		ShowListOfGroupOfAnimal();
		cin >> groupSelectedByUser;
		if (groupSelectedByUser == 0) break;
		
		cout << "Введіть вид нової тварини :" << endl;
		cin >> newspecies;
		cout << "Чи занесений до Червоної Книги (так/ні):" << endl;
		cin >> boolrare;
		command.SafeAddAnimal(groupSelectedByUser, newspecies, boolrare);
		

	} while (groupSelectedByUser != 0);
}



void EmployeeMemu::ShowListOfGroupOfAnimal()
{
	cout << "1) Ссавці ;" << endl;
	cout << "2) Амфібії ;" << endl;
	cout << "3) Птахи ;" << endl;
	cout << "4) Рептилії ;" << endl;
	cout << "5) Риби ; " << endl;

}




