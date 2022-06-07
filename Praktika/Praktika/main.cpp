#include <iostream>
#include "Orders.h"
#include "ExpressOrder.h"
#include "InsuredOrder.h"
#include "OrdinaryOrder.h"
#include "Date.h"
#include "Time_.h"
#include "windows.h"
#include <conio.h>
#include "Exception.h"
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

	string path;
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
		cout << "8 - in text file\n";
		cout << "9 - from text file\n";
		cin >> menu;

		switch (menu)
		{
		default:
			showMessage("Incorrect choice");
			break;

		case 1:

			system("cls");
			try
			{
				cout << "1 - OrdinaryOrder\n"
					"2 - ExpressOrder\n" <<
					"3 - InsuredOrder\n";
				cin >> menu;
				system("cls");
				if (menu < 1 || menu > 3) { throw new IncorentChoiceException(); }
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
			catch (Exception* obj)
			{
				obj->showMsg();
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
			system("cls");
			if (orders.isEmpty())
				showMessage("No orders\n");
			else {
				cout << "Input date: "; cin >> date;
				cout << orders.findByDate(date) << endl;
				waitSpace();
			}
			break;

		case 5:
			system("cls");
			try
			{
				if (orders.isEmpty())
					throw new EmptyException();

				cout << "Input time: "; cin >> time;
				cout << orders.findByTime(time) << endl;
				waitSpace();

			}
			catch (Exception* obj)
			{
				obj->showMsg();
			}
			break;

		case 6:
			system("cls");
			try
			{
				if (orders.isEmpty())
					throw new EmptyException();

				cout << "Input Id: "; cin >> Id;
				cout << orders.findById(Id) << endl;
				waitSpace();

			}

			catch (Exception* obj)
			{
				obj->showMsg();
			}
			break;

		case 7:
			system("cls");
			try
			{
				if (orders.isEmpty())
					throw new EmptyException();

				cout << "Input Id: "; cin >> Id;
				if(orders.del(Id))
					showMessage("Success");
				else {
					showMessage("Not find");
				}

			}

			catch (Exception* obj)
			{
				obj->showMsg();
			}
			break;

			orders.findByTime(time);
			break;

		case 8:
			system("cls");
			cout << "Input path: "; cin >> path;
			orders.toText(path);
			showMessage("Success");
			break;

		case 9:
			system("cls");
			cout << "Input path: "; cin >> path;
			orders.inText(path);
			waitSpace();
			break;

		}

		
		
		cin.clear();
	} while (true);

	/*system("pause");
	return 0;*/
}