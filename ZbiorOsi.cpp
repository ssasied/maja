#include "ZbiorOsi.h"
#include <iostream>

void ZbiorOsi::settab(OsLiczbowa tab[]) {
	this->tab = tab;
}
int ZbiorOsi::gettabsize() {
	return tab_size;
}
/*ZbiorOsi::ZbiorOsi(ZbiorOsi&& t) : tab_size(std::move(t.tab_size)), tab(std::move(t.tab)) {
	cout << "operator przenoszacy " << '\n';
}*/
ZbiorOsi::~ZbiorOsi() {
	cout << "destruktor zbioru"<<'\n';
	if (tab != nullptr) {

		free(tab);
		tab = nullptr;
	}	
	delete &tab_size;
}
std::ostream& operator<<(std::ostream& os, const ZbiorOsi& obj) {
	os << "size: " << obj.tab_size << '\n';
	for (int i = 0; i < obj.tab_size; i++)
	{
		os << obj.tab[i] << " ";
	}	
	return os;
}
ZbiorOsi& ZbiorOsi::operator=(const ZbiorOsi& obj) {
	cout << "operator przypisania, stan przed: " << '\n';
	cout << *this;
	tab_size = obj.tab_size;
	tab = obj.tab;
	cout << "stan po: " << '\n';
	cout << *this;
	return *this;
}
ZbiorOsi& ZbiorOsi:: operator+(const OsLiczbowa& os) {
	tab_size++;
	OsLiczbowa* new_tab = new OsLiczbowa[tab_size];
	for (int i = 0; i < tab_size - 1; i++)
	{
		new_tab[i] = tab[i];
	}
	new_tab[tab_size - 1] = os;
	delete[] tab;
	tab = new_tab;
	return *this;
}
