#include "one.h"
#include "Amain.h"

void Amain()
{
	int Amain_i = 1;
	while (Amain_i == 1)
	{
		cout << "请选择要进入的题目：\n";
		cout << "1、地方\n";
		cout << "2、地方儿\n";
		cout << "8、返回上一级\n";
		int Amain_a;
		cin >> Amain_a;
		switch (Amain_a)
		{
		case 1:
			system("Cls");
			AA();
			Amain_i = 0;
			break;
		case 2:
			system("Cls");
			AB();
			Amain_i = 0;
			break;
		case 3:
			system("Cls");
			AC();
			Amain_i = 0;
			break;
		case 4:
			system("Cls");
			AD();
			Amain_i = 0;
			break;
		case 5:
			system("Cls");
			AE();
			Amain_i = 0;
			break;
		case 6:
			system("Cls");
			AF();
			Amain_i = 0;
			break;
		case 7:
			system("Cls");
			AG();
			Amain_i = 0;
			break;
		case 8:
			system("Cls");
			main();
			Amain_i = 0;
			break;
		default:cout << "你输入的序号没有对应的结果，请重新输入。" << endl;
			break;
		}
	}
}

