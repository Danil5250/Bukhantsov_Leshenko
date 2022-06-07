#include "OrdinaryOrder.h"

OrdinaryOrder::OrdinaryOrder(Date date, Time_ time, int id) :Order(date, time, id)
{
}

OrdinaryOrder::~OrdinaryOrder()
{
}

string OrdinaryOrder::toString()
{
	return "Id: " + to_string(id) + "\nType: OrdinaryOrder\n" + "Date: " + to_string(date.getYear()) + "." + to_string(date.getMonth()) + "." + to_string(date.getDay()) + "\nTime: " + time.getFormat() + "   " + to_string(time.getHour()) + ":" + to_string(time.getMinutes()) + ":" + to_string(time.getSeconds());
}
