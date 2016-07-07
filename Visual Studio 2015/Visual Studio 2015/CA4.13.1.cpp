#include <iostream>

const int Asize = 20;

using namespace std;

struct student //定义结构描述
{
	char firstname[Asize];
	char lastname[Asize];
	char grade;
	int age;
};

void display(student);

int main()
{
	cout << "what is your first name?" << endl;
	student lcg;//创建结构变量（结构数据对象）
	cin.getline(lcg.firstname, Asize);
	cout << "what is your last name?" << endl;
	cin.getline(lcg.lastname, Asize);
	cout << "what letter grade do you deserve?" << endl;
	cin >> lcg.grade;
	cout << "what is your age?" << endl;
	cin >> lcg.age;
	display(lcg);
	return 0;
}

void display(student name)
{

	cout << "Name: " << name.firstname << "," << name.lastname << endl;
	cout << "Grade:" << char(name.grade + 1) << endl;
	cout << "Age:" << name.age << endl;
}

