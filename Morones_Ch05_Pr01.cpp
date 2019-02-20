/*
Author: Jacob Morones
Class: Computer Programming I
Program: This will calculate various numbers and print them out
*/


#include <iostream>
#include <string>
using namespace std;

int main()
{
	int firstNum = 0;
	int secondNum = 0;
	int evenNumsSum = 0;
	int firstNumOdd = 0;
	int evenNums = 0;
	int numSquares = 0;
	char upperCaseLetters = 'A';


	while (firstNum == 0) {
		cout << "Enter the first number : ";
		cin >> firstNum;
		firstNumOdd = firstNum;
		evenNums = firstNum;


	}

	while (secondNum == 0) {
		cout << "Enter the second number: ";
		cin >> secondNum;

		cout << "The odd numbers are: ";
	}
	while (firstNumOdd < secondNum) {

		if (firstNumOdd % 2 < 1) {
			firstNumOdd = firstNumOdd + 1;
			cout << firstNumOdd << " ";
		}


		if (firstNumOdd % 2 > 0) {
			firstNumOdd = firstNumOdd + 2;
			cout << firstNumOdd << " ";
		}
	}



	while (firstNum < secondNum) {


		if (firstNum % 2 < 1) {
			firstNum = firstNum + 2;
			evenNums = firstNum;
			evenNumsSum = firstNum + (evenNums + 2);

		}


		if (firstNum % 2 > 0) {
			firstNum = firstNum + 3;
			evenNums = firstNum;
			evenNumsSum = firstNum + (evenNums + 3);


		}

		if (firstNum >= secondNum) {

			cout << endl;
			cout << "The sum of the even numbers are: " << evenNumsSum << endl;

			cout << "The numbers and squares between 1 and 10 are: ";
		}

	}



	while (10 > numSquares) {
		numSquares += 1;
		cout << numSquares * numSquares << " ";
	}

	while (upperCaseLetters <= 'A') {
		cout << endl;
		cout << "All the letters are: " << upperCaseLetters << " ";
		upperCaseLetters = upperCaseLetters + 1;
	}

	while (upperCaseLetters <= 'Z') {
		cout << upperCaseLetters << " ";
		upperCaseLetters = upperCaseLetters + 1;
	}


	return 0;
}
/*
Enter the first number : 1
Enter the second number: 10
The odd numbers are: 3 5 7 9 11
The sum of the even numbers are: 22
The numbers and squares between 1 and 10 are: 1 4 9 16 25 36 49 64 81 100
All the letters are: A B C D E F G H I J K L M N O P Q R S T U V W X Y Z Press a
ny key to continue . . .



*/