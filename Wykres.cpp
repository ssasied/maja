#include "Wykres.h"
Wykres::Wykres(string nazwa_wykresu, typ_wykresu typ, int tab_size) : ZbiorOsi(tab_size), nazwa_wykresu(nazwa_wykresu), typ(typ)
{ cout << "konstruktor nie domyslny lol " << '\n'; }
Wykres::Wykres(const Wykres& t) : ZbiorOsi(t),nazwa_wykresu(t.nazwa_wykresu),typ(t.typ) { cout << "dupa konstruktor kopiujacy" << '\n'; }
Wykres::Wykres() :Wykres("dupa", XY, 0) { cout << "konstruktor domyslny lol " << '\n'; }


std::ostream& operator   <<    (std::ostream& os, const Wykres& obj) {	
	os << obj.nazwa_wykresu << '\n';
	os << obj.typ << '\n';
	if (obj.tab != nullptr) {
		
		ZbiorOsi t(move(obj));
		cout << t;
	}
	return os;
}


