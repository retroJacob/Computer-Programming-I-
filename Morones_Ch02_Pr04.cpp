#include<iostream>

using namespace std;

int main()
{
	double hoursWorked;
	cout << "Enter the amound of hours you worked each week" << endl;
	cin >> hoursWorked;
	double hoursWorkedTotal = hoursWorked * 5;
	double income = hoursWorkedTotal * 15.5;
	double taxedIncome = income - (income * .14);
	double clothesExpense = taxedIncome * .1;
	double suppliesExpense = taxedIncome * .01;
	double bonds = (taxedIncome - clothesExpense - suppliesExpense) * .25;
	double parentsBonds = bonds * .5;
	double moneyLeft = taxedIncome - clothesExpense - suppliesExpense - bonds;

	cout << "You make $" << income << " before taxes " << endl;
	cout << "You make $" << taxedIncome << " after taxes " << endl;
	cout << "You spent $" << clothesExpense << " on clothes and other accessories" << endl;
	cout << "You spent $" << suppliesExpense << " on school supplies" << endl;
	cout << "You spent $" << bonds << " on bonds" << endl;
	cout << "Your parents spent $" << parentsBonds << " on bonds" << endl;
	cout << "You have $" << moneyLeft << " left " << endl;

	return(0);

}