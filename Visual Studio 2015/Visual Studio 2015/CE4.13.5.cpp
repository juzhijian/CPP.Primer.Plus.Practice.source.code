#include "one.h"
#include "Cmain.h"

struct E_CandyBar
{
	string brand;
	double weight;
	int calory;
};

void CE()
{
	E_CandyBar E_snack = { "Mocha Munch",2.3,350 };
	cout << "Here's the information of snack:\n";
	cout << "brand:" << E_snack.brand << endl;
	cout << "weight:" << E_snack.weight << endl;
	cout << "calory:" << E_snack.calory << endl;
}