#include "one.h"
#include "Cmain.h"

struct F_CandyBar
{
	string brand;
	double weight;
	int calory;
};

void CF()
{
	F_CandyBar snack[3] = {
		{ "Mocha Munch",2.3,350 },
		{ "XuFuJi",1.1,300 },
		{ "Alps",0.4,100 }
	};
	for (int i = 0; i < 3; i++)//����forѭ������ʾsnack����������
	{
		cout << snack[i].brand << endl
			<< snack[i].weight << endl
			<< snack[i].calory << endl << endl;
	}

}