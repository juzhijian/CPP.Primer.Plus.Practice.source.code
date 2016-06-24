//
#include <iostream>
const char inch_per_feet = 12;//const常量1英尺=12英寸

int BA()
{
	using namespace std;
	cout << "请输入你的身高（英寸）：___\b\b\b";
	int ht_inch;
	cin >> ht_inch;
	int ht_feet = ht_inch / inch_per_feet;//取商
	int rm_inch = ht_inch%inch_per_feet;//取余
	cout << "你的身高是：" << ht_feet << "英尺，和" << rm_inch << "英寸\n";
	cin.get();
	cin.get();
	return 0;
}