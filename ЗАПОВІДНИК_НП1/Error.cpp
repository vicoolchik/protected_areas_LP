#include"Error.h"
//#include<string>
//using namespace std;

Error::Error(ErrorCode code)
{
	this->code = code;
}

string Error::ToString()
{
	switch (code)
	{
	case WrongCommand:
		return "Невірна кованда";
	case WrongMenu:
		return "Невірнo вказаний параметр";

	default:
		return "";
	}
}
