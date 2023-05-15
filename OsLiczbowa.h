#pragma once
using namespace std;
#include <iostream>

class OsLiczbowa
{
	int min, max, interval;
	static int numerator;
public:
	void setmin(int);
	void setmax(int);
	void setinterval();
	int getmin();
	int getmax();
	int getinterval();
	void display();
	static void display_numerator();
	OsLiczbowa();
	OsLiczbowa(int min, int max);
	OsLiczbowa(const OsLiczbowa& t);
	~OsLiczbowa();
	friend std::ostream& operator<<(std::ostream& os, const OsLiczbowa& obj);
	OsLiczbowa& operator=(const OsLiczbowa& obj);
	OsLiczbowa& operator*=(int);
	OsLiczbowa& operator/=(int);


};

