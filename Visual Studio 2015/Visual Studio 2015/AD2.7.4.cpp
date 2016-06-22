#include <iostream>
using namespace std;

int age(int);

void AD()
{
	cout << "请输入你的年龄：";
	int dn;
	cin >> dn;
	cout << dn << "岁包含" << age(dn) << "个月" << endl;
}

int age(int dna)
{
	return dna * 12;
}