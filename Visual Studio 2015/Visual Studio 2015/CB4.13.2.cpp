#include "one.h"
#include "Cmain.h"

void CB()
{
	string name, dessert;

	cout << "Enter your name:\n";
	getline(cin, name);
	cout << "Enter your favorite dessert:\n";
	getline(cin, dessert);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	cin.get();
	cin.get();
	system("Cls");
	Cmain();
}