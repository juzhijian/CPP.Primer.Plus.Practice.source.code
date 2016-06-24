#include "one.h"
#include "Amain.h"

void AC_mice();
void AC_run();

void AC()
{
	AC_mice();
	AC_mice();
	AC_run();
	AC_run();
	cin.get();
	cin.get();
	system("Cls");
	Amain();
}

void AC_mice()
{
	cout << "Three blind mice" << endl;
}

void AC_run()
{
	cout << "See how they run" << endl;
}