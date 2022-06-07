#pragma once
#include "Order.h"


class ExpressOrder :
	public Order
{
protected:
	string courier;
	int daysToDeliver;

public:
	ExpressOrder(Date date, Time_ time, int id, string courier, int daysToDeliver);
	~ExpressOrder();

	void setCourier(string courier);
	string getCourier()const&;

	void setDaysToDeliver(int daysToDeliver);
	int getDaysToDeliver()const&;

	string toString();
};

