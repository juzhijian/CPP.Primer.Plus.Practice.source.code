#include "one.h"
#include "Cmain.h"

void Cmain()
{
	int Cmain_i = 1;
	while (Cmain_i == 1)
	{
		cout << "请选择要进入的题目：\n";
		cout << "1、地方\n";
		cout << "2、地方儿\n";
		cout << "8、返回上一级\n";
		int Cmain_a;
		cin >> Cmain_a;
		switch (Cmain_a)
		{
		case 1:
			system("Cls");
			cin.get();
			CA();
			Cmain_i = 0;
			break;
		case 2:
			system("Cls");
			cin.get();
			CB();
			Cmain_i = 0;
			break;
		case 3:
			system("Cls");
			cin.get();
			CC();
			Cmain_i = 0;
			break;
		case 4:
			system("Cls");
			cin.get();
			CD();
			Cmain_i = 0;
			break;
		case 5:
			system("Cls");
			cin.get();
			CE();
			Cmain_i = 0;
			break;
		case 8:
			system("Cls");
			cin.get();
			main();
			Cmain_i = 0;
			break;
		default:cout << "你输入的序号没有对应的结果，请重新输入。" << endl;
			break;
		}
	}
}

