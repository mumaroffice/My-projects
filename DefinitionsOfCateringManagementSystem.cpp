#include"CateringManagementSystem.h"
#include<iomanip>

// Function Definitions of Class Event

Event::Event()
{
	nameOfEvent = "";
	customerName = "";
	locationOfEvent = "";
	occuringTimeOfEvent = "";
	numberOfGuests = 0;
	foodCostPerPerson = 250;
	totalFoodCost = 0;
	numberOfMinutesSpent = 0;
	averageCostPerPerson = 0.0;
	costPerMinute = 0;
	totalEventCost = 0;
}

void Event::setNameOfEvent(string s) 
{
	nameOfEvent = s;
}

void Event::setCustomerName(string s)
{
	customerName = s;
}

void Event::setLocationOfEvent(string s) 
{
	locationOfEvent = s;
}

void Event::setOccuringTimeOfEvent(string s) 
{
	occuringTimeOfEvent = s;
}

void Event::setNumberOfGuests(int x) 
{
	numberOfGuests = x;
}

void Event::setNumberOfMinutesSpent(int x) 
{
	numberOfMinutesSpent = x;
}

void Event::setFoodCostPerPerson(int x)
{
	foodCostPerPerson = x;
}

string Event::getNameOfEvent() 
{
	return nameOfEvent;
}

string Event::getCustomerName() 
{
	return customerName;
}

string Event::getLocationOfEvent() 
{
	return locationOfEvent;
}

string Event::getOccuringTimeOfEvent() 
{
	return occuringTimeOfEvent;
}

int Event::getNumberOfGuests() 
{
	return numberOfGuests;
}

int Event::getNumberOfMinutesSpent() 
{
	return numberOfMinutesSpent;
}

int Event::getCostPerMinute() 
{
	return costPerMinute;
}

int Event::getTotalFoodCost() 
{
	return totalFoodCost;
}

int Event::getTotalEventCost() 
{
	return totalEventCost;
}

float Event::getAverageCostPerPerson() 
{
	return averageCostPerPerson;
}

void Event::calcTotalFoodCost()
{
	totalFoodCost = numberOfGuests * foodCostPerPerson;
}

int Event::getFoodCostPerPerson()
{
	return foodCostPerPerson;
}

void Event::calcTotalEventCost() 
{
	totalEventCost = totalFoodCost + (costPerMinute * numberOfMinutesSpent);
}

void Event::calcAverageCostPerPerson()
{
	averageCostPerPerson = totalEventCost / numberOfGuests;
}

void Event::changeFoodCostTo(int x)
{
	if (x > 0)
		foodCostPerPerson = x;
	else
		cout << "Invalid Input..." << endl;
}

void Event::diskIn()
{
	ofstream write;
	write.open("E:\\Degree Courses\\Semester 3\\CS 212 - Object Oriented Programming\\Project - Catering Management System - VS\\CMS.txt", ios::app);
	write << "Name of Event: " << getNameOfEvent () << endl;
	write << "Name of Customer: " << getCustomerName () << endl;
	write << "Location of Event: " << getLocationOfEvent () << endl;
	write << "Occuring Time of Event: " << getOccuringTimeOfEvent () << endl;
	write << "Number of Guests: " << getNumberOfGuests () << endl;
	write << "Total Food Cost: " << getTotalFoodCost() << endl;
	write << "Number of Minutes Spent: " << getNumberOfMinutesSpent() << endl;
	write << "Average Cost Per Person: " << getAverageCostPerPerson() << endl;
	write << "Cost Per Minute: " << getCostPerMinute() << endl;
	write << "Total Event Cost: " << getTotalEventCost () << endl;
	write << "................................................................." << endl;
	write.close();
}

void Event::diskOut()
{
	char ch;
	ifstream read;
	read.open("E:\\Degree Courses\\Semester 3\\CS 212 - Object Oriented Programming\\Project - Catering Management System - VS\\CMS.txt");
	while (!(read.eof()))
	{
		ch = read.get();
		cout << ch;
	}
	read.close();
}

// Function Definitons of Class Wedding

void Wedding::setCostPerMinute(int x)
{
	costPerMinute = x;
}

// Function Definitons of Class Birthday

