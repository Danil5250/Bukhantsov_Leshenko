#pragma once
#include <iostream>
#include "windows.h"
using namespace std;

class Exception
{
public:
	virtual void showMsg()const& = 0;

};

class EmptyException
	: public Exception
{
public:
	virtual void showMsg()const& override
	{
		system("cls");
		cout << "Orders not exist" << endl;
		Sleep(1000);
		system("cls");
	}


};


class IncorentChoiceException
	: public Exception
{
public:
	virtual void showMsg()const& override
	{
		system("cls");
		cout << "Incorent Choice" << endl;
		Sleep(1000);
		system("cls");
	}


};
