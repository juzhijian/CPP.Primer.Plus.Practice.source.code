//
#include <iostream>
const char inch_per_feet = 12;//const����1Ӣ��=12Ӣ��

int main()
{
	using namespace std;
	cout << "�����������ߣ�Ӣ�磩��___\b\b\b";
	int ht_inch;
	cin >> ht_inch;
	int ht_feet = ht_inch / inch_per_feet;//ȡ��
	int rm_inch = ht_inch%inch_per_feet;//ȡ��
	cout << "�������ǣ�" << ht_feet << "Ӣ�ߣ���" << rm_inch << "Ӣ��\n";
	cin.get();
	cin.get();
	return 0;
}