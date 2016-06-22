#include <iostream>
using namespace std;
void mice();
void run();

void AC()
{
	mice();
	mice();
	run();
	run();
}

void mice()
{
	cout << "Three blind mice" << endl;
}

void run()
{
	cout << "See how they run" << endl;
}