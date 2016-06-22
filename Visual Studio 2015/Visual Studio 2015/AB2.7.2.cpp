#include "one.h"
#include "Amain.h"

void AB()
{
	cout << "请输入一个以long为单位的距离：";
	int AB_l, AB_m;
	cin >> AB_l;
	AB_m = AB_l * 220;
	cout << AB_l << "long=" << AB_m << "码" << endl;
	cin.get();
	cin.get();
	system("Cls");
	Amain();
}