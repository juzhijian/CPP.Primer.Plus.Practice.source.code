#include <iostream>
using namespace std;

int age(int);

void main()
{
	cout << "请输入你的年龄：";
	int n;
	cin >> n;
	cout << n << "岁包含" << age(n) << "个月" << endl;
}

int age(int na)
{
	return na * 12;
}