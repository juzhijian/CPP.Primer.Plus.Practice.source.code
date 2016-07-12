#include "one.h"
#include "Cmain.h"

struct H_pizza
{
	string company;
	double diameter;
	double weight;
};

void CH()
{
	H_pizza * pie = new H_pizza;//使用new创建动态结构
	cout << "What's the diameter of pizza:";
	cin >> pie->diameter;
	cin.get();//读取下一个字符
	cout << "What's the  name of pizza company:";
	getline(cin, pie->company);
	cout << "What's  the weight of pizza:";
	cin >> pie->weight;
	cout << "diameter:" << pie->diameter << " inches" << endl;
	cout << "company:" << pie->company << endl;
	cout << "weight:" << pie->weight << " ounches" << endl;
	delete pie;//delete释放内存
}
