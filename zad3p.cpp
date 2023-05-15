#include <iostream>
#include "OsLiczbowa.h"
#include "ZbiorOsi.h"
#include "Wykres.h"
int OsLiczbowa::numerator = 0;

using namespace std;
void auxFun(OsLiczbowa &t) {
	OsLiczbowa t2(t);
}
void dupa(){	
	Wykres dupa2("xd",Column,2);
	Wykres dupa3(dupa2);
	Wykres dupa4(move(dupa3));
	cout << dupa4;	
}

int main()
{

	OsLiczbowa tab[4] = { OsLiczbowa(2,3),OsLiczbowa(4,7),OsLiczbowa(3,10),OsLiczbowa(1,8) };
	ZbiorOsi t(4);
	t.settab(tab);
	Wykres xddd(t);

	cout << xddd;
}
