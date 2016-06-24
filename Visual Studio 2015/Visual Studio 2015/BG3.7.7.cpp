#include <iostream>

int BG()
{
	using namespace std;
	cout << "请输入欧洲风格的耗油量: ";
	double v = 0;
	cin >> v;
	const double Y_TO_G = 62.14;//英里转公里
	const double C_TO_V = 3.875;//加仑转升
	cout << "美国风格耗油量为: " << Y_TO_G * C_TO_V / v << endl;
	cin.get();
	cin.get();
	return 0;
}