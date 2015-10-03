#include <iostream>
using namespace std;
void mice();
void run();

void main()
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