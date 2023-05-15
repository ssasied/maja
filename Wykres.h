#pragma once
#include "ZbiorOsi.h"

enum typ_wykresu { XY, Column, Sunburst };

class Wykres :public ZbiorOsi
{	
	string nazwa_wykresu;
	typ_wykresu typ;
public:
	/*void settab2(OsLiczbowa tab[]) {
		settab(tab);
	}*/
	Wykres(string,typ_wykresu,int);
	Wykres(const Wykres&);
	Wykres(const Wykres&& t) noexcept : ZbiorOsi(move(t)), nazwa_wykresu(std::move(t.nazwa_wykresu)), typ(std::move(t.typ)) { cout << "konstruktor move xd"<<'\n'; }
	Wykres();
	Wykres(const ZbiorOsi& t) :ZbiorOsi(t), nazwa_wykresu("xdddd"), typ(XY) { cout << "proba xsdddd" << '\n';}
	~Wykres() { cout << "destruktor chuj ci w dupe" << '\n'; }

	friend std::ostream& operator<<(std::ostream& os, const Wykres& obj);
};


