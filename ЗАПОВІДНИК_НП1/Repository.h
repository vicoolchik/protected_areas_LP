#pragma once
#include"SameCommandsForGroups.h"
#include"Animals.h"
#include <vector>
#include <iostream>
using namespace std;

template <class T>
class Repository {
protected:
	void PrintGroup(vector<T>& array, string str)
	{
		cout << endl;

		for (vector<Animal>::iterator i = array.begin(); i != array.end(); i++) {
			cout << (*i).ShowInfo() << endl;
		}
	}

	string GroupWriteToFile(vector<T>& array, string str) {
		string line;
		vector<Animal>& this_array = array;
		line += str;
		for (vector<Animal>::iterator i = this_array.begin(); i != this_array.end(); i++) {
			line += (*i).TextWriteToFile();
		}
		return line;
	}
};

