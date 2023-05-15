#include "OsLiczbowa.h"
#include <iostream>

using namespace std;
OsLiczbowa::OsLiczbowa() :min(0), max(0), interval(0) {

	cout << ++numerator << " Konstruktor domyslny"<<'\n';
}
OsLiczbowa::OsLiczbowa(int min, int max) :min(min), max(max), interval(max - min)  {
	cout << ++numerator << " Konstruktor dwuargumentowy" << '\n';
}
OsLiczbowa::OsLiczbowa(const OsLiczbowa& t) :min(t.min), max(t.max), interval(t.interval) {
	cout << ++numerator << " Konstruktor kopiujacy" << '\n';
}
OsLiczbowa::~OsLiczbowa() {
	cout << ++numerator << " destruktor" << '\n';
}
void OsLiczbowa::setmin(int min) {
	this->min = min;
}
void OsLiczbowa::setmax(int min) {
	this->max = max;
}
void OsLiczbowa::setinterval() {
	interval = max - min;
}
int OsLiczbowa::getmin(){
	return min;
}
int OsLiczbowa::getmax() {
	return max;
}
int OsLiczbowa::getinterval() {
	return interval;
}

void OsLiczbowa::display_numerator() {
	cout << numerator << '\n';
}
std::ostream& operator<<(std::ostream& os, const OsLiczbowa& obj) {
	os << "min: " << obj.min << '\n';
	os << "max: " << obj.max << '\n';
	os << "interval: " << obj.interval << '\n'<<'\n';
	return os;
}
OsLiczbowa& OsLiczbowa::operator=(const OsLiczbowa& obj) {
	cout << "operator przypisania, stan przed: "<<'\n';
	cout << *this;
	min = obj.min;
	max = obj.max;
	interval = obj.interval;
	cout << "stan po: " << '\n';
	cout << *this;
	return *this;
}
OsLiczbowa& OsLiczbowa::operator*=(int skalar) {
	float srodek_osi = (min + max) / 2.0;
	float offset = max - srodek_osi;	
	max += offset*skalar;
	min -= offset*skalar;
	return *this;
}
OsLiczbowa& OsLiczbowa::operator/=(int skalar) {
	float srodek_osi = (min + max) / 2.0;
	float offset = (max - srodek_osi)/skalar*1.0;	
	max -= offset;
	min += offset;
	return *this;
}
