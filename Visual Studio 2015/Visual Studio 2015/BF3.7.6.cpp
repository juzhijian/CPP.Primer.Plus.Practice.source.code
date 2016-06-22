//汽车耗油量-美国(mpg)or欧洲风格(L/100Km)
#include <iostream>

int BF()
{
	using namespace std;
	cout << "请输入驱车里程（英里）:";
	double m_distance;
	cin >> m_distance;
	cout << "请输入使用汽油量（加仑）:";
	double m_gasoline;
	cin >> m_gasoline;
	cout << "您的车每加仑可以跑 " << m_distance / m_gasoline << " 英里\n";
	cout << "欧洲风格计算:\n";
	cout << "请输入驱车里程（公里）:";
	double k_distance;
	cin >> k_distance;
	cout << "请输入使用汽油量（升）:";
	double k_gasoline;
	cin >> k_gasoline;
	cout << "在欧洲风格:" << "您的车使用 " << 100 * k_gasoline / k_distance << " 升汽油可以跑100公里\n";
	cin.get();
	cin.get();
	return 0;
}