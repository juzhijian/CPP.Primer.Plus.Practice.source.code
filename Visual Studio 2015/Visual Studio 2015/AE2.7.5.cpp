#include <iostream>
using namespace std;
double AE_change(double nx);

void AE()
{
	cout << "请输入摄氏度：";
	double n;
	cin >> n;
	cout << n << "摄氏度等于" << AE_change(n) << "华氏度" << endl;
}

double AE_change(double nx)
{
	return 1.8*nx + 32;
}