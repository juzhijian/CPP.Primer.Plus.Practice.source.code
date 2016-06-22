#include <iostream>

using namespace std;

void change(int x, int f);

void AG()
{
	int x, f;
	cout << "Enter the number of hours：";
	cin >> x;
	cout << "Enter the number of minutes：";
	cin >> f;
	change(x, f);
}

void change(int x, int f)
{
	cout << "Time:" << x << ":" << f << endl;
}