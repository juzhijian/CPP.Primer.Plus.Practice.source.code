#include "one.h"
#include "Cmain.h"

const int Asize = 20;

void CC()
{
	char fname[Asize];
	char lname[Asize];
	char fullname[2 * Asize + 1];
	cout << "Enter your first name:";//�������֣��洢��fname[]������
	cin.getline(fname, Asize);
	cout << "Enter your last name:";//�����գ��洢��lname[]������
	cin.getline(lname, Asize);

	strncpy_s(fullname, lname, Asize);//����lname���Ƶ�fullname��������
	strcat_s(fullname, ", ");//�ѡ��� �����ӵ�����fullnameβ��
	strncat_s(fullname, fname, Asize);//��fname���ָ��ӵ�����fullnameβ��

	fullname[2 * Asize] = '\0';//Ϊ��ֹ�ַ�������������������β��ӽ����� 
	cout << "Here's the information in a single string:" << fullname << endl;//��ʾ��Ͻ��
	cin.get();
	cin.get();
	system("Cls");
	Cmain();
}