#include <iostream>

int BG()
{
	using namespace std;
	cout << "������ŷ�޷��ĺ�����: ";
	double v = 0;
	cin >> v;
	const double Y_TO_G = 62.14;//Ӣ��ת����
	const double C_TO_V = 3.875;//����ת��
	cout << "������������Ϊ: " << Y_TO_G * C_TO_V / v << endl;
	cin.get();
	cin.get();
	return 0;
}