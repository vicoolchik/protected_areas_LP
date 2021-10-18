#pragma once
#include "UserMenu.h"
#include "EmployeeMenu.h"

void ChooseMenu() {
	string people;
	do {
		cout << "\nВи відвідувач/працівник заповідника ?\n";
		cin >> people;
		try {
			if (people == "відвідувач") {
				UserMemu user;
				user.Menu();
			}
			if (people == "працівник") {
				EmployeeMemu employee;
				employee.Menu();
			}
			if ((people != "відвідувач") && (people != "працівник")) {
				throw Error(ErrorCode::WrongMenu);
			}
		}
		catch (Error& error) { cout << endl << "Помилка - " << error.ToString() << endl; }
		catch (...) {}
	} while ((people != "працівник") && (people != "відвідувач"));
}