#include "one.h"
#include "Cmain.h"

struct I_CandyBar
{
	string brand;
	double weight;
	int calory;
};

void CF()
{
	I_CandyBar * snack = new I_CandyBar[3];

	snack[0] = { "A",1.1,200 };
	snack[1] = { "B",2.2,400 };
	snack[2] = { "C",4.4,500 };

	for (int i = 0; i < 3; i++)
	{
		cout << " brand: " << snack[i].brand << endl;
		cout << " weight: " << snack[i].weight << endl;
		cout << " calorie: " << snack[i].calory << endl << endl;
	}
	delete[] snack;
}