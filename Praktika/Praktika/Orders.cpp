#include "Orders.h"

Orders::Orders()
{
}

Orders::~Orders()
{
}

void Orders::show() const&
{
		cout << "Count: " << orders.size() << endl;
	for (auto it : orders)
	{
		cout << "-----------------------------------\n";
		cout << it->toString() << endl;
	}
}

void Orders::add(Order* obj)
{
	orders.push_back(obj);
}

void Orders::del(int Id)
{
	
	for (int i = 0; i < orders.size(); i++)
	{
		if (orders[i]->getId() == Id)
			orders.erase(orders.begin() + i);
	}
}

void Orders::sortByDateTime()
{
	for (int i = 0; i < orders.size(); i++)
	{
		for (int j = 0; j < orders.size() -i - 1; j++)
		{
			if (orders[j]->getDate() > orders[j + 1]->getDate() || (orders[j]->getDate() == orders[j + 1]->getDate() && 
				orders[j]->getTime() > orders[j + 1]->getTime()))
				swap(orders[j], orders[j + 1]);
		}
	}
}

Order* Orders::findByTime(Time_ time) const&
{
	for (int i = 0; i < orders.size(); i++)
	{
		if (orders[i]->getTime() == time)
			return orders[i];
	}
}

Order* Orders::findByDate(Date date) const&
{
	for (int i = 0; i < orders.size(); i++)
	{
		if (orders[i]->getDate() == date)
			return orders[i];
	}
}

Order* Orders::findById(int Id) const&
{
	for (int i = 0; i < orders.size(); i++)
	{
		if (orders[i]->getId() == Id)
			return orders[i];
	}
}

void Orders::toText(string puth) const&
{
	ofstream file;
	file.open(puth, ios_base::app);
	if (file.is_open())
	{
		for (int i = 0; i < orders.size(); i++)
		{
			file << orders[i]->toString();
		}
		file.close();
	}
	else
		cout << "This file is not open\n";
}

void Orders::inText(string puth)
{
	ifstream file;
	file.open(puth, ios_base::in);
	if (file.is_open())
	{
		string s;
		while (getline(file, s))
		{
			cout << s << endl;
		}
	}
	else
		cout << "This file is not open\n"; 
}

bool Orders::isEmpty() const&
{
	return orders.size() == 0;
}
