#include <iostream>

int print(int x) {
	return x;
}

int main() {
	char input{};

	std::cout << "Enter a single character: ";

	std::cin >> input;

	//std::cout << "You entered '" << input << "', which has ASCII code " << static_cast<int>(input) << ".";
	std::cout << "You entered '" << input << "', which has ASCII code " << print(input) << ".";

	return 0;
}