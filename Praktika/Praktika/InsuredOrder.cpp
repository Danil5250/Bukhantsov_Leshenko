#include "InsuredOrder.h"

InsuredOrder::InsuredOrder(Date date, Time_ time, int id, string company, double amount) :Order{ date ,time,id }, company{ company }, amount{ amount }
{
}

InsuredOrder::~InsuredOrder()
{
}

void InsuredOrder::setCompany(string company)
{
	this->company = company;
}

string InsuredOrder::getCompany() const&
{
	return company;
}

void InsuredOrder::setAmount(double amount)
{
	this->amount = amount;
}

double InsuredOrder::getAmount() const&
{
	return amount;
}

string InsuredOrder::toString()
{
	return "Id: " + to_string(id) + "\n" + "Date: " + to_string(date.getYear()) + "." + to_string(date.getMonth()) + "." + to_string(date.getDay()) + "\nTime: " + time.getFormat() + "   " + to_string(time.getHour()) + ":" + to_string(time.getMinutes()) + ":" + to_string(time.getSeconds()) + "\nCompany: " + company + "\nAmount: " + to_string(amount);
}
