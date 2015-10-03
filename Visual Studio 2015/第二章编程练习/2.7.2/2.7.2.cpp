#include <iostream>
void main()
{
	using namespace std;
	cout << "请输入一个以long为单位的距离：";
	int l, m;
	cin >> l;
	m = l * 220;
	cout << l << "long=" << m << "码" << endl;
}
