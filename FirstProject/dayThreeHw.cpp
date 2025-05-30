#include <iostream>

int main() {

		int num1, num2;
		std::cout << "Enter a first number: ";
		std::cin >> num1;

		std::cout << "Enter a second number: ";
		std::cin >> num2;

		if (num1 > num2) {
			std::cout << num2 << std::endl;
		}
		else if (num1 < num2) {
			std::cout << num1 << std::endl;
		}
		else {
			std::cout << "Both numbers are equal: " << num1 << std::endl;
		}


		int num1;

		std::cout << "Enter a number: ";
		std::cin >> num1;

		if (num1 < 0) {
			std::cout << "Negative number: " << num1 << std::endl;
		}
		else if (num1 > 0) {
			std::cout << "Positive number: " << num1 << std::endl;
		}
		else {
			std::cout << "Number is zero" << std::endl;
		}

		int num;
		std::cout << "Enter a number: ";
		std::cin >> num;

		if (num >= 5 && num <= 15) {
			std::cout << "Number is in the range of 5 to 15: " << num << std::endl;
		}
		else {
			std::cout << "Number is out of range: " << num << std::endl;

		}



		int num;
		std::cout << "enter a age: ";
		std::cin >> num;

		if (num < 18) {
			std::cout << "You are a minor." << std::endl;

		}
		else if (num >= 18) {
			std::cout << "You are an adult." << std::endl;
		}
		else {
			std::cout << "invalid age." << std::endl;
		}



		int num;
		std::cout << "Enter a number: ";
		std::cin >> num;

		if (num % 2 == 0) {
		std::cout << "Number " << num << " is even." << std::endl;
	}
	else if (num % 2 != 0) {
		std::cout << "Number " << num << " is odd." << std::endl;
	}
	else {
		std::cout << "Invalid input." << std::endl;
	}

	int num1, num2, num3;

	std::cout << "Enter first number: ";
	std::cin >> num1;
	std::cout << "Enter second number: ";
	std::cin >> num2;
	std::cout << "Enter third number: ";
	std::cin >> num3;

	if (num1 > num2 && num1 > num3) {
		std::cout << "Number " << num1 << " is largest." << std::endl;
	}
	else if (num2 > num1 && num2 > num3) {
		std::cout << "Number " << num2 << " is largest." << std::endl;
	}
	else if (num3 > num1 && num3 > num2) {
		std::cout << "Number " << num3 << " is largest" << std::endl;
	}
	else {
		std::cout << "All numbers are equal. Or it is not a number" << std::endl;
	}

	if (num >= 10 && num <= 99) {
		std::cout << "Number " << num << " is two digit." << std::endl;
	}
	else if (num <= -10 && num >= -99) {
		std::cout << "Number " << num << "is two digit negative." << std::endl;
	}

	int score;

	std::cout << "Enter your score: ";
	std::cin >> score;

	if (score >= 10 && score <= 12) {
		std::cout << "Your grade is A. Or in score it is: " << score << std::endl;
	}
	else if (score >= 7 && score <= 9) {
		std::cout << "Your grade is B. Or in score it is: " << score << std::endl;
	}
	else if (score >= 4 && score <= 6) {
		std::cout << "Your grade is C. Or in score it is: " << score << std::endl;
	}
	else if (score >= 1 && score <= 3) {
		std::cout << "Your grade is D. Or in score it is: " << score << std::endl;
	}
	else if (score == 0) {
		std::cout << "You failed. Or in score it is: " << score << std::endl;
	}
	else {
		std::cout << "Invalid score." << std::endl;
	}




	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;

	if (num % 2 != 0) {
		std::cout << "Number " << num << " is odd." << std::endl;
	}

	if (!(num >= 10 && num <= 20)) {
		std::cout << "Number " << num << " is not in the range of 10 to 20." << std::endl;
	}
	else {
		std::cout << "Number " << num << " is in the range of 10 to 20." << std::endl;
	}

	if (num != 0) {
		std::cout << "Number " << num << " is not zero." << std::endl;
	}
	else {
		std::cout << "Number is zero." << std::endl;
	}


	int day;
	std::cout << "Enter a day number (1-7): ";
	std::cin >> day;

	switch (day)
	{
	case 1:
		std::cout << "Monday" << std::endl;
		break;
	case 2:
		std::cout << "Tuesday" << std::endl;
		break;
	case 3:
		std::cout << "Wednesday" << std::endl;
		break;
	case 4:
		std::cout << "Thursday" << std::endl;
		break;
	case 5:
		std::cout << "Friday" << std::endl;
		break;
	case 6:
		std::cout << "Saturday" << std::endl;
		break;
	case 7:
		std::cout << "Sunday" << std::endl;
		break;

	default:
		std::cout << "Invalid day number. Please enter a number between 1 and 7." << std::endl;
		break;

	}

	int num1, num2;
	char mathOperate;

	std::cout << "Enter first number: ";
	std::cin >> num1;
	std::cout << "Enter second number: ";
	std::cin >> num2;

	std::cout << "Choose a math operation (+, -, *, /): ";
	std::cin >> mathOperate;

	switch (mathOperate) {
	case '+':
		std::cout << "Result: " << num1 + num2 << std::endl;
		break;
	case '-':
		std::cout << "Result: " << num1 - num2 << std::endl;
		break;
	case '*':
		std::cout << "Result: " << num1 * num2 << std::endl;
		break;
	case '/':
		std::cout << "Result: " << num1 / num2 << std::endl;
		break;

	default:
		std::cout << "Invalid operation. Please choose +, -, *, or /." << std::endl;
		break;
	}





	return 0;
}