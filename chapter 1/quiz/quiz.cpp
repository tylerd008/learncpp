#include <iostream>

int main() {

	int int1{};
	int int2{};

	std::cout << "Enter an integer: ";
	std::cin >> int1;
	std::cout << "Enter another integer:";
	std::cin >> int2;

	std::cout << int1 << " + " << int2 << " is " << int1 + int2 << ".\n";
	std::cout << int1 << " - " << int2 << " is " << int1 - int2 << ".\n";

	return 0;
}