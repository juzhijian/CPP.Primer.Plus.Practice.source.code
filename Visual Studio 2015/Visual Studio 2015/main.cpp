#include "one.h"
#include "main.h"

void main()
{
	int main_i = 1;
	while (main_i == 1)
	{
		cout << "请选择要进入的章节：\n";
		cout << "1、第二章编程练习题		2、第三章编程练习题" << endl;
		int main_a;
		cin >> main_a;
		switch (main_a)
		{
		case 1:
			system("Cls");
			Amain();
			main_i = 0;
			break;
		default:cout << "你输入的序号没有对应的结果，请重新输入。" << endl;
			break;
		}
	}
	cin.get();
	cin.get();
}

