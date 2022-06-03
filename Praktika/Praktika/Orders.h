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

	void show();
	void add(Order* obj);
	void del(int Id);
	void sortByDateTime();
	Order* findByTime(Time_ time);
	Order* findByDate(Date date);
	Order* findById(int Id);
	void toText(string puth);
	void inText(string puth);
};

