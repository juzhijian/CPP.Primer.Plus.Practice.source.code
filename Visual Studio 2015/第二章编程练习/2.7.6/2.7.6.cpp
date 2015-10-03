#include <iostream>
using namespace std;

double change(double gna);
void main()
{
	cout << "Enter the number of light years:";
	double gn;
	cin >> gn;
	cout << gn << " light years = " << change(gn) << " astronomical units." << endl;
}

double change(double gna)
{
	return gna * 63240;
}