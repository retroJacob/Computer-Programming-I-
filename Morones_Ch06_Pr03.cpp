/*			
			Author: Jacob Morones
			Class: Computer Programming I
			Description: This program will take 3 prices, then will use void functions to calculate and output the amound of inflation and if it is increasing or not.
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


void getPrices(double&, double&, double&);
void calculateInflation(double&, double&, double&, double&, double&);
void printResults(double&, double&);
int main()
{
	double currentPrice;
	double oneYearPrice = 0;
	double twoYearPrice = 0;
	double currentInflation = 0;
	double oneYearInflation = 0;
	cout << fixed << showpoint << setprecision(2);

	 getPrices(currentPrice,oneYearPrice,twoYearPrice);
	 calculateInflation(currentInflation, oneYearInflation, currentPrice, oneYearPrice, twoYearPrice);
	 printResults(currentInflation, oneYearInflation);

	return 0;
}
void getPrices(double& currentPrice, double& oneYearPrice, double& twoYearPrice)
{
	cout << "Enter the current price:";
	cin >> currentPrice;

	cout << endl << "Enter the price 1 year ago:";
	cin >> oneYearPrice;

	cout << endl << "Enter the price 2 years ago:";
	cin >> twoYearPrice;

}

void calculateInflation(double& currentInflation, double& oneYearInflation, double& currentPrice, double& oneYearPrice, double& twoYearPrice)
{
	currentInflation = (currentPrice - oneYearPrice) / oneYearPrice;
	oneYearInflation = (oneYearPrice - twoYearPrice) / twoYearPrice;
}

void printResults(double& currentInflation, double& oneYearInflation)
{
	cout << "Current year inflation: " << currentInflation << endl;
	cout << "Inflation one year ago: " << oneYearInflation << endl;

	if (oneYearInflation > currentInflation)
		cout << "Inflation is not increasing." << endl;
	else
		cout << "Inflation is increasing." << endl;
}
/*
Enter the current price:3.23

Enter the price 1 year ago:3.84

Enter the price 2 years ago:3.55
Current year inflation: -0.16
Inflation one year ago: 0.08
Inflation is not increasing.
Press any key to continue . . .
*/

/*
Enter the current price:16995.95

Enter the price 1 year ago:16119.95

Enter the price 2 years ago:15799.95
Current year inflation: 0.05
Inflation one year ago: 0.02
Inflation is increasing.
Press any key to continue . . .
*/