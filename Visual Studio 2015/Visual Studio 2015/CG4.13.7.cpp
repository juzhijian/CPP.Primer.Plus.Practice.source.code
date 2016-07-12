#include "one.h"
#include "Cmain.h"

struct G_pizza//ÉùÃ÷½á¹¹
{
	string company;
	double diameter;
	double weight;
};


void CG()
{
	G_pizza pie;
	cout << "What's the  name of pizza company:";
	getline(cin,pie.company);
	cout << "What's the diameter of pizza:";
	cin >> pie.diameter;
	cout << "What's  the weight of pizza:";
	cin >> pie.weight;
	cout << "company:" << pie.company << endl;
	cout << "diameter:" << pie.diameter << "inches" << endl;
	cout << "weight:" << pie.weight << "ounches" << endl;
}