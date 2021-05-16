#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Create and fill array prices with 10 items
	double prices[10] = { 96.5, 100.5, 100.5, 100.5, 99, 99, 99, 100, 98.5, 98.9 };
	
	double total = 0.0;
	double average = 0.0;

	//For loop to total the prices and divide by 10 to find average
	for (int index = 0; index < 10; index++)
	{
		total += prices[index];
	}

	average = total / 10;

	cout << fixed << setprecision(2);
	cout << "Average stock price: $" << average << endl;
	return 0;
}