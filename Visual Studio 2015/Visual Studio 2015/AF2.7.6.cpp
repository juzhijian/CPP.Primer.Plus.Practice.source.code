#include "one.h"
#include "Amain.h"

double AF_change(double);

void AF()
{
	cout << "Enter the number of light years:";
	double AF_gn;
	cin >> AF_gn;
	cout << AF_gn << " light years = " << AF_change(AF_gn) << " astronomical units." << endl;
	cin.get();
	cin.get();
	system("Cls");
	Amain();
}

double AF_change(double AF_gna)
{
	return AF_gna * 63240;
}