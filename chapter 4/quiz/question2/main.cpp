#include <iostream>

double getDoubleInput() {
	double input{};

	std::cout << "Enter a double value: ";
	std::cin >> input;

	return input;
}

int main() {
	double val1{ getDoubleInput() };
	double val2{ getDoubleInput() };

	double result{};

	char op{};

	std::cout << "Enter one of the following: +, -, *, or /: ";

	std::cin >> op;

	if (op == '+') {
		result = val1 + val2;
	}
	else if (op == '-') {
		result = val1 - val2;
	}
	else if (op == '*') {
		result = val1 * val2;
	}
	else if (op == '/') {
		result = val1 / val2;
	}
	else {
		std::cout << "Operator not recognized, ending program";
	}

	std::cout << val1 << ' ' << op << ' ' << val2 << " is " << result;



	return 0;
}