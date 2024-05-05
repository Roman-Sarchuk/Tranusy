#include "Converter.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cerr;
using std::cin;

// links
void gatherData(Converter& converter);
void showResult(Converter& converter);
void settingMenu(Converter& convert);

int main()
{
	Converter converter;

	cout << "<< To stop the programe press Ctrl+C >>\n\n" << endl;
	settingMenu(converter);

	while (true)
	{
		cout << "<< To stop the programe press Ctrl+C >>\n\n" << endl;

		gatherData(converter);

		converter.convert();

		showResult(converter);

		// Wait
		cout << endl;
		system("PAUSE");
		system("CLS");
	}

	return 0;
}


void gatherData(Converter& converter)
{
	short fromSys, toSys;
	string num;

	// Data gathering
	cout << "=:=:=:=:=:=:= Enter Data =:=:=:=:=:=:=" << endl;
	while (true)
	{
		try
		{
			cout << "FROM: ";
			cin >> fromSys;
			cin.clear();
			cin.ignore(100, '\n');
			converter.setFromSys(fromSys);
			break;
		}
		catch (invalid_argument& exp)
		{
			cerr << exp.what() << endl;
		}
	}

	while (true)
	{
		try
		{
			cout << "TO: ";
			cin >> toSys;
			cin.clear();
			cin.ignore(100, '\n');
			converter.setToSys(toSys);
			break;
		}
		catch (invalid_argument& exp)
		{
			cerr << exp.what() << endl;
		}
	}

	while (true)
	{
		try
		{
			cout << "NUM: ";
			getline(cin, num);
			converter.setNum(num);
			break;
		}
		catch (invalid_argument& exp)
		{
			cerr << exp.what() << endl;
		}
	}
	cout << "=:=:=:=:=:=:= :=:=: :=:= :=:=:=:=:=:=:=\n" << endl;
}

void showResult(Converter& converter)
{
	cout << "=:=:=:=:=:=:= RESULT :=:=:=:=:=:=:=" << endl;
	cout << "RES: " << converter.getRes() << "\n~~~ INFO ~~~\n" << converter.getInfo() << endl;
	cout << "=:=:=:=:=:=:= :=:=:= :=:=:=:=:=:=:=\n" << endl;
}

void settingMenu(Converter& converter)
{
	while (true)
	{
		// Show the seting
		cout << "=:=:=:=:= Settings :=:=:=:=:=" << endl;
		cout << "1) Range     |  " << "(" << converter.getRange().first << " - " << converter.getRange().second << ")" << endl;
		cout << "2) Accuracy  |  " << converter.getAccuracy() << endl;
		cout << "=:=:=:=:= :=:=:=:= :=:=:=:=:=" << endl;

		// What to do
		char action;
		while (true)
		{
			cout << "Whant to edit? (Y/N): ";
			cin >> action;
			cin.clear();
			cin.ignore(100, '\n');

			if (action == 'n' || action == 'N')
			{
				system("CLS");
				return;
			}
			else if (action == 'y' || action == 'Y')
				break;
			cerr << "ERROR: you have to enter 'Y' or 'N'\n\n";
		}

		// Editing
		cout << endl;
		unsigned short value1, value2;
		while (true)
		{
			cout << "Select a setting option (enter 'q' to exit)\n> ";
			cin >> action;
			cin.clear();
			cin.ignore(100, '\n');

			if (action == 'q' || action == 'Q')	// exit
				break;
			else if (action == '1')	// range
			{
				cout << "\n~-~ base ~-~" << endl;
				while (true)
				{
					try
					{
						cout << "from: ";
						cin >> value1;
						cin.clear();
						cin.ignore(100, '\n');
						cout << "to: ";
						cin >> value2;
						cin.clear();
						cin.ignore(100, '\n');
						converter.setRange(value1, value2);
						break;
					}
					catch (invalid_argument& exp)
					{
						cerr << exp.what() << endl;
					}
				}
			}
			else if (action == '2')	// accuracy
			{
				while (true)
				{
					try
					{
						cout << "accuracy: ";
						cin >> value1;
						cin.clear();
						cin.ignore(100, '\n');
						converter.setAccuracy(value1);
						break;
					}
					catch (invalid_argument& exp)
					{
						cerr << exp.what() << endl;
					}
				}

			}
			else
				cerr << "ERROR: you have to enter '1', '2' or 'q'\n\n";
			cout << endl;
		}
		cout << endl;
	}
}