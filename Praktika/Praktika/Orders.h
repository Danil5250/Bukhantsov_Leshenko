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
	void del(int Id);
	void sortByDateTime();
	Order* findByTime(Time_ time)const&;
	Order* findByDate(Date date)const&;
	Order* findById(int Id)const&;
	void toText(string puth)const&;
	void inText(string puth);
	bool isEmpty()const&;
};

