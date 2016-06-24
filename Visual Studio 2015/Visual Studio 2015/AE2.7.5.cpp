#include "one.h"
#include "Amain.h"

double AE_change(double);

void AE()
{
	cout << "请输入摄氏度：";
	double AE_n;
	cin >> AE_n;
	cout << AE_n << "摄氏度等于" << AE_change(AE_n) << "华氏度" << endl;
	cin.get();
	cin.get();
	system("Cls");
	Amain();
}

double AE_change(double AE_nx)
{
	return 1.8*AE_nx + 32;
}