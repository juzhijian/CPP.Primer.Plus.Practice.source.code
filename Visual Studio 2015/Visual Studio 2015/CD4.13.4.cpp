#include "one.h"
#include "Cmain.h"

const int Asize = 20;

void CD()
{
	string fname, lname, fullname;
	cout << "Enter your first name:";//�������֣��洢��fname[]������
	getline(cin,fname);
	cout << "Enter your last name:";//�����գ��洢��lname[]������
	getline(cin,lname);
	fullname = lname + "," + fname;
	cout << "Here's the information in a single string:" << fullname << endl;//��ʾ��Ͻ��
	cin.get();
	cin.get();
	system("Cls");
	Cmain();
}