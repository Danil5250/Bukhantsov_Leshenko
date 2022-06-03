#include "Order.h"

Order::Order(Date date, Time_ time, int id)
{
    this->date = date;
    this->time = time;
    this->id = id;
}

Order::~Order()
{
}

void Order::setDate(Date date)
{
    this->date = date;
}

Date Order::getDate() const&
{
    return date;
}

void Order::setTime(Time_ time)
{
    this->time = time;
}

Time_ Order::getTime() const&
{
    return time;
}

void Order::setId(int id)
{
    this->id = id;
}

int Order::getId() const&
{
    return id;
}