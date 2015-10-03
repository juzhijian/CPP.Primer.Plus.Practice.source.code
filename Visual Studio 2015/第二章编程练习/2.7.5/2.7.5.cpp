#include <iostream>
using namespace std;
double change(double nx);

void main()
{
	cout << "请输入摄氏度：";
	double n;
	cin >> n;
	cout << n << "摄氏度等于" << change(n) << "华氏度" << endl;
}

double change(double nx)
{
	return 1.8*nx + 32;
}