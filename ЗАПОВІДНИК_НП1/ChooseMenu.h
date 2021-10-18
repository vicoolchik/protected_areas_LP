#pragma once
#include "UserMenu.h"
#include "EmployeeMenu.h"

void ChooseMenu() {
	string people;
	do {
		cout << "\n�� ��������/��������� ���������� ?\n";
		cin >> people;
		try {
			if (people == "��������") {
				UserMemu user;
				user.Menu();
			}
			if (people == "���������") {
				EmployeeMemu employee;
				employee.Menu();
			}
			if ((people != "��������") && (people != "���������")) {
				throw Error(ErrorCode::WrongMenu);
			}
		}
		catch (Error& error) { cout << endl << "������� - " << error.ToString() << endl; }
		catch (...) {}
	} while ((people != "���������") && (people != "��������"));
}