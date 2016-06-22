//以度、分、秒输入，以度输出
#include <iostream>
const int minutes_per_degree = 60;
const int seconds_per_minute = 60;
int BC()
{
	using namespace std;
	cout << "使用度、分、秒、输入一个纬度\n";
	cout << "首先,输入度:";
	int degree;
	cin >> degree;
	cout << "下一步，输入分:";
	int minute;
	cin >> minute;
	cout << "最后，输入秒:";
	int second;
	cin >> second;
	double show_in_degree;
	show_in_degree = (double)degree + (double)minute / minutes_per_degree + (double)second / minutes_per_degree / seconds_per_minute;
	cout << degree << " 度," << minute << " 分," << second << " 秒 =" << show_in_degree << " 度\n";
	cin.get();
	cin.get();
	return 0;
}