#include <iostream>
using namespace std;
double AE_change(double nx);

void AE()
{
	cout << "���������϶ȣ�";
	double n;
	cin >> n;
	cout << n << "���϶ȵ���" << AE_change(n) << "���϶�" << endl;
}

double AE_change(double nx)
{
	return 1.8*nx + 32;
}