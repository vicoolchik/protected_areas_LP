#pragma once
#ifndef File
#define File
#include <fstream>
#include <iostream>
#include <vector>
#include"Animals.h"
#include"ArrayOfAmpidians.h"

class WorkWithFile {
public:
	void GetInfoFromFile( vector<Animal>& array);
	void AppendInfoIntoGroups(string str, vector<Animal>& array);
	void WriteInfoToFile();

};


#endif // !File
