#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int number;

	string flower[] = { "Rose", "Tulip", "Violet", "Pansy" };
	int price[] = { 10,9,8,7 };
	int sum = 0;

	cout << "Welcome to the florist. Please choose How many flowers do you want to buy a bouquet from: " << endl;
	cout << "1" << endl;
	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;
	cout << "any key - exit" << endl;

	cin >> number;
	
	if (number <= 4 && number != 0)
	{
		for (int i = 1; i <= number; i++)
		{
			int n = rand() % 4;

			cout << "You're choose " << flower[n] << " to your bouquet" << endl;

			sum += price[n];
		}
		cout << "Costs of these bouquet it's: " << sum << endl;
	}
	else
	{
		cout << "Thanks for shopping! Goodbye!" << endl;
		exit(0);
	}
}