#include "one.h"
#include "Cmain.h"

const int Asize = 20;

void CD()
{
	string fname, lname, fullname;
	cout << "Enter your first name:";//输入名字，存储在fname[]数组中
	getline(cin,fname);
	cout << "Enter your last name:";//输入姓，存储在lname[]数组中
	getline(cin,lname);
	fullname = lname + "," + fname;
	cout << "Here's the information in a single string:" << fullname << endl;//显示组合结果
	cin.get();
	cin.get();
	system("Cls");
	Cmain();
}