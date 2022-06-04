#include "ExpressOrder.h"

ExpressOrder::ExpressOrder(Date date, Time_ time, int id, string courier, int daysToDeliver) : Order(date, time, id)
{
    this->courier = courier;
    this->daysToDeliver = daysToDeliver;
}

ExpressOrder::~ExpressOrder()
{
}

void ExpressOrder::setCourier(string courier)
{
    this->courier = courier;
}

string ExpressOrder::getCourier() const&
{
    return courier;
}

void ExpressOrder::setDaysToDeliver(int daysToDeliver)
{
    this->daysToDeliver = daysToDeliver;
}

int ExpressOrder::getDaysToDeliver() const&
{
    return daysToDeliver;
}

string ExpressOrder::toString()
{
    return "Id: " + to_string(id) + "\nType: ExpressOrder\n" + "Date: " + to_string(date.getYear()) + "." + to_string(date.getMonth()) + "." + to_string(date.getDay()) + "\nTime: " + time.getFormat() + "   " + to_string(time.getHour()) + ":" + to_string(time.getMinutes()) + ":" + to_string(time.getSeconds()) + "\nCourier: " + courier + "\nDays to deliver: " + to_string(daysToDeliver);
}
