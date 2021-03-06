/*
	Program Name: Morones_Ch03_Proj03
	Author: Jacob Morones
	Description: This program will output information to a txt file
*/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

const double PI = 3.1416;
using namespace std;

int main()
{   
	ifstream inFile;
	ofstream outFile;

	double length, width;
	double radius;

	inFile.open("Ch3DataIn1.txt");
	outFile.open("Ch3DataOut1.txt");

	outFile << fixed << showpoint << setprecision(2);

	inFile  >> length >> width;
	outFile << "Rectangle: " << endl
			<< "Length: " << length << ", width = " << width
			<< ", area = " << length * width
			<< ", perimeter = " << 2 * (length + width)
			<< endl << endl;

	inFile >> radius;
	outFile << "Circle: " << endl
		    << "Radius = " << radius
		    << ", area = " << PI * radius * radius
		    << ", circumference - " << PI * 2 * radius
		    << endl << endl;

	// Above - In Class
	// Below - Assignment
	
	string firstName;
	string lastName;
	string bankName;
	string ch;
	string letter;
	int age;
	double beginningBalance, interestRate, endingBalance;
	
	outFile << fixed << showpoint << setprecision(2);


	inFile >> firstName >> lastName >> age;
	
	getline(inFile, ch);
	getline(inFile, bankName);
	inFile >> beginningBalance >> interestRate;
	inFile >> endingBalance;
	 
	

	outFile << "Name: " << firstName << " " << lastName << " Age: " << age << endl
		<< bankName << endl
		<< "Beginning balance = $" << beginningBalance << endl
		<< "Interest rate = " << interestRate << endl
		<< "Balance at the end of the month = $" << beginningBalance + (interestRate *.01 * beginningBalance) << endl
		<< endl
		<< "The character that comes after A in the ASCII set is B" << endl;
	 
	

	
	return 0;
}