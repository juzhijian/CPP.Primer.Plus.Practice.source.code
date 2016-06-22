#include <iostream>
using namespace std;

void AB()
{
	cout << "请输入一个以long为单位的距离：";
	int bl, bm;
	cin >> bl;
	bm = bl * 220;
	cout << bl << "long=" << bm << "码" << endl;
}