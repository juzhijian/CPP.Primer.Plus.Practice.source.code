#include "one.h"
#include "Amain.h"

int AD_age(int);

void AD()
{
	cout << "请输入你的年龄：";
	int AD_n;
	cin >> AD_n;
	cout << AD_n << "岁包含" << AD_age(AD_n) << "个月" << endl;
	cin.get();
	cin.get();
	system("Cls");
	Amain();
}

int AD_age(int AD_na)
{
	return AD_na * 12;
}