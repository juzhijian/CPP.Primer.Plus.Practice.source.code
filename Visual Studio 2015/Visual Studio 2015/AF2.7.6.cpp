#include <iostream>
using namespace std;

double AF_change(double gna);
void AF()
{
	cout << "Enter the number of light years:";
	double gn;
	cin >> gn;
	cout << gn << " light years = " << AF_change(gn) << " astronomical units." << endl;
}

double AF_change(double gna)
{
	return gna * 63240;
}