//������Ӧ������ָ��
#include <iostream>
const int inch_per_feet = 12;//1Ӣ��=12Ӣ��
const double meter_per_inch = 0.0254;//1Ӣ��=0.0254��
const double pound_per_kilogram = 2.2;//1ǧ��=2.2��

int main()
{
	using namespace std;
	cout << "�������������:" << endl;
	cout << "���ȣ�����������ߵ�Ӣ�߲��֣�____\b\b\b\b"<<endl;
	int ht_feet;//Ӣ��
	cin >> ht_feet;
	cout << "Ȼ������������ߵ�Ӣ�粿�֣�____\b\b\b\b" << endl;
	int ht_inch;//Ӣ��
	cin >> ht_inch;
	cout << "���ڣ��������������أ�____\b\b\b\b������" << endl;
	double wt_pound;// ��
	cin >> wt_pound;
	int inch;
	inch = ht_feet*inch_per_feet + ht_inch;//���Ӣ��
	double ht_meter;//�����
	ht_meter = inch*meter_per_inch;
	double wt_kilogram;//����ǧ��
	wt_kilogram = wt_pound / pound_per_kilogram;
	cout << "��ĸ���������Ϣ����:" << endl;
	cout << "��ߣ�" << inch << "(Ӣ�� inch��\n" << "��ߣ�" << ht_meter << "(�� meter)\n" << "���أ�" << wt_kilogram << "(ǧ�� kilogram)\n";
	double BMI;
	BMI = wt_kilogram / (ht_meter*ht_meter);
	cout << "��������ָ���ǣ�" << BMI << endl;
	cin.get();
	cin.get();
	return 0;
}
