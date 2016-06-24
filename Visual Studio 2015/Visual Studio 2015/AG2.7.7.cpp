#include "one.h"
#include "Amain.h"

void AG_change(int,int);

void AG()
{
	int AG_x, AG_f;
	cout << "Enter the number of hours：";
	cin >> AG_x;
	cout << "Enter the number of minutes：";
	cin >> AG_f;
	AG_change(AG_x, AG_f);
	cin.get();
	cin.get();
	system("Cls");
	Amain();
}

void AG_change(int AG_x, int AG_f)
{
	cout << "Time:" << AG_x << ":" << AG_f << endl;
}