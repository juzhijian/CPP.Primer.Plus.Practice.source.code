#include "one.h"
#include "main.h"

void main()
{
	int main_i = 1;
	while (main_i == 1)
	{
		cout << "��ѡ��Ҫ������½ڣ�\n";
		cout << "1���ڶ��±����ϰ��		2�������±����ϰ��" << endl;
		int main_a;
		cin >> main_a;
		switch (main_a)
		{
		case 1:
			system("Cls");
			Amain();
			main_i = 0;
			break;

		default:cout << "����������û�ж�Ӧ�Ľ�������������롣" << endl;
			break;
		}
	}
	cin.get();
	cin.get();
}