void Birthday::setCostPerMinute(int x)
{
	costPerMinute = x;
}

// Function Definitons of Class Festival

void Festival::setCostPerMinute(int x)
{
	costPerMinute = x;
}

// Function Definitons of Class General

void General::setCostPerMinute(int x)
{
	costPerMinute = x;
}

void read()
{
	Event* dummy = new Wedding;
	dummy->diskOut();
	system("pause");
}

void add()
{
	char ch;
	string s;
	int x;
	while (true)
	{
		system("CLS");
		cout << setw(50) << "Catering Management System" << endl;
		cout << "Select Type of Event" << endl;
		cout << "   1. Wedding" << endl;
		cout << "   2. Birthday" << endl;
		cout << "   3. Festival" << endl;
		cout << "   4. General" << endl;
		cout << "   5. Back" << endl;
		cin >> ch;
		switch (ch)
		{
		case '1':
		{
			cout << "Weddings: " << endl;
			Wedding* dummy = new Wedding;
			cout << "Enter Name of Event: ";
			cin >> s;
			dummy->setNameOfEvent(s);
			cout << "Enter Name of Customer: ";
			cin >> s;
			dummy->setCustomerName(s);
			cout << "Enter Location of Event: ";
			cin >> s;
			dummy->setLocationOfEvent(s);
			cout << "Enter Occuring Time of Event (HH:MM) / (DD/MM/YYYY): ";
			cin >> s;
			dummy->setOccuringTimeOfEvent(s);
			cout << "Enter Number of Guests: ";
			cin >> x;
			if (x < 0)
			{
				do
				{
					cout << "Invalid Number" << endl;
					cout << "Enter Number of Guests: ";
					cin >> x;
				} while (x < 0);
			}
			dummy->setNumberOfGuests(x);
			cout << "Enter Number of Minutes Spent: ";
			cin >> x;
			if (x < 0)
			{
				do
				{
					cout << "Invalid Number" << endl;
					cout << "Enter Number of Minutes Spent: ";
					cin >> x;
				} while (x < 0);
			}
			dummy->setNumberOfMinutesSpent(x);
			dummy->diskIn();
			cout << "Your Data Has Been Saved." << endl;
			delete dummy;
			system("pause");
		}
		case '2':
		{
			cout << "Birthdays: " << endl;
			Birthday* dummy = new Birthday;
			cout << "Enter Name of Event: ";
			cin >> s;
			dummy->setNameOfEvent(s);
			cout << "Enter Name of Customer: ";
			cin >> s;
			dummy->setCustomerName(s);
			cout << "Enter Location of Event: ";
			cin >> s;
			dummy->setLocationOfEvent(s);
			cout << "Enter Occuring Time of Event (HH:MM) / (DD/MM/YYYY): ";
			cin >> s;
			dummy->setOccuringTimeOfEvent(s);
			cout << "Enter Number of Guests: ";
			cin >> x;
			if (x < 0)
			{
				do
				{
					cout << "Invalid Number" << endl;
					cout << "Enter Number of Guests: ";
					cin >> x;
				} while (x < 0);
			}
			dummy->setNumberOfGuests(x);
			cout << "Enter Number of Minutes Spent: ";
			cin >> x;
			if (x < 0)
			{
				do
				{
					cout << "Invalid Number" << endl;
					cout << "Enter Number of Minutes Spent: ";
					cin >> x;
				} while (x < 0);
			}
			dummy->setNumberOfMinutesSpent(x);
			dummy->diskIn();
			cout << "Your Data Has Been Saved." << endl;
			delete dummy;
			system("pause");
			break;
		}
		case '3':
		{
			cout << "Festivals: " << endl;
			Festival* dummy = new Festival;
			cout << "Enter Name of Event: ";
			cin >> s;
			dummy->setNameOfEvent(s);
			cout << "Enter Name of Customer: ";
			cin >> s;
			dummy->setCustomerName(s);
			cout << "Enter Location of Event: ";
			cin >> s;
			dummy->setLocationOfEvent(s);
			cout << "Enter Occuring Time of Event (HH:MM) / (DD/MM/YYYY): ";
			cin >> s;
			dummy->setOccuringTimeOfEvent(s);
			cout << "Enter Number of Guests: ";
			cin >> x;
			if (x < 0)
			{
				do
				{
					cout << "Invalid Number" << endl;
					cout << "Enter Number of Guests: ";
					cin >> x;
				} while (x < 0);
			}
			dummy->setNumberOfGuests(x);
			cout << "Enter Number of Minutes Spent: ";
			cin >> x;
			if (x < 0)
			{
				do
				{
					cout << "Invalid Number" << endl;
					cout << "Enter Number of Minutes Spent: ";
					cin >> x;
				} while (x < 0);
			}
			dummy->setNumberOfMinutesSpent(x);
			dummy->diskIn();
			cout << "Your Data Has Been Saved." << endl;
			delete dummy;
			system("pause");
			break;
		}
		case '4':
		{
			cout << "General: " << endl;
			General* dummy = new General;
			cout << "Enter Name of Event: ";
			cin >> s;
			dummy->setNameOfEvent(s);
			cout << "Enter Name of Customer: ";
			cin >> s;
			dummy->setCustomerName(s);
			cout << "Enter Location of Event: ";
			cin >> s;
			dummy->setLocationOfEvent(s);
			cout << "Enter Occuring Time of Event (HH:MM) / (DD/MM/YYYY): ";
			cin >> s;
			dummy->setOccuringTimeOfEvent(s);
			cout << "Enter Number of Guests: ";
			cin >> x;
			if (x < 0)
			{
				do
				{
					cout << "Invalid Number" << endl;
					cout << "Enter Number of Guests: ";
					cin >> x;
				} while (x < 0);
			}
			dummy->setNumberOfGuests(x);
			cout << "Enter Number of Minutes Spent: ";
			cin >> x;
			if (x < 0)
			{
				do
				{
					cout << "Invalid Number" << endl;
					cout << "Enter Number of Minutes Spent: ";
					cin >> x;
				} while (x < 0);
			}
			dummy->setNumberOfMinutesSpent(x);
			dummy->diskIn();
			cout << "Your Data Has Been Saved." << endl;
			delete dummy;
			system("pause");
			break;
		}
		case '5':
			break;
		}
		break;
	}
}

