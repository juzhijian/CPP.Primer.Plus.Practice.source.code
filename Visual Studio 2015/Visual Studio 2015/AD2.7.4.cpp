#include <iostream>
using namespace std;

int age(int);

void AD()
{
	cout << "������������䣺";
	int dn;
	cin >> dn;
	cout << dn << "�����" << age(dn) << "����" << endl;
}

int age(int dna)
{
	return dna * 12;
}