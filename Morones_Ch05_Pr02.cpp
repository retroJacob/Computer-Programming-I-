/*
	Author: Jacob Morones
	Class: Computer Programming I
	Program: This will calculate various numbers using for loops and print them out
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


	for (int a = firstNum; a == 0; a = a + 1) {         //Couts a promt for the first number
		cout << "Enter the first number : ";
		cin >> firstNum;
		firstNumOdd = firstNum;
		evenNums = firstNum;


	}

	for (int b = secondNum; b == 0; b = b + 1) {       //Couts a promt for the second number 
		cout << "Enter the second number: ";
		cin >> secondNum;

		cout << "The odd numbers are: ";
	}

	for (int c = firstNumOdd; c < secondNum; c = c + 0) {  // calculates and couts the odd numbers

		if (c % 2 != 0) {
			c = c + 2;
			cout << c << " ";
		}


		else {
			c = c + 1;
			cout << c << " ";
		}

	}



	for (int j = firstNum; j < secondNum; j = j + 0) {


		if (j % 2 < 1) {
			j = j + 2;
			evenNums = j;
			evenNumsSum = j + (evenNums + 2);

		}


		if (j % 2 > 0) {
			j = j + 3;
			evenNums = j;
			evenNumsSum = j + (evenNums + 3);


		}

		if (j >= secondNum) {

			cout << endl;
			cout << "The sum of the even numbers are: " << evenNumsSum << endl;

			cout << "The nsquares between 1 and 10 are: ";
		}

	}



	for (int z = 1; z <= 10; z = z + 1) {  //calculates and couts the squares of the numbers between 1 and 10
	 
		cout << z * z << " ";
	}

	for (int y = upperCaseLetters; y <= 'A'; y = y + 2) {    //couts the first uppercase letter and the prompt
		cout << endl;
		cout << "All the letters are: " << upperCaseLetters << " ";
		 
	}

	for (char x = upperCaseLetters + 1; x <= 'Z'; x = x + 1) { // Couts all the uppercase letters
		cout << x << " ";
		 
	}

	cout << endl;


	return 0;
}
/*
Enter the first number : 1
Enter the second number: 10
The odd numbers are: 3 5 7 9 11
The sum of the even numbers are: 22
The nsquares between 1 and 10 are: 1 4 9 16 25 36 49 64 81 100
All the letters are: A A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
Press any key to continue . . .
*/