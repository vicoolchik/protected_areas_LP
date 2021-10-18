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
		return "������ �������";
	case WrongMenu:
		return "�����o �������� ��������";

	default:
		return "";
	}
}
