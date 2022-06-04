#include <iostream>
#include "Orders.h"
#include "ExpressOrder.h"
#include "InsuredOrder.h"
#include "OrdinaryOrder.h"
#include "Date.h"
#include "Time_.h"
#include "windows.h"
#include <conio.h>
using namespace std;

void showMessage(string message) {
	system("cls");
	cout << message << endl;
	Sleep(1000);
	system("cls");
}

void waitSpace() {
	char c = -1;
	cout << "------------------------------------\n";
	cout << "Press space or enter\n";
	do {
		c = _getch();
	} while (c != 32 && c != 13);
	system("cls");
}

int main()
{
	int menu = -1;

	Orders orders;

	Date date;
	Time_ time;
	int Id;
	string company;
	double amount;
	string courier;
	int daysToDeliver;

	do
	{
		cout << "0 - exit\n";
		cout << "1 - add order\n";
		cout << "2 - show\n";
		cout << "3 - sort by date and time\n";
		cout << "4 - seek by date\n";
		cout << "5 - seek by time\n";
		cout << "6 - seek by Id\n";
		cout << "7 - del order\n";
		cin >> menu;

		switch (menu)
		{
		default:
			showMessage("Incorrect choice");
			break;
		case 1:
			system("cls");
			
			cout << "1 - OrdinaryOrder\n"
				"2 - ExpressOrder\n" <<
				"3 - InsuredOrder\n";
			cin >> menu;
			system("cls");
			if (menu >= 1 && menu <= 3) {
				cout << "Input Id: ";
				cin >> Id;
				cout << "Input date: ";
				cin >> date;
				cout << "Input time: ";
				cin >> time;
				switch (menu)
				{
				case 1:
					orders.add(new OrdinaryOrder(date, time, Id));
					break;
				case 2:
					cout << "Input courier: ";
					cin >> courier;
					cout << "Input days to deliver: ";
					cin >> daysToDeliver;
					orders.add(new ExpressOrder(date, time, Id, courier, daysToDeliver));
					break;
				case 3:
					cout << "Input company: ";
					cin >> company;
					cout << "Input amount: ";
					cin >> amount;
					orders.add(new InsuredOrder(date, time, Id, company, amount));
					break;
				}
				showMessage("Success");
			}
			else {
				showMessage("Incorrect choice");
			}
			break;
		case 2:
			system("cls");
			if (orders.isEmpty())
				cout << "No orders\n";
			else
				orders.show();
			waitSpace();
			break;
		case 3:
			system("cls");
			if (orders.isEmpty())
				cout << "No orders\n";
			else {
				orders.sortByDateTime();
				showMessage("Success");
			}
			break;
		case 4:

		}
		cin.clear();
	} while (true);

	/*system("pause");
	return 0;*/
}