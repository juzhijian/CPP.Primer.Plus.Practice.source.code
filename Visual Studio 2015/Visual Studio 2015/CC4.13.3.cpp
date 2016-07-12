#include "one.h"
#include "Cmain.h"

const int Asize = 20;

void CC()
{
	char fname[Asize];
	char lname[Asize];
	char fullname[2 * Asize + 1];
	cout << "Enter your first name:";//输入名字，存储在fname[]数组中
	cin.getline(fname, Asize);
	cout << "Enter your last name:";//输入姓，存储在lname[]数组中
	cin.getline(lname, Asize);

	strncpy_s(fullname, lname, Asize);//把姓lname复制到fullname空数组中
	strcat_s(fullname, ", ");//把“， ”附加到上述fullname尾部
	strncat_s(fullname, fname, Asize);//把fname名字附加到上述fullname尾部

	fullname[2 * Asize] = '\0';//为防止字符型数组溢出，在数组结尾添加结束符 
	cout << "Here's the information in a single string:" << fullname << endl;//显示组合结果
	cin.get();
	cin.get();
	system("Cls");
	Cmain();
}