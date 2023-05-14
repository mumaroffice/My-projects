#include<iostream>
#include<string>
#include<iomanip>
#include<conio.h>
#include<stdio.h>
#include"CateringManagementSystem.h"

void add();
void read();
void settings();

int main()
{
	char ch;
	while (true)
	{
		system("CLS");
		cout << setw(50) << "Catering Management System" << endl;
		cout << "1. Add a New Event" << endl;
		cout << "2. Display All Record" << endl;
		cout << "3. Settings" << endl;
		cout << "4. Exit" << endl;
		cin >> ch;
		switch (ch)
		{
		case '1':
			add();
			break;
		case '2':
			read();
			break;
		case '3':
			settings();
			break;
		case '4':
			exit(0);
			break;
		default:
		{
			system("CLS");
			cout << "Invalid Output...." << endl;
			continue;
		}
		}
	}

	return 0;
}

