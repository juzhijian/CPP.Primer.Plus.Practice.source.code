#include <iostream>

const int hours_per_day = 24;
const int minutes_per_hour = 60;
const int seconds_per_minute = 60;

int BD()
{
	using namespace std;
	cout << "����������";
	long seconds;
	cin >> seconds;
	int day, hour, minutes, second;
	day = seconds / seconds_per_minute / minutes_per_hour / hours_per_day;
	hour = seconds / seconds_per_minute / minutes_per_hour%hours_per_day;
	minutes = seconds / seconds_per_minute%minutes_per_hour;
	second = seconds%seconds_per_minute;
	cout << seconds << "�� = " << day << " �죬" << hour << " Сʱ��" << minutes << " �֣�" << second << " ��\n";
	cin.get();
	cin.get();
	return 0;
}