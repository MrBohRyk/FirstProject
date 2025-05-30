#include <iostream> //бібліотека для вводу/виводу

int main() {       // головна функція програми
	setlocale(LC_ALL, "UA"); // встановлення української локалі



	// Використання умовних операторів для порівняння введеного числа з


	int num;   // змінна для зберігання введеного числа
	std::cin >> num; // зчитування числа з консолі
	if (num > 3) {   // перевірка, чи більше число 3
		std::cout << "The number is greater" << std::endl;  // виведення повідомлення, якщо число більше 3
	}
	else if (num < 3) {  // перевірка, чи менше число 3
		std::cout << "The number is less" << std::endl;
	} 
	if (num == 3) { //перевірка, чи дорівнює число 3 НЕ ПИСАТИ "=" бо це присвоєння
		std::cout << "The number is equal" << std::endl;
	}
	else if (num != 3) { // перевірка, чи не дорівнює число 3
		std::cout << "The number is not equal" << std::endl;
	}
	if (num >= 3) { // перевірка, чи більше або дорівнює число 3
		std::cout << "The number is greater or equal" << std::endl;
	}
	else if(num <= 3) {  // перевірка, чи менше або дорівнює число 3
		std::cout << "The number is less or equal" << std::endl; // виведення повідомлення, якщо число менше або дорівнює 3
	}
	if (num % 2 == 0) {
		std::cout << "The number is even" << std::endl; // перевірка, чи число парне
	}
	else if(num % 2 != 0) {
		std::cout << "The number is odd" << std::endl; // перевірка, чи число непарне
	}

	// виокористання || && для перевірки чисел || логічне "або" && логічне "і" 
	// множинна перевірка 

	if (num > 0 || num < 0) { // перевірка, чи число додатнє або від'ємне
		std::cout << "The number is positive or negative" << std::endl; // виведення повідомлення, якщо число додатнє або від'ємне
	}
	else if (num == 0) { // перевірка, чи число дорівнює нулю
		std::cout << "The number is zero" << std::endl; // виведення повідомлення, якщо число дорівнює нулю
	}
	if (num > 0 && num < 10) { // перевірка, чи число більше 0 і менше 10
		std::cout << "The number is between 0 and 10" << std::endl; // виведення повідомлення, якщо число в діапазоні від 0 до 10
	}
	else if (num < 0 || num > 10) { // перевірка, чи число менше 0 або більше 10
		std::cout << "The number is not between 0 and 10" << std::endl; // виведення повідомлення, якщо число не в діапазоні від 0 до 10
	}


	bool is_has_car = true; // змінна для перевірки наявності картки

	if (is_has_car) { // перевірка, чи є картка
		std::cout << "You have a car" << std::endl; // виведення повідомлення, якщо картка є
	}
	else { // якщо картки немає
		std::cout << "You don't have a car" << std::endl; // виведення повідомлення, якщо картки немає
	}

	if (is_has_car && num > 0) { // перевірка, чи є картка і число більше 0
		std::cout << "You have a car and a positive number" << std::endl; // виведення повідомлення, якщо картка є і число додатнє
	}
	else if (!is_has_car || num <= 0) { // перевірка, чи немає картки або число менше або дорівнює 0
		std::cout << "You don't have a car or a non-positive number" << std::endl; // виведення повідомлення, якщо картки немає або число непозитивне
	}

	if (!is_has_car) { // перевірка, чи немає картки
		std::cout << "You don't have a car" << std::endl; // виведення повідомлення, якщо картки немає
	}
	else { // якщо картка є
		std::cout << "You have a car" << std::endl; // виведення повідомлення, якщо картка є
	}


	//switch case для перевірки значення змінної num

	int day;
	std::cin >> day; // зчитування дня тижня з консолі

	switch (day) {
	case 5: 
		std::cout << "It's Friday" << std::endl; // якщо день 5, виводимо "It's Friday"
		break; // вихід з switch
	default: 
		std::cout << "It's not Friday" << std::endl; // для всіх інших значень, виводимо "It's not Friday"
	}


	return 0;
}