void settings()
{
	char ch;

	system("CLS");
	cout << setw(50) << "Catering Management System" << endl;
	cout << "Settings: " << endl;
	cout << "1. Change Food Cost Per Person" << endl;
	cout << "2. Change Cost Per Minute (for Weddings)" << endl;
	cout << "3. Change Cost Per Minute (for Birthdays)" << endl;
	cout << "4. Change Cost Per Minute (for Festivals)" << endl;
	cout << "5. Change Cost Per Minute (for General Events)" << endl;
	cout << "6. Back" << endl;
	cin >> ch;
	switch (ch)
	{
	case '1':
	{
		Festival* dummy = new Festival;
		int x;
		cout << "Current Food Cost Per Person: " << dummy->getFoodCostPerPerson() << endl;
		cout << "Enter New Food Cost Per Person: ";
		cin >> x;
		dummy->setFoodCostPerPerson(x);
		cout << "New Food Cost Per Person: " << dummy->getFoodCostPerPerson() << endl;
		delete dummy;
		break;
	}
	case '2':
	{
		cout << "Weddings:" << endl;
		int x;
		Wedding* dummy = new Wedding;
		cout << "Enter Cost Per Minute: ";
		cin >> x;
		dummy->setCostPerMinute(x);
		delete dummy;
	}
	case '3':
	{
		cout << "Birthdays:" << endl;
		int x;
		Birthday* dummy = new Birthday;
		cout << "Enter Cost Per Minute: ";
		cin >> x;
		dummy->setCostPerMinute(x);
		delete dummy;
	}
	case '4':
	{
		cout << "Festivals:" << endl;
		int x;
		Festival* dummy = new Festival;
		cout << "Enter Cost Per Minute: ";
		cin >> x;
		dummy->setCostPerMinute(x);
		delete dummy;
	}
	case '5':
	{
		cout << "General Events:" << endl;
		int x;
		General* dummy = new General;
		cout << "Enter Cost Per Minute: ";
		cin >> x;
		dummy->setCostPerMinute(x);
		delete dummy;
	}
	case '6':
	{
		break;
	}
	}
}

