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
	H_pizza * pie = new H_pizza;//ʹ��new������̬�ṹ
	cout << "What's the diameter of pizza:";
	cin >> pie->diameter;
	cin.get();//��ȡ��һ���ַ�
	cout << "What's the  name of pizza company:";
	getline(cin, pie->company);
	cout << "What's  the weight of pizza:";
	cin >> pie->weight;
	cout << "diameter:" << pie->diameter << " inches" << endl;
	cout << "company:" << pie->company << endl;
	cout << "weight:" << pie->weight << " ounches" << endl;
	delete pie;//delete�ͷ��ڴ�
}
