#include "one.h"
#include "Cmain.h"

void Cmain()
{
	int Cmain_i = 1;
	while (Cmain_i == 1)
	{
		cout << "��ѡ��Ҫ�������Ŀ��\n";
		cout << "1���ط�\n";
		cout << "2���ط���\n";
		cout << "8��������һ��\n";
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
		default:cout << "����������û�ж�Ӧ�Ľ�������������롣" << endl;
			break;
		}
	}
}

