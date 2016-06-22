#include <iostream>

int main()
{
	using namespace std;
	cout<< "Enter the world population:";
	long long world_population;
	cin >> world_population;
	cout << "Enter the population of the US:";
	long long us_population;
	cin >> us_population;
	double percentage;
	percentage = double(us_population) / world_population * 100;
	cout << "The population of the US is " << percentage << "% of the world population.\n";
	cin.get();
	cin.get();
	return 0;
}