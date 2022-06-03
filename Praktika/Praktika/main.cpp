#include <iostream>
#include "Orders.h"
#include "ExpressOrder.h"
#include "InsuredOrder.h"
#include "OrdinaryOrder.h"
#include "Date.h"
#include "Time_.h"
using namespace std;


int main()
{
	int menu = -1;
	Date date;
	Time_ time;
	int Id;
	string company;
	double amount;
	string courier;
	int daysToDeliver;



	Orders orders;



	do
	{
		cout << "0 - exit\n";
		cout << "1 - add order\n";
		cout << "2 - add express order\n";
		cout << "3 - add ordinary order\n";
		cout << "4 - add insured order\n";
		cout << "5 - del order\n";
		cout << "6 - sort by date and time\n";
		cout << "7 - seek by date\n";
		cout << "8 - seek by time\n";
		cout << "9 - seek by Id\n";
		cin >> menu;

		switch (menu)
		{
		default:
			break;

		case 1: 
			cout << "Input date: "; cin >> date;
			cout << "Input time: "; cin >> time;
			cout << "Input Id:   "; cin >> Id;
			Order* a (date, time, Id);
			orders.add(a);
			break;


		}

	} while (menu != 0);





	/*system("pause");
	return 0;*/
}