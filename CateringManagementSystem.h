#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std; 

class Event
{
protected:
	string nameOfEvent;
	string customerName;
	string locationOfEvent;
	string occuringTimeOfEvent;
	int numberOfGuests;
	int foodCostPerPerson = 250;
	int totalFoodCost;
	int numberOfMinutesSpent;
	int totalEventCost;
	int costPerMinute;
	float averageCostPerPerson;
public:
	Event();

	void setNameOfEvent(string);
	void setCustomerName(string);
	void setLocationOfEvent(string);
	void setOccuringTimeOfEvent(string);
	void setNumberOfGuests(int);
	void setNumberOfMinutesSpent(int);
	void setFoodCostPerPerson(int x);
	virtual void setCostPerMinute(int) = 0;
	
	string getNameOfEvent();
	string getCustomerName();
	string getLocationOfEvent();
	string getOccuringTimeOfEvent();
	int getNumberOfGuests();
	int getNumberOfMinutesSpent();
	int getCostPerMinute();
	int getTotalFoodCost();
	int getFoodCostPerPerson();
	int getTotalEventCost();
	float getAverageCostPerPerson();

	void calcTotalFoodCost();
	void calcTotalEventCost();
	void calcAverageCostPerPerson();

	void diskIn();
	void diskOut();

	void changeFoodCostTo(int);
};

class Wedding : public Event
{
public:
	void setCostPerMinute(int);
};

class Birthday : public Event
{
public:
	void setCostPerMinute(int);
};

class Festival : public Event
{
public:
	void setCostPerMinute(int);
};

class General : public Event
{
public:
	void setCostPerMinute(int);
};


