#include "one.h"
#include "Amain.h"

void Amain()
{
	int Amain_i = 1;
	while (Amain_i == 1)
	{
		cout << "��ѡ��Ҫ�������Ŀ��\n";
		cout << "1���ط�\n";
		cout << "2���ط���\n";
		cout << "3��������һ��\n";
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
			//b();
			Amain_i = 0;
			break;
		case 3:
			system("Cls");
			main();
			Amain_i = 0;
			break;
		default:cout << "����������û�ж�Ӧ�Ľ�������������롣" << endl;
			break;
		}
	}
}

