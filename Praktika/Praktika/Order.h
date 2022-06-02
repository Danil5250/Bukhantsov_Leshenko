#pragma once

#include <iostream>
#include <string>

#include "Date.h"
#include "Time_.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Order
{
protected:
	Date date;
	Time_ time;
	int id;

public:
	Order(Date date, Time_ time, int id);
	~Order();

	void setDate(Date date);
	Date getDate()const&;
	
	void setTime(Time_ time);
	Time_ getTime()const&;

	void setId(int id);
	int getId()const&;


	virtual string toString()const& = 0;
};

