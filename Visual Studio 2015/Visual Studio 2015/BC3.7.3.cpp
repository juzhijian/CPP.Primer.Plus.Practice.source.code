//�Զȡ��֡������룬�Զ����
#include <iostream>
const int minutes_per_degree = 60;
const int seconds_per_minute = 60;
int BC()
{
	using namespace std;
	cout << "ʹ�öȡ��֡��롢����һ��γ��\n";
	cout << "����,�����:";
	int degree;
	cin >> degree;
	cout << "��һ���������:";
	int minute;
	cin >> minute;
	cout << "���������:";
	int second;
	cin >> second;
	double show_in_degree;
	show_in_degree = (double)degree + (double)minute / minutes_per_degree + (double)second / minutes_per_degree / seconds_per_minute;
	cout << degree << " ��," << minute << " ��," << second << " �� =" << show_in_degree << " ��\n";
	cin.get();
	cin.get();
	return 0;
}