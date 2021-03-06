/*
Author: Jacob Morones
Class: Computer Programming I
Description: this will prompt the user to enter the amount they will be loaned, interest rate, and the loan period and will output a loan amortization to a seperate file

*/
#include <iostream>
#include <iomanip>
#include <fstream>


using namespace std;

int main()
{
	ofstream outFile;
	int loanPeriodYears = 0;
	int loanPeriodMonths = 0;
	double monthlyInterest = 0;
	double interestRatePercent = 0;
	double monthlyInterestDecimal = 0;
	double loanAmount = 0;
	double interestRate = 0;
	double payment = 0;
	double monthlyPaymentOutput = 0;
	double overallPayment = 0;
	double interestTotal = 0;
	double principalAmount = 0;
	double newBalance = 0;
	double monthlyInterestCount = 0;
	outFile << fixed << showpoint << setprecision(2);
	outFile.open("Ch05Proj03Output");

	cout << "Enter the amount you will be loaned: "; //This will ask the user for all the information about and will store it
	cin >> loanAmount;


	cout << "Enter the interest rate on the loan(%): ";
	cin >> interestRate;
	interestRatePercent = interestRate;
	interestRate = interestRate * .01;


	cout << "Enter the loan period in years: ";
	cin >> loanPeriodYears;
	loanPeriodMonths = loanPeriodYears * 12;

	monthlyInterest = interestRatePercent / 12;
	monthlyInterestDecimal = monthlyInterest * .01;
	payment = (monthlyInterestDecimal * loanAmount) / (1 - pow((1 + monthlyInterestDecimal), -loanPeriodMonths)); //Calculates monthly payment and puts it into "monthlyPayment"



	outFile << setw(1) << "Months ";
	outFile << setw(3) << "PaymentAmount ";
	outFile << setw(4) << "InterestAmount ";
	outFile << setw(5) << "TotalInterest ";
	outFile << setw(6) << "PrincipleAmount ";
	outFile << setw(7) << "NewBalance";


	for (int i = 1; loanPeriodMonths >= i; i = i + 1) //this will output the months
	{
		interestTotal = loanAmount * monthlyInterestDecimal;
		principalAmount = payment - (monthlyInterestDecimal * loanAmount);

		outFile << endl << setw(3) << i;
		outFile << setw(14) << payment;
		outFile << setw(14) << interestTotal;
		
		outFile << setw(15) << interestTotal + monthlyInterestCount;
		monthlyInterestCount = interestTotal + monthlyInterestCount;
		 
		outFile << setw(14) << principalAmount;



		loanAmount = loanAmount - principalAmount;
		outFile << setw(13) << loanAmount;



	}






	return 0;
}