#include <iostream>

int main() {
	bool b1{ true };

	std::cout << b1 << '\n';
	std::cout << !b1 << '\n';

	std::cout << std::boolalpha;

	std::cout << b1 << '\n';
	std::cout << !b1 << '\n';

	std::cout << 1 << '\n';

	bool b0{ 0 };
	//bool bErr{ 2 };

	std::cout << b0 << '\n';


	bool input{};
	std::cout << "Enter a boolean: ";
	std::cin >> input;
	std::cout << "You entered: " << input << '\n';

	std::cin >> std::boolalpha;

	std::cout << "Enter a boolean: ";
	std::cin >> input;
	std::cout << "You entered: " << input << '\n';

	return 0;
}