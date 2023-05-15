#pragma once
#include "OsLiczbowa.h"
#include <iostream>
#include <utility>
class ZbiorOsi
{
public:
	int tab_size;
	OsLiczbowa* tab = new OsLiczbowa[tab_size];

	int gettabsize();
	void settab(OsLiczbowa tab[]);

	ZbiorOsi() :tab_size(0),tab(nullptr) {};
	ZbiorOsi(const ZbiorOsi& t) :tab_size(t.tab_size), tab(t.tab) {};
	ZbiorOsi(int t) :tab_size(t) {};
	ZbiorOsi(ZbiorOsi&& t) noexcept : tab_size(std::exchange(t.tab_size, 0)), tab(std::exchange(t.tab, nullptr)) {};
	//ZbiorOsi(ZbiorOsi&& t) noexcept;
	~ZbiorOsi();
	friend std::ostream& operator<<(std::ostream& os, const ZbiorOsi& obj);
	ZbiorOsi& operator=(const ZbiorOsi& obj);
	ZbiorOsi& operator+(const OsLiczbowa& os);
	
};

