//����������-����(mpg)orŷ�޷��(L/100Km)
#include <iostream>

int BF()
{
	using namespace std;
	cout << "������������̣�Ӣ�:";
	double m_distance;
	cin >> m_distance;
	cout << "������ʹ�������������أ�:";
	double m_gasoline;
	cin >> m_gasoline;
	cout << "���ĳ�ÿ���ؿ����� " << m_distance / m_gasoline << " Ӣ��\n";
	cout << "ŷ�޷�����:\n";
	cout << "������������̣����:";
	double k_distance;
	cin >> k_distance;
	cout << "������ʹ��������������:";
	double k_gasoline;
	cin >> k_gasoline;
	cout << "��ŷ�޷��:" << "���ĳ�ʹ�� " << 100 * k_gasoline / k_distance << " �����Ϳ�����100����\n";
	cin.get();
	cin.get();
	return 0;
}