#pragma once
#include "Date.h"
#include "Order.h"
#include "OrdinaryOrder.h"
#include <vector>
#include <fstream>
#include <algorithm>


class Orders
{
protected:
	vector<Order*> orders;

public:
	Orders();
	~Orders();

	void show()const&;
	void add(Order* obj);
	bool del(int Id);
	void sortByDateTime();
	string findByTime(Time_ time)const&;
	string findByDate(Date date)const&;
	string findById(int Id)const&;
	void toText(string puth)const&;
	void inText(string puth);
	bool isEmpty()const&;
};